//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "FtmUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
AnsiString InFileName;
AnsiString OutFileName;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
    : TForm(Owner)
{
AnsiString Revision="File To C++ Massiv v.02.03.20";
//
HexFile = new THexFile(this);
MainForm->Caption=Revision;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::OpenButtonClick(TObject *Sender)
{
int i,j;
OpenFileDialog->Title="Загрузка исходного файла";
OpenFileDialog->Filter="Все файлы (*.*)|*.*|Двоичные файлы (*.bin)|*.bin|Hex-файлы (*.hex)|*.hex";
OpenFileDialog->DefaultExt="hex";
OpenFileDialog->FilterIndex=3;
OpenFileDialog->FileName="file.hex";
if (OpenFileDialog->Execute())
    {
    InFileName = OpenFileDialog->FileName;
    if(OpenFileDialog->FilterIndex==3)
        {
        HexFile->Type=thftINHX8S;
        }
    else
        {
        HexFile->Type=thftBINS;
        }
    HexFile->Name=InFileName;
    HexFile->Load(CODE,_SIZE_CODE);
    OutFileError();
    }
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::SaveButtonClick(TObject *Sender)
{
int i,j;
FILE *fp;
SaveFileDialog->Title="Сохранение h-файла";
SaveFileDialog->DefaultExt="h";
SaveFileDialog->Filter="Header-файлы (*.h)|*.h";
SaveFileDialog->FilterIndex=0;
SaveFileDialog->FileName="ProgramCode.h";
if (SaveFileDialog->Execute())
    {
    OutFileName=SaveFileDialog->FileName;
    fp=fopen(OutFileName.c_str(),"wb");
    if(fp==NULL)
	    {
        goto exit;
        }
    fprintf(fp,"//==============================================================================\n");
    fprintf(fp,"// InFile  %s\n",InFileName.c_str());
    fprintf(fp,"// OutFile %s\n",OutFileName.c_str());
    fprintf(fp,"//==============================================================================\n");
    j=_SIZE_CODE;
    fprintf(fp,"word ProgramCode[%u]={\n",j);
    i=0;
    j=0;
    while(1)
        {
        if(i++==16) { fprintf(fp,"\n"); i=1; }
        fprintf(fp,"0x%02X",(CODE[j++]&0xFF));
        if(j>=_SIZE_CODE) break;
        fprintf(fp,",");
        }
    fprintf(fp,"};\n");
    fclose(fp);
    }
exit:
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::OutFileError(void)
{
switch(HexFile->Error)
    {
    case thfeOK:
        break;
    case thfeBig:
        Application->MessageBox("Файл велик","Ошибка", MB_OK);
        break;
    case thfeCRC:
        Application->MessageBox("Ошибка CRC HEX-файла","Ошибка", MB_OK);
        break;
    case thfeSymbol:
        Application->MessageBox("Неверный символ в HEX-файле","Ошибка", MB_OK);
        break;
    case thfeEnd:
        Application->MessageBox("Неверный конец HEX-файла","Ошибка", MB_OK);
        break;
    case thfeLabel:
        Application->MessageBox("Неверная метка в HEX-файле","Ошибка", MB_OK);
        break;
    case thfeOpen:
        Application->MessageBox("Невозможно открыть","Ошибка", MB_OK);
        break;
    case thfeRead:
        Application->MessageBox("Ошибка чтения файла","Ошибка", MB_OK);
        break;
    case thfeWrite:
        Application->MessageBox("Ошибка записи файла","Ошибка", MB_OK);
        break;
    default:
        Application->MessageBox("Неопределена","Ошибка", MB_OK);
        break;
    }
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::ExitButtonClick(TObject *Sender)
{
exit(0);    
}
//---------------------------------------------------------------------------
