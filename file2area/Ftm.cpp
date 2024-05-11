//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USERES("Ftm.res");
USEFORM("FtmUnit.cpp", MainForm);
USEUNIT("HexFile.cpp");
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
        Application->Initialize();
        Application->Title = "FTM";
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
