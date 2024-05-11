//---------------------------------------------------------------------------
#ifndef HexFileH
#define HexFileH
//---------------------------------------------------------------------------
#include <SysUtils.hpp>
#include <Controls.hpp>
#include <Classes.hpp>
#include <Forms.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <conio.h>
#include "types.h"
//---------------------------------------------------------------------------
typedef enum {thfeOK, thfeBig, thfeCRC, thfeSymbol, thfeEnd, thfeLabel, thfeNoDefine, thfeOpen, thfeRead, thfeWrite } THexFileError;
typedef enum {thftINHX8M, thftINHX8S, thftINHX8SL, thftINHX8SH, thftINHX16, thftBINM, thftBINS} THexFileType;
//---------------------------------------------------------------------------
class PACKAGE THexFile : public TComponent
{
private:
    THexFileError _erfile;
    THexFileType FileType;
    AnsiString   FileName;
    int check;  //контрольная сумма
    int nos;    //номер строки
    int noc;    //номер символа
protected:
    int __fastcall GetHexDigit(FILE *fp);
    int __fastcall GetHexByte(FILE *fp);
    unsigned __fastcall GetHexWord(FILE *fp);
    void __fastcall PutHexDigit(int c, FILE *fp);
    void __fastcall PutHexByte(int b, FILE *fp);
    void __fastcall PutHexWord(unsigned w,FILE *fp);
    THexFileError __fastcall WordToByteMassiv(word buf[], int bufsize);
public:
    __fastcall THexFile(TComponent* Owner);
    void __fastcall Load(word buf[], int bufsize);
    void __fastcall Save(word buf[], int bufsize);
__published:
   	__property THexFileType     Type    ={write=FileType};
   	__property AnsiString       Name    ={write=FileName};
   	__property THexFileError    Error   ={read =_erfile};
};
//---------------------------------------------------------------------------
#endif
 