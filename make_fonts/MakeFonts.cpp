//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USERES("MakeFonts.res");
USEFORM("MakeFontsUnit.cpp", MainForm);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
        Application->Initialize();
        Application->Title = "׀והאךעמנ רנטפעמג";
        Application->CreateForm(__classid(TMainForm), &MainForm);
        Application->Run();
    }
    catch (Exception &exception)
    {
        Application->ShowException(&exception);
    }
    return 0;
}
//---------------------------------------------------------------------------
