//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "HexFile.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(THexFile *)
{
    new THexFile(NULL);
}
//---------------------------------------------------------------------------
__fastcall THexFile::THexFile(TComponent* Owner)
    : TComponent(Owner)
{
}
//---------------------------------------------------------------------------
namespace Hexfile
{
    void __fastcall PACKAGE Register()
    {
        TComponentClass classes[1] = {__classid(THexFile)};
        RegisterComponents("Hardware", classes, 0);
    }
}
//---------------------------------------------------------------------------
// считываю символ из hex-файла
int __fastcall THexFile::GetHexDigit(FILE *fp)
	{
	int c;
	++noc;
	_erfile=thfeOK;
	if ( (c=getc(fp)) == EOF )
		{ _erfile=thfeEnd; return 0; }
	c -= (c>'9') ? ('A'-10) : ('0');
	if ( c<0 || c>0xF )
		{ _erfile=thfeSymbol; return 0; }
	return c;
	}
//---------------------------------------------------------------------------
// Записываю символ в hex-файл
void __fastcall THexFile::PutHexDigit(int c,FILE *fp)
	{
	++noc;
    _erfile=thfeWrite;
    c&=0xF;
    c += (c>9) ? ('A'-10) : ('0');
    if(putc(c,fp)==EOF) return;
	_erfile=thfeOK;
	return;
	}
//---------------------------------------------------------------------------
//считываю байт из hex-файла
int __fastcall THexFile::GetHexByte(FILE *fp)
   {
   int b;
   b = GetHexDigit(fp);
   b = (b<<4) + GetHexDigit(fp);
   check += b;               /* nasty side-effect, but useful trick */
   return b;
   }
//---------------------------------------------------------------------------
//Записываю байт в hex-файл
void __fastcall THexFile::PutHexByte(int b, FILE *fp)
   {
   PutHexDigit(b>>4,fp);
   PutHexDigit(b,fp);
   check += b;
   }
//---------------------------------------------------------------------------
//считываю слово из hex-файла
unsigned __fastcall THexFile::GetHexWord(FILE *fp)
   {
   unsigned w;
   w = GetHexByte(fp);
   w = (w<<8) + GetHexByte(fp);
   return w;
   }
//---------------------------------------------------------------------------
//Записываю слово в hex-файл
void __fastcall THexFile::PutHexWord(unsigned w, FILE *fp)
   {
   PutHexByte(w>>8,fp);
   PutHexByte(w,fp);
   }
//---------------------------------------------------------------------------
THexFileError __fastcall THexFile::WordToByteMassiv(word buf[], int bufsize)
	{
	int i=0,j=0;
	word ww;
	for(j=0;j<bufsize;j++)
		{
		ww = buf[i++]&0xff;
		ww|=(buf[i++]<<8)&0xff00;
		buf[j] = ww;
		}
    return thfeOK;
	}

#define swab(w) (((w)>>8)+(((w)&0xFF)<<8))   /* swap bytes */

//---------------------------------------------------------------------------
//Считывание hex-файла
void __fastcall THexFile::Load(word buf[], int bufsize)
{
FILE *fp;
int type, nwords, i, c;
unsigned address, w;

_erfile=thfeOK;
fp=fopen(FileName.c_str(),"rb");

if(fp==NULL)
	{
    _erfile=thfeOpen;
    fclose(fp);
    return;
    }
else if(FileType==thftBINM)
    {
    for(address=0;address<(bufsize/2);address++)
        {
        w=0;
        if ( (c=getc(fp)) == EOF ) break;
        w|=c&0x00FF;
        if ( (c=getc(fp)) == EOF ) break;
        w|=(c<<8)&0xFF00;
        buf[address]=w;
        }
    }
else if(FileType==thftBINS)
    {
    for(address=0;address<bufsize;address++)
        {
        if ( (c=getc(fp)) == EOF ) break;
        buf[address]=c&0xFF;
        }
    }
else
    {
    nos=0;
	type = 0;
    while ( type != 1 )
		{
		nos++;
		/*считываю начало строки*/
		noc=1;
		if ( getc(fp) != ':' )
			{ _erfile=thfeLabel; goto exit; }
		check = 0;
		/*считываю длину строки*/
		w = GetHexByte(fp);
		if ( _erfile!=thfeOK )
			{ goto exit; }
		switch(FileType)
			{
			default:
			case thftINHX8M: nwords=w/2; break;
			case thftINHX8S:
			case thftINHX8SL:
			case thftINHX8SH:
			case thftINHX16: nwords=w; break;
			}
		/*считываю адрес*/
		w = GetHexWord(fp);
		if ( _erfile!=thfeOK )
			{ goto exit; }
		switch(FileType)
			{
			default:
			case thftINHX8M: address=w/2; break;
			case thftINHX8S:
			case thftINHX8SL:
			case thftINHX8SH:
			case thftINHX16: address=w; break;
			}
		/*считываю тип строки*/
		type = GetHexByte(fp);
		if ( _erfile!=thfeOK )
			{ goto exit; }
		/*считываю данные*/
		for ( i=0; i<nwords; ++i, ++address )
			{
			if ( address >= bufsize )
				{ _erfile=thfeBig; goto exit; }
			switch(FileType)
				{
				case thftINHX8S:
				case thftINHX8SL:
				case thftINHX8SH: w = GetHexByte(fp); break;
				default:
				case thftINHX8M:
				case thftINHX16: w = GetHexWord(fp); break;
				}
			if ( _erfile!=thfeOK )
				{ goto exit; }
			switch(FileType)
				{
				default:
				case thftINHX8SH:	w &= 0xff;
				case thftINHX8M:	buf[address] = swab(w); break;
				case thftINHX8S:
				case thftINHX8SL:   w &= 0xff;
				case thftINHX16:	buf[address] = w; break;
				}
			}
		(void) GetHexByte(fp);
		(void) getc(fp);
		(void) getc(fp);
		if ( check&0xFF )
			{ _erfile=thfeCRC; goto exit; }
		}
//	if(FileType==thftINHX8S) WordToByteMassiv(buf,bufsize/2);
    _erfile = thfeOK;
    }
exit:
fclose(fp);
return;
}
//---------------------------------------------------------------------------
//Запись hex-файла
void __fastcall THexFile::Save(word buf[], int bufsize)
{
FILE *fp;
int type, nwords, i, c;
unsigned address, w;

_erfile=thfeWrite;
fp=fopen(FileName.c_str(),"wb");

if(fp==NULL)
	{
    _erfile=thfeOpen;
    goto exit;
    }
else if(FileType==thftBINM)
    {
    for(address=0;address<(bufsize/2);address++)
        {
        w=buf[address];
        c=w&0xFF;
        if ( (putc(c,fp)) == EOF ) goto exit;
        c=(w>>8)&0xFF;
        if ( (putc(c,fp)) == EOF ) goto exit;
        }
    }
else if(FileType==thftBINS)
    {
    for(address=0;address<bufsize;address++)
        {
        w=buf[address];
        c=w&0xFF;
        if ( (putc(c,fp)) == EOF ) goto exit;
        }
    }
else
    {
	nos=0;
	type = 0;
    address=0;
    while( type != 1 )
	do	{
		nos++;
		noc=1;
		/*формирую начало строки*/
        _erfile=thfeWrite;
        if(putc(':',fp)==EOF) goto exit;
		check = 0;
		/*формирую длину строки*/
        nwords=bufsize-address;
        if(nwords>16) nwords=16;
		switch(FileType)
			{
			default:
			case thftINHX8M: w=nwords*2; break;
			case thftINHX8S:
			case thftINHX8SL:
			case thftINHX8SH:
			case thftINHX16: w=nwords; break;
			}
        PutHexByte(w,fp);
		if ( _erfile!=thfeOK ) goto exit;
		/*формирую адрес*/
		switch(FileType)
			{
			default:
			case thftINHX8M: w=address*2; break;
			case thftINHX8S:
			case thftINHX8SL:
			case thftINHX8SH:
			case thftINHX16: w=address; break;
			}
        if(nwords==0) w=0;
        PutHexWord(w,fp);
		if ( _erfile!=thfeOK ) goto exit;
		/*формирую тип записи*/
        if(nwords==0)   { type=1; w=1; }
        else            { type=0; w=0; }
        PutHexByte(w,fp);
		if ( _erfile!=thfeOK ) goto exit;
        /*формирую данные*/
        if(type!=1)
        for(i=0;i<nwords;i++)
            {
            w=buf[address++];
			switch(FileType)
				{
				default:
				case thftINHX8SH:	w &= 0xff;
				case thftINHX8M:	w  = swab(w); break;
				case thftINHX8S:
				case thftINHX8SL:   w &= 0xff;
				case thftINHX16:	break;
				}
			switch(FileType)
				{
				case thftINHX8S:
				case thftINHX8SL:
				case thftINHX8SH: PutHexByte(w,fp); break;
				default:
				case thftINHX8M:
				case thftINHX16:  PutHexWord(w,fp); break;
				}
    		if ( _erfile!=thfeOK ) goto exit;
            }
        /*формирую контрольную сумму*/
        w=0-check;
        PutHexByte(w,fp);
		if ( _erfile!=thfeOK ) goto exit;
        /*формирую конец строки*/
        if(putc(0x0D,fp)==EOF) goto exit;
        if(putc(0x0A,fp)==EOF) goto exit;
		} while(type!=1);
    }
_erfile = thfeOK;
exit:
fclose(fp);
return;
}
//---------------------------------------------------------------------------

