//---------------------------------------------------------------------------
#ifndef MakeFontsUnitH
#define MakeFontsUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *SymbolGroupBox;
    TCheckBox *X0Y0;
    TCheckBox *X1Y0;
    TCheckBox *X2Y0;
    TCheckBox *X3Y0;
    TCheckBox *X4Y0;
    TCheckBox *X5Y0;
    TCheckBox *X6Y0;
    TCheckBox *X7Y0;
    TCheckBox *X0Y1;
    TCheckBox *X1Y1;
    TCheckBox *X2Y1;
    TCheckBox *X3Y1;
    TCheckBox *X4Y1;
    TCheckBox *X5Y1;
    TCheckBox *X7Y1;
    TCheckBox *X6Y1;
    TCheckBox *X0Y2;
    TCheckBox *X1Y2;
    TCheckBox *X2Y2;
    TCheckBox *X3Y2;
    TCheckBox *X4Y2;
    TCheckBox *X5Y2;
    TCheckBox *X7Y2;
    TCheckBox *X6Y2;
    TCheckBox *X0Y3;
    TCheckBox *X1Y3;
    TCheckBox *X2Y3;
    TCheckBox *X3Y3;
    TCheckBox *X4Y3;
    TCheckBox *X5Y3;
    TCheckBox *X7Y3;
    TCheckBox *X6Y3;
    TCheckBox *X0Y4;
    TCheckBox *X1Y4;
    TCheckBox *X2Y4;
    TCheckBox *X3Y4;
    TCheckBox *X4Y4;
    TCheckBox *X5Y4;
    TCheckBox *X7Y4;
    TCheckBox *X6Y4;
    TCheckBox *X0Y5;
    TCheckBox *X1Y5;
    TCheckBox *X2Y5;
    TCheckBox *X3Y5;
    TCheckBox *X4Y5;
    TCheckBox *X5Y5;
    TCheckBox *X7Y5;
    TCheckBox *X6Y5;
    TCheckBox *X0Y6;
    TCheckBox *X1Y6;
    TCheckBox *X2Y6;
    TCheckBox *X3Y6;
    TCheckBox *X4Y6;
    TCheckBox *X5Y6;
    TCheckBox *X7Y6;
    TCheckBox *X6Y6;
    TCheckBox *X0Y7;
    TCheckBox *X1Y7;
    TCheckBox *X2Y7;
    TCheckBox *X3Y7;
    TCheckBox *X4Y7;
    TCheckBox *X5Y7;
    TCheckBox *X7Y7;
    TCheckBox *X6Y7;
    TGroupBox *CodeGroupBox;
    TMemo *CodeMemo;
    TButton *StartButton;
    TButton *LeftRollButton;
    TButton *RightRollButton;
    TButton *UpRollButton;
    TButton *DownRollButton;
    TComboBox *ModeComboBox;
    TLabel *Label2;
    TEdit *SymEdit;
    TButton *LoadSymbolButton;
    void __fastcall StartButtonClick(TObject *Sender);
    void __fastcall LeftRollButtonClick(TObject *Sender);
    void __fastcall RightRollButtonClick(TObject *Sender);
    void __fastcall UpRollButtonClick(TObject *Sender);
    void __fastcall DownRollButtonClick(TObject *Sender);
    
    
    void __fastcall LoadSymbolButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
