//---------------------------------------------------------------------------
#ifndef FtmUnitH
#define FtmUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Dialogs.hpp>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "HexFile.h"
//---------------------------------------------------------------------------
#define _SIZE_CODE 8192
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
    TOpenDialog *OpenFileDialog;
    TSaveDialog *SaveFileDialog;
    TButton *OpenButton;
    TButton *SaveButton;
    TButton *ExitButton;
    TMemo *Memo;
    void __fastcall OpenButtonClick(TObject *Sender);
    void __fastcall SaveButtonClick(TObject *Sender);
    void __fastcall OutFileError(void);
    void __fastcall ExitButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    THexFile *HexFile;
    word CODE[_SIZE_CODE];
    __fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
