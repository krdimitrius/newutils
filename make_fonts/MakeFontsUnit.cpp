//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include <stdio.h>

#include "MakeFontsUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
    : TForm(Owner)
{
CodeMemo->Clear();
ModeComboBox->Items->Clear();
ModeComboBox->Items->Add("(X0...X7)->(B7...B0)");
ModeComboBox->Items->Add("(Y7...Y0)->(B7...B0)");
ModeComboBox->ItemIndex=0;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::StartButtonClick(TObject *Sender)
{
int i,j;
AnsiString as;
unsigned short b[8],mask;

for(i=0;i<8;i++) b[i]=0;

switch(ModeComboBox->ItemIndex)
    {
    case 0:
        mask = 0x80; i=0;
        if( X0Y0->Checked ) b[i] |= mask; i++;
        if( X0Y1->Checked ) b[i] |= mask; i++;
        if( X0Y2->Checked ) b[i] |= mask; i++;
        if( X0Y3->Checked ) b[i] |= mask; i++;
        if( X0Y4->Checked ) b[i] |= mask; i++;
        if( X0Y5->Checked ) b[i] |= mask; i++;
        if( X0Y6->Checked ) b[i] |= mask; i++;
        if( X0Y7->Checked ) b[i] |= mask; i++;

        mask = 0x40; i=0;
        if( X1Y0->Checked ) b[i] |= mask; i++;
        if( X1Y1->Checked ) b[i] |= mask; i++;
        if( X1Y2->Checked ) b[i] |= mask; i++;
        if( X1Y3->Checked ) b[i] |= mask; i++;
        if( X1Y4->Checked ) b[i] |= mask; i++;
        if( X1Y5->Checked ) b[i] |= mask; i++;
        if( X1Y6->Checked ) b[i] |= mask; i++;
        if( X1Y7->Checked ) b[i] |= mask; i++;

        mask = 0x20; i=0;
        if( X2Y0->Checked ) b[i] |= mask; i++;
        if( X2Y1->Checked ) b[i] |= mask; i++;
        if( X2Y2->Checked ) b[i] |= mask; i++;
        if( X2Y3->Checked ) b[i] |= mask; i++;
        if( X2Y4->Checked ) b[i] |= mask; i++;
        if( X2Y5->Checked ) b[i] |= mask; i++;
        if( X2Y6->Checked ) b[i] |= mask; i++;
        if( X2Y7->Checked ) b[i] |= mask; i++;

        mask = 0x10; i=0;
        if( X3Y0->Checked ) b[i] |= mask; i++;
        if( X3Y1->Checked ) b[i] |= mask; i++;
        if( X3Y2->Checked ) b[i] |= mask; i++;
        if( X3Y3->Checked ) b[i] |= mask; i++;
        if( X3Y4->Checked ) b[i] |= mask; i++;
        if( X3Y5->Checked ) b[i] |= mask; i++;
        if( X3Y6->Checked ) b[i] |= mask; i++;
        if( X3Y7->Checked ) b[i] |= mask; i++;

        mask = 0x08; i=0;
        if( X4Y0->Checked ) b[i] |= mask; i++;
        if( X4Y1->Checked ) b[i] |= mask; i++;
        if( X4Y2->Checked ) b[i] |= mask; i++;
        if( X4Y3->Checked ) b[i] |= mask; i++;
        if( X4Y4->Checked ) b[i] |= mask; i++;
        if( X4Y5->Checked ) b[i] |= mask; i++;
        if( X4Y6->Checked ) b[i] |= mask; i++;
        if( X4Y7->Checked ) b[i] |= mask; i++;

        mask = 0x04; i=0;
        if( X5Y0->Checked ) b[i] |= mask; i++;
        if( X5Y1->Checked ) b[i] |= mask; i++;
        if( X5Y2->Checked ) b[i] |= mask; i++;
        if( X5Y3->Checked ) b[i] |= mask; i++;
        if( X5Y4->Checked ) b[i] |= mask; i++;
        if( X5Y5->Checked ) b[i] |= mask; i++;
        if( X5Y6->Checked ) b[i] |= mask; i++;
        if( X5Y7->Checked ) b[i] |= mask; i++;

        mask = 0x02; i=0;
        if( X6Y0->Checked ) b[i] |= mask; i++;
        if( X6Y1->Checked ) b[i] |= mask; i++;
        if( X6Y2->Checked ) b[i] |= mask; i++;
        if( X6Y3->Checked ) b[i] |= mask; i++;
        if( X6Y4->Checked ) b[i] |= mask; i++;
        if( X6Y5->Checked ) b[i] |= mask; i++;
        if( X6Y6->Checked ) b[i] |= mask; i++;
        if( X6Y7->Checked ) b[i] |= mask; i++;

        mask = 0x01; i=0;
        if( X7Y0->Checked ) b[i] |= mask; i++;
        if( X7Y1->Checked ) b[i] |= mask; i++;
        if( X7Y2->Checked ) b[i] |= mask; i++;
        if( X7Y3->Checked ) b[i] |= mask; i++;
        if( X7Y4->Checked ) b[i] |= mask; i++;
        if( X7Y5->Checked ) b[i] |= mask; i++;
        if( X7Y6->Checked ) b[i] |= mask; i++;
        if( X7Y7->Checked ) b[i] |= mask; i++;
        break;
    case 1:
        i=0;
        if( X0Y0->Checked ) b[i] |= 0x01;
        if( X0Y1->Checked ) b[i] |= 0x02;
        if( X0Y2->Checked ) b[i] |= 0x04;
        if( X0Y3->Checked ) b[i] |= 0x08;
        if( X0Y4->Checked ) b[i] |= 0x10;
        if( X0Y5->Checked ) b[i] |= 0x20;
        if( X0Y6->Checked ) b[i] |= 0x40;
        if( X0Y7->Checked ) b[i] |= 0x80;
        i=1;
        if( X1Y0->Checked ) b[i] |= 0x01;
        if( X1Y1->Checked ) b[i] |= 0x02;
        if( X1Y2->Checked ) b[i] |= 0x04;
        if( X1Y3->Checked ) b[i] |= 0x08;
        if( X1Y4->Checked ) b[i] |= 0x10;
        if( X1Y5->Checked ) b[i] |= 0x20;
        if( X1Y6->Checked ) b[i] |= 0x40;
        if( X1Y7->Checked ) b[i] |= 0x80;
        i=2;
        if( X2Y0->Checked ) b[i] |= 0x01;
        if( X2Y1->Checked ) b[i] |= 0x02;
        if( X2Y2->Checked ) b[i] |= 0x04;
        if( X2Y3->Checked ) b[i] |= 0x08;
        if( X2Y4->Checked ) b[i] |= 0x10;
        if( X2Y5->Checked ) b[i] |= 0x20;
        if( X2Y6->Checked ) b[i] |= 0x40;
        if( X2Y7->Checked ) b[i] |= 0x80;
        i=3;
        if( X3Y0->Checked ) b[i] |= 0x01;
        if( X3Y1->Checked ) b[i] |= 0x02;
        if( X3Y2->Checked ) b[i] |= 0x04;
        if( X3Y3->Checked ) b[i] |= 0x08;
        if( X3Y4->Checked ) b[i] |= 0x10;
        if( X3Y5->Checked ) b[i] |= 0x20;
        if( X3Y6->Checked ) b[i] |= 0x40;
        if( X3Y7->Checked ) b[i] |= 0x80;
        i=4;
        if( X4Y0->Checked ) b[i] |= 0x01;
        if( X4Y1->Checked ) b[i] |= 0x02;
        if( X4Y2->Checked ) b[i] |= 0x04;
        if( X4Y3->Checked ) b[i] |= 0x08;
        if( X4Y4->Checked ) b[i] |= 0x10;
        if( X4Y5->Checked ) b[i] |= 0x20;
        if( X4Y6->Checked ) b[i] |= 0x40;
        if( X4Y7->Checked ) b[i] |= 0x80;
        i=5;
        if( X5Y0->Checked ) b[i] |= 0x01;
        if( X5Y1->Checked ) b[i] |= 0x02;
        if( X5Y2->Checked ) b[i] |= 0x04;
        if( X5Y3->Checked ) b[i] |= 0x08;
        if( X5Y4->Checked ) b[i] |= 0x10;
        if( X5Y5->Checked ) b[i] |= 0x20;
        if( X5Y6->Checked ) b[i] |= 0x40;
        if( X5Y7->Checked ) b[i] |= 0x80;
        i=6;
        if( X6Y0->Checked ) b[i] |= 0x01;
        if( X6Y1->Checked ) b[i] |= 0x02;
        if( X6Y2->Checked ) b[i] |= 0x04;
        if( X6Y3->Checked ) b[i] |= 0x08;
        if( X6Y4->Checked ) b[i] |= 0x10;
        if( X6Y5->Checked ) b[i] |= 0x20;
        if( X6Y6->Checked ) b[i] |= 0x40;
        if( X6Y7->Checked ) b[i] |= 0x80;
        i=7;
        if( X7Y0->Checked ) b[i] |= 0x01;
        if( X7Y1->Checked ) b[i] |= 0x02;
        if( X7Y2->Checked ) b[i] |= 0x04;
        if( X7Y3->Checked ) b[i] |= 0x08;
        if( X7Y4->Checked ) b[i] |= 0x10;
        if( X7Y5->Checked ) b[i] |= 0x20;
        if( X7Y6->Checked ) b[i] |= 0x40;
        if( X7Y7->Checked ) b[i] |= 0x80;
        break;
    default:
        break;
    }
for(i=0;i<8;i++)
    {
    as += "0x"+IntToHex(b[i],2)+", ";
    }
as += "/* "+SymEdit->Text+" */";
CodeMemo->Lines->Add(as);
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::LeftRollButtonClick(TObject *Sender)
{
X0Y0->State = X1Y0->State;
X0Y1->State = X1Y1->State;
X0Y2->State = X1Y2->State;
X0Y3->State = X1Y3->State;
X0Y4->State = X1Y4->State;
X0Y5->State = X1Y5->State;
X0Y6->State = X1Y6->State;
X0Y7->State = X1Y7->State;

X1Y0->State = X2Y0->State;
X1Y1->State = X2Y1->State;
X1Y2->State = X2Y2->State;
X1Y3->State = X2Y3->State;
X1Y4->State = X2Y4->State;
X1Y5->State = X2Y5->State;
X1Y6->State = X2Y6->State;
X1Y7->State = X2Y7->State;

X2Y0->State = X3Y0->State;
X2Y1->State = X3Y1->State;
X2Y2->State = X3Y2->State;
X2Y3->State = X3Y3->State;
X2Y4->State = X3Y4->State;
X2Y5->State = X3Y5->State;
X2Y6->State = X3Y6->State;
X2Y7->State = X3Y7->State;

X3Y0->State = X4Y0->State;
X3Y1->State = X4Y1->State;
X3Y2->State = X4Y2->State;
X3Y3->State = X4Y3->State;
X3Y4->State = X4Y4->State;
X3Y5->State = X4Y5->State;
X3Y6->State = X4Y6->State;
X3Y7->State = X4Y7->State;

X4Y0->State = X5Y0->State;
X4Y1->State = X5Y1->State;
X4Y2->State = X5Y2->State;
X4Y3->State = X5Y3->State;
X4Y4->State = X5Y4->State;
X4Y5->State = X5Y5->State;
X4Y6->State = X5Y6->State;
X4Y7->State = X5Y7->State;

X5Y0->State = X6Y0->State;
X5Y1->State = X6Y1->State;
X5Y2->State = X6Y2->State;
X5Y3->State = X6Y3->State;
X5Y4->State = X6Y4->State;
X5Y5->State = X6Y5->State;
X5Y6->State = X6Y6->State;
X5Y7->State = X6Y7->State;

X6Y0->State = X7Y0->State;
X6Y1->State = X7Y1->State;
X6Y2->State = X7Y2->State;
X6Y3->State = X7Y3->State;
X6Y4->State = X7Y4->State;
X6Y5->State = X7Y5->State;
X6Y6->State = X7Y6->State;
X6Y7->State = X7Y7->State;

X7Y0->State = cbUnchecked;
X7Y1->State = cbUnchecked;
X7Y2->State = cbUnchecked;
X7Y3->State = cbUnchecked;
X7Y4->State = cbUnchecked;
X7Y5->State = cbUnchecked;
X7Y6->State = cbUnchecked;
X7Y7->State = cbUnchecked;

}
//---------------------------------------------------------------------------

void __fastcall TMainForm::RightRollButtonClick(TObject *Sender)
{

X7Y0->State = X6Y0->State;
X7Y1->State = X6Y1->State;
X7Y2->State = X6Y2->State;
X7Y3->State = X6Y3->State;
X7Y4->State = X6Y4->State;
X7Y5->State = X6Y5->State;
X7Y6->State = X6Y6->State;
X7Y7->State = X6Y7->State;

X6Y0->State = X5Y0->State;
X6Y1->State = X5Y1->State;
X6Y2->State = X5Y2->State;
X6Y3->State = X5Y3->State;
X6Y4->State = X5Y4->State;
X6Y5->State = X5Y5->State;
X6Y6->State = X5Y6->State;
X6Y7->State = X5Y7->State;

X5Y0->State = X4Y0->State;
X5Y1->State = X4Y1->State;
X5Y2->State = X4Y2->State;
X5Y3->State = X4Y3->State;
X5Y4->State = X4Y4->State;
X5Y5->State = X4Y5->State;
X5Y6->State = X4Y6->State;
X5Y7->State = X4Y7->State;

X4Y0->State = X3Y0->State;
X4Y1->State = X3Y1->State;
X4Y2->State = X3Y2->State;
X4Y3->State = X3Y3->State;
X4Y4->State = X3Y4->State;
X4Y5->State = X3Y5->State;
X4Y6->State = X3Y6->State;
X4Y7->State = X3Y7->State;

X3Y0->State = X2Y0->State;
X3Y1->State = X2Y1->State;
X3Y2->State = X2Y2->State;
X3Y3->State = X2Y3->State;
X3Y4->State = X2Y4->State;
X3Y5->State = X2Y5->State;
X3Y6->State = X2Y6->State;
X3Y7->State = X2Y7->State;

X2Y0->State = X1Y0->State;
X2Y1->State = X1Y1->State;
X2Y2->State = X1Y2->State;
X2Y3->State = X1Y3->State;
X2Y4->State = X1Y4->State;
X2Y5->State = X1Y5->State;
X2Y6->State = X1Y6->State;
X2Y7->State = X1Y7->State;

X1Y0->State = X0Y0->State;
X1Y1->State = X0Y1->State;
X1Y2->State = X0Y2->State;
X1Y3->State = X0Y3->State;
X1Y4->State = X0Y4->State;
X1Y5->State = X0Y5->State;
X1Y6->State = X0Y6->State;
X1Y7->State = X0Y7->State;

X0Y0->State = cbUnchecked;
X0Y1->State = cbUnchecked;
X0Y2->State = cbUnchecked;
X0Y3->State = cbUnchecked;
X0Y4->State = cbUnchecked;
X0Y5->State = cbUnchecked;
X0Y6->State = cbUnchecked;
X0Y7->State = cbUnchecked;

}
//---------------------------------------------------------------------------

void __fastcall TMainForm::UpRollButtonClick(TObject *Sender)
{
X0Y0->State = X0Y1->State;
X1Y0->State = X1Y1->State;
X2Y0->State = X2Y1->State;
X3Y0->State = X3Y1->State;
X4Y0->State = X4Y1->State;
X5Y0->State = X5Y1->State;
X6Y0->State = X6Y1->State;
X7Y0->State = X7Y1->State;

X0Y1->State = X0Y2->State;
X1Y1->State = X1Y2->State;
X2Y1->State = X2Y2->State;
X3Y1->State = X3Y2->State;
X4Y1->State = X4Y2->State;
X5Y1->State = X5Y2->State;
X6Y1->State = X6Y2->State;
X7Y1->State = X7Y2->State;

X0Y2->State = X0Y3->State;
X1Y2->State = X1Y3->State;
X2Y2->State = X2Y3->State;
X3Y2->State = X3Y3->State;
X4Y2->State = X4Y3->State;
X5Y2->State = X5Y3->State;
X6Y2->State = X6Y3->State;
X7Y2->State = X7Y3->State;

X0Y3->State = X0Y4->State;
X1Y3->State = X1Y4->State;
X2Y3->State = X2Y4->State;
X3Y3->State = X3Y4->State;
X4Y3->State = X4Y4->State;
X5Y3->State = X5Y4->State;
X6Y3->State = X6Y4->State;
X7Y3->State = X7Y4->State;

X0Y4->State = X0Y5->State;
X1Y4->State = X1Y5->State;
X2Y4->State = X2Y5->State;
X3Y4->State = X3Y5->State;
X4Y4->State = X4Y5->State;
X5Y4->State = X5Y5->State;
X6Y4->State = X6Y5->State;
X7Y4->State = X7Y5->State;

X0Y5->State = X0Y6->State;
X1Y5->State = X1Y6->State;
X2Y5->State = X2Y6->State;
X3Y5->State = X3Y6->State;
X4Y5->State = X4Y6->State;
X5Y5->State = X5Y6->State;
X6Y5->State = X6Y6->State;
X7Y5->State = X7Y6->State;

X0Y6->State = X0Y7->State;
X1Y6->State = X1Y7->State;
X2Y6->State = X2Y7->State;
X3Y6->State = X3Y7->State;
X4Y6->State = X4Y7->State;
X5Y6->State = X5Y7->State;
X6Y6->State = X6Y7->State;
X7Y6->State = X7Y7->State;

X0Y7->State = cbUnchecked;
X1Y7->State = cbUnchecked;
X2Y7->State = cbUnchecked;
X3Y7->State = cbUnchecked;
X4Y7->State = cbUnchecked;
X5Y7->State = cbUnchecked;
X6Y7->State = cbUnchecked;
X7Y7->State = cbUnchecked;
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::DownRollButtonClick(TObject *Sender)
{
X0Y7->State = X0Y6->State;
X1Y7->State = X1Y6->State;
X2Y7->State = X2Y6->State;
X3Y7->State = X3Y6->State;
X4Y7->State = X4Y6->State;
X5Y7->State = X5Y6->State;
X6Y7->State = X6Y6->State;
X7Y7->State = X7Y6->State;

X0Y6->State = X0Y5->State;
X1Y6->State = X1Y5->State;
X2Y6->State = X2Y5->State;
X3Y6->State = X3Y5->State;
X4Y6->State = X4Y5->State;
X5Y6->State = X5Y5->State;
X6Y6->State = X6Y5->State;
X7Y6->State = X7Y5->State;

X0Y5->State = X0Y4->State;
X1Y5->State = X1Y4->State;
X2Y5->State = X2Y4->State;
X3Y5->State = X3Y4->State;
X4Y5->State = X4Y4->State;
X5Y5->State = X5Y4->State;
X6Y5->State = X6Y4->State;
X7Y5->State = X7Y4->State;

X0Y4->State = X0Y3->State;
X1Y4->State = X1Y3->State;
X2Y4->State = X2Y3->State;
X3Y4->State = X3Y3->State;
X4Y4->State = X4Y3->State;
X5Y4->State = X5Y3->State;
X6Y4->State = X6Y3->State;
X7Y4->State = X7Y3->State;

X0Y3->State = X0Y2->State;
X1Y3->State = X1Y2->State;
X2Y3->State = X2Y2->State;
X3Y3->State = X3Y2->State;
X4Y3->State = X4Y2->State;
X5Y3->State = X5Y2->State;
X6Y3->State = X6Y2->State;
X7Y3->State = X7Y2->State;

X0Y2->State = X0Y1->State;
X1Y2->State = X1Y1->State;
X2Y2->State = X2Y1->State;
X3Y2->State = X3Y1->State;
X4Y2->State = X4Y1->State;
X5Y2->State = X5Y1->State;
X6Y2->State = X6Y1->State;
X7Y2->State = X7Y1->State;

X0Y1->State = X0Y0->State;
X1Y1->State = X1Y0->State;
X2Y1->State = X2Y0->State;
X3Y1->State = X3Y0->State;
X4Y1->State = X4Y0->State;
X5Y1->State = X5Y0->State;
X6Y1->State = X6Y0->State;
X7Y1->State = X7Y0->State;

X0Y0->State = cbUnchecked;
X1Y0->State = cbUnchecked;
X2Y0->State = cbUnchecked;
X3Y0->State = cbUnchecked;
X4Y0->State = cbUnchecked;
X5Y0->State = cbUnchecked;
X6Y0->State = cbUnchecked;
X7Y0->State = cbUnchecked;

}
//---------------------------------------------------------------------------


void __fastcall TMainForm::LoadSymbolButtonClick(TObject *Sender)
{
int i;
char buf[100];
unsigned short b[8];

CodeMemo->GetSelTextBuf(buf,96);
sscanf(buf,"%X, %X, %X, %X, %X, %X, %X, %X%",&b[0],&b[1],&b[2],&b[3],&b[4],&b[5],&b[6],&b[7]);

switch(ModeComboBox->ItemIndex)
    {
    case 0:
        i=0;
        if( b[i]&0x01 ) X7Y0->State = cbChecked; else  X7Y0->State = cbUnchecked;
        if( b[i]&0x02 ) X6Y0->State = cbChecked; else  X6Y0->State = cbUnchecked;
        if( b[i]&0x04 ) X5Y0->State = cbChecked; else  X5Y0->State = cbUnchecked;
        if( b[i]&0x08 ) X4Y0->State = cbChecked; else  X4Y0->State = cbUnchecked;
        if( b[i]&0x10 ) X3Y0->State = cbChecked; else  X3Y0->State = cbUnchecked;
        if( b[i]&0x20 ) X2Y0->State = cbChecked; else  X2Y0->State = cbUnchecked;
        if( b[i]&0x40 ) X1Y0->State = cbChecked; else  X1Y0->State = cbUnchecked;
        if( b[i]&0x80 ) X0Y0->State = cbChecked; else  X0Y0->State = cbUnchecked;
        i=1;
        if( b[i]&0x01 ) X7Y1->State = cbChecked; else  X7Y1->State = cbUnchecked;
        if( b[i]&0x02 ) X6Y1->State = cbChecked; else  X6Y1->State = cbUnchecked;
        if( b[i]&0x04 ) X5Y1->State = cbChecked; else  X5Y1->State = cbUnchecked;
        if( b[i]&0x08 ) X4Y1->State = cbChecked; else  X4Y1->State = cbUnchecked;
        if( b[i]&0x10 ) X3Y1->State = cbChecked; else  X3Y1->State = cbUnchecked;
        if( b[i]&0x20 ) X2Y1->State = cbChecked; else  X2Y1->State = cbUnchecked;
        if( b[i]&0x40 ) X1Y1->State = cbChecked; else  X1Y1->State = cbUnchecked;
        if( b[i]&0x80 ) X0Y1->State = cbChecked; else  X0Y1->State = cbUnchecked;
        i=2;
        if( b[i]&0x01 ) X7Y2->State = cbChecked; else  X7Y2->State = cbUnchecked;
        if( b[i]&0x02 ) X6Y2->State = cbChecked; else  X6Y2->State = cbUnchecked;
        if( b[i]&0x04 ) X5Y2->State = cbChecked; else  X5Y2->State = cbUnchecked;
        if( b[i]&0x08 ) X4Y2->State = cbChecked; else  X4Y2->State = cbUnchecked;
        if( b[i]&0x10 ) X3Y2->State = cbChecked; else  X3Y2->State = cbUnchecked;
        if( b[i]&0x20 ) X2Y2->State = cbChecked; else  X2Y2->State = cbUnchecked;
        if( b[i]&0x40 ) X1Y2->State = cbChecked; else  X1Y2->State = cbUnchecked;
        if( b[i]&0x80 ) X0Y2->State = cbChecked; else  X0Y2->State = cbUnchecked;
        i=3;
        if( b[i]&0x01 ) X7Y3->State = cbChecked; else  X7Y3->State = cbUnchecked;
        if( b[i]&0x02 ) X6Y3->State = cbChecked; else  X6Y3->State = cbUnchecked;
        if( b[i]&0x04 ) X5Y3->State = cbChecked; else  X5Y3->State = cbUnchecked;
        if( b[i]&0x08 ) X4Y3->State = cbChecked; else  X4Y3->State = cbUnchecked;
        if( b[i]&0x10 ) X3Y3->State = cbChecked; else  X3Y3->State = cbUnchecked;
        if( b[i]&0x20 ) X2Y3->State = cbChecked; else  X2Y3->State = cbUnchecked;
        if( b[i]&0x40 ) X1Y3->State = cbChecked; else  X1Y3->State = cbUnchecked;
        if( b[i]&0x80 ) X0Y3->State = cbChecked; else  X0Y3->State = cbUnchecked;
        i=4;
        if( b[i]&0x01 ) X7Y4->State = cbChecked; else  X7Y4->State = cbUnchecked;
        if( b[i]&0x02 ) X6Y4->State = cbChecked; else  X6Y4->State = cbUnchecked;
        if( b[i]&0x04 ) X5Y4->State = cbChecked; else  X5Y4->State = cbUnchecked;
        if( b[i]&0x08 ) X4Y4->State = cbChecked; else  X4Y4->State = cbUnchecked;
        if( b[i]&0x10 ) X3Y4->State = cbChecked; else  X3Y4->State = cbUnchecked;
        if( b[i]&0x20 ) X2Y4->State = cbChecked; else  X2Y4->State = cbUnchecked;
        if( b[i]&0x40 ) X1Y4->State = cbChecked; else  X1Y4->State = cbUnchecked;
        if( b[i]&0x80 ) X0Y4->State = cbChecked; else  X0Y4->State = cbUnchecked;
        i=5;
        if( b[i]&0x01 ) X7Y5->State = cbChecked; else  X7Y5->State = cbUnchecked;
        if( b[i]&0x02 ) X6Y5->State = cbChecked; else  X6Y5->State = cbUnchecked;
        if( b[i]&0x04 ) X5Y5->State = cbChecked; else  X5Y5->State = cbUnchecked;
        if( b[i]&0x08 ) X4Y5->State = cbChecked; else  X4Y5->State = cbUnchecked;
        if( b[i]&0x10 ) X3Y5->State = cbChecked; else  X3Y5->State = cbUnchecked;
        if( b[i]&0x20 ) X2Y5->State = cbChecked; else  X2Y5->State = cbUnchecked;
        if( b[i]&0x40 ) X1Y5->State = cbChecked; else  X1Y5->State = cbUnchecked;
        if( b[i]&0x80 ) X0Y5->State = cbChecked; else  X0Y5->State = cbUnchecked;
        i=6;
        if( b[i]&0x01 ) X7Y6->State = cbChecked; else  X7Y6->State = cbUnchecked;
        if( b[i]&0x02 ) X6Y6->State = cbChecked; else  X6Y6->State = cbUnchecked;
        if( b[i]&0x04 ) X5Y6->State = cbChecked; else  X5Y6->State = cbUnchecked;
        if( b[i]&0x08 ) X4Y6->State = cbChecked; else  X4Y6->State = cbUnchecked;
        if( b[i]&0x10 ) X3Y6->State = cbChecked; else  X3Y6->State = cbUnchecked;
        if( b[i]&0x20 ) X2Y6->State = cbChecked; else  X2Y6->State = cbUnchecked;
        if( b[i]&0x40 ) X1Y6->State = cbChecked; else  X1Y6->State = cbUnchecked;
        if( b[i]&0x80 ) X0Y6->State = cbChecked; else  X0Y6->State = cbUnchecked;
        i=7;
        if( b[i]&0x01 ) X7Y7->State = cbChecked; else  X7Y7->State = cbUnchecked;
        if( b[i]&0x02 ) X6Y7->State = cbChecked; else  X6Y7->State = cbUnchecked;
        if( b[i]&0x04 ) X5Y7->State = cbChecked; else  X5Y7->State = cbUnchecked;
        if( b[i]&0x08 ) X4Y7->State = cbChecked; else  X4Y7->State = cbUnchecked;
        if( b[i]&0x10 ) X3Y7->State = cbChecked; else  X3Y7->State = cbUnchecked;
        if( b[i]&0x20 ) X2Y7->State = cbChecked; else  X2Y7->State = cbUnchecked;
        if( b[i]&0x40 ) X1Y7->State = cbChecked; else  X1Y7->State = cbUnchecked;
        if( b[i]&0x80 ) X0Y7->State = cbChecked; else  X0Y7->State = cbUnchecked;
        break;
    case 1:
        i=0;
        if( b[i]&0x01 ) X0Y0->State = cbChecked; else  X0Y0->State = cbUnchecked;
        if( b[i]&0x02 ) X0Y1->State = cbChecked; else  X0Y1->State = cbUnchecked;
        if( b[i]&0x04 ) X0Y2->State = cbChecked; else  X0Y2->State = cbUnchecked;
        if( b[i]&0x08 ) X0Y3->State = cbChecked; else  X0Y3->State = cbUnchecked;
        if( b[i]&0x10 ) X0Y4->State = cbChecked; else  X0Y4->State = cbUnchecked;
        if( b[i]&0x20 ) X0Y5->State = cbChecked; else  X0Y5->State = cbUnchecked;
        if( b[i]&0x40 ) X0Y6->State = cbChecked; else  X0Y6->State = cbUnchecked;
        if( b[i]&0x80 ) X0Y7->State = cbChecked; else  X0Y7->State = cbUnchecked;
        i=1;
        if( b[i]&0x01 ) X1Y0->State = cbChecked; else  X1Y0->State = cbUnchecked;
        if( b[i]&0x02 ) X1Y1->State = cbChecked; else  X1Y1->State = cbUnchecked;
        if( b[i]&0x04 ) X1Y2->State = cbChecked; else  X1Y2->State = cbUnchecked;
        if( b[i]&0x08 ) X1Y3->State = cbChecked; else  X1Y3->State = cbUnchecked;
        if( b[i]&0x10 ) X1Y4->State = cbChecked; else  X1Y4->State = cbUnchecked;
        if( b[i]&0x20 ) X1Y5->State = cbChecked; else  X1Y5->State = cbUnchecked;
        if( b[i]&0x40 ) X1Y6->State = cbChecked; else  X1Y6->State = cbUnchecked;
        if( b[i]&0x80 ) X1Y7->State = cbChecked; else  X1Y7->State = cbUnchecked;
        i=2;
        if( b[i]&0x01 ) X2Y0->State = cbChecked; else  X2Y0->State = cbUnchecked;
        if( b[i]&0x02 ) X2Y1->State = cbChecked; else  X2Y1->State = cbUnchecked;
        if( b[i]&0x04 ) X2Y2->State = cbChecked; else  X2Y2->State = cbUnchecked;
        if( b[i]&0x08 ) X2Y3->State = cbChecked; else  X2Y3->State = cbUnchecked;
        if( b[i]&0x10 ) X2Y4->State = cbChecked; else  X2Y4->State = cbUnchecked;
        if( b[i]&0x20 ) X2Y5->State = cbChecked; else  X2Y5->State = cbUnchecked;
        if( b[i]&0x40 ) X2Y6->State = cbChecked; else  X2Y6->State = cbUnchecked;
        if( b[i]&0x80 ) X2Y7->State = cbChecked; else  X2Y7->State = cbUnchecked;
        i=3;
        if( b[i]&0x01 ) X3Y0->State = cbChecked; else  X3Y0->State = cbUnchecked;
        if( b[i]&0x02 ) X3Y1->State = cbChecked; else  X3Y1->State = cbUnchecked;
        if( b[i]&0x04 ) X3Y2->State = cbChecked; else  X3Y2->State = cbUnchecked;
        if( b[i]&0x08 ) X3Y3->State = cbChecked; else  X3Y3->State = cbUnchecked;
        if( b[i]&0x10 ) X3Y4->State = cbChecked; else  X3Y4->State = cbUnchecked;
        if( b[i]&0x20 ) X3Y5->State = cbChecked; else  X3Y5->State = cbUnchecked;
        if( b[i]&0x40 ) X3Y6->State = cbChecked; else  X3Y6->State = cbUnchecked;
        if( b[i]&0x80 ) X3Y7->State = cbChecked; else  X3Y7->State = cbUnchecked;
        i=4;
        if( b[i]&0x01 ) X4Y0->State = cbChecked; else  X4Y0->State = cbUnchecked;
        if( b[i]&0x02 ) X4Y1->State = cbChecked; else  X4Y1->State = cbUnchecked;
        if( b[i]&0x04 ) X4Y2->State = cbChecked; else  X4Y2->State = cbUnchecked;
        if( b[i]&0x08 ) X4Y3->State = cbChecked; else  X4Y3->State = cbUnchecked;
        if( b[i]&0x10 ) X4Y4->State = cbChecked; else  X4Y4->State = cbUnchecked;
        if( b[i]&0x20 ) X4Y5->State = cbChecked; else  X4Y5->State = cbUnchecked;
        if( b[i]&0x40 ) X4Y6->State = cbChecked; else  X4Y6->State = cbUnchecked;
        if( b[i]&0x80 ) X4Y7->State = cbChecked; else  X4Y7->State = cbUnchecked;
        i=5;
        if( b[i]&0x01 ) X5Y0->State = cbChecked; else  X5Y0->State = cbUnchecked;
        if( b[i]&0x02 ) X5Y1->State = cbChecked; else  X5Y1->State = cbUnchecked;
        if( b[i]&0x04 ) X5Y2->State = cbChecked; else  X5Y2->State = cbUnchecked;
        if( b[i]&0x08 ) X5Y3->State = cbChecked; else  X5Y3->State = cbUnchecked;
        if( b[i]&0x10 ) X5Y4->State = cbChecked; else  X5Y4->State = cbUnchecked;
        if( b[i]&0x20 ) X5Y5->State = cbChecked; else  X5Y5->State = cbUnchecked;
        if( b[i]&0x40 ) X5Y6->State = cbChecked; else  X5Y6->State = cbUnchecked;
        if( b[i]&0x80 ) X5Y7->State = cbChecked; else  X5Y7->State = cbUnchecked;
        i=6;
        if( b[i]&0x01 ) X6Y0->State = cbChecked; else  X6Y0->State = cbUnchecked;
        if( b[i]&0x02 ) X6Y1->State = cbChecked; else  X6Y1->State = cbUnchecked;
        if( b[i]&0x04 ) X6Y2->State = cbChecked; else  X6Y2->State = cbUnchecked;
        if( b[i]&0x08 ) X6Y3->State = cbChecked; else  X6Y3->State = cbUnchecked;
        if( b[i]&0x10 ) X6Y4->State = cbChecked; else  X6Y4->State = cbUnchecked;
        if( b[i]&0x20 ) X6Y5->State = cbChecked; else  X6Y5->State = cbUnchecked;
        if( b[i]&0x40 ) X6Y6->State = cbChecked; else  X6Y6->State = cbUnchecked;
        if( b[i]&0x80 ) X6Y7->State = cbChecked; else  X6Y7->State = cbUnchecked;
        i=7;
        if( b[i]&0x01 ) X7Y0->State = cbChecked; else  X7Y0->State = cbUnchecked;
        if( b[i]&0x02 ) X7Y1->State = cbChecked; else  X7Y1->State = cbUnchecked;
        if( b[i]&0x04 ) X7Y2->State = cbChecked; else  X7Y2->State = cbUnchecked;
        if( b[i]&0x08 ) X7Y3->State = cbChecked; else  X7Y3->State = cbUnchecked;
        if( b[i]&0x10 ) X7Y4->State = cbChecked; else  X7Y4->State = cbUnchecked;
        if( b[i]&0x20 ) X7Y5->State = cbChecked; else  X7Y5->State = cbUnchecked;
        if( b[i]&0x40 ) X7Y6->State = cbChecked; else  X7Y6->State = cbUnchecked;
        if( b[i]&0x80 ) X7Y7->State = cbChecked; else  X7Y7->State = cbUnchecked;
        break;
    default:
        break;
    }
}
//---------------------------------------------------------------------------

