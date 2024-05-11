#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>
#include <string.h>
#include <shellapi.h>
#include <winuser.h>
#include "c:\lcc\project\ruslat\ruslatres.h"


#define MYWM_NOTIFYICON WM_USER+1

HINSTANCE hInst;		// Instance handle
HWND hwndMain;		//Main window handle
HKL kbl;
HWND CurApp;
DWORD idthd;
NOTIFYICONDATA tnid;
HICON hIconRus;
HICON hIconEng;


LRESULT CALLBACK MainWndProc(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam);


static BOOL InitApplication(void)
{
	WNDCLASS wc;

	memset(&wc,0,sizeof(WNDCLASS));
	wc.style = CS_HREDRAW|CS_VREDRAW |CS_DBLCLKS ;
	wc.lpfnWndProc = (WNDPROC)MainWndProc;
	wc.hInstance = hInst;
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "ruslatWndClass";
	wc.lpszMenuName = MAKEINTRESOURCE(IDMAINMENU);
	wc.hCursor = LoadCursor(NULL,IDC_ARROW);
	wc.hIcon = LoadIcon(NULL,IDI_APPLICATION);
	if (!RegisterClass(&wc))
		return 0;


	return 1;
}


HWND CreateruslatWndClassWnd(void)
{
	return CreateWindow("ruslatWndClass","ruslat",
		WS_MINIMIZEBOX|WS_VISIBLE|WS_CLIPSIBLINGS|WS_CLIPCHILDREN|WS_MAXIMIZEBOX|WS_CAPTION|WS_BORDER|WS_SYSMENU|WS_THICKFRAME,
		CW_USEDEFAULT,0,CW_USEDEFAULT,0,
		NULL,
		NULL,
		hInst,
		NULL);
}


LRESULT CALLBACK MainWndProc(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam)
{
	switch (msg) {

	case MYWM_NOTIFYICON:
		switch (lParam)
		{
		case WM_RBUTTONDOWN:
			Shell_NotifyIcon(NIM_DELETE, &tnid);
			SendMessage(hwndMain,WM_CLOSE,0,0L);
		}
	break;

	case WM_TIMER:
		CurApp=GetForegroundWindow();
		idthd=GetWindowThreadProcessId(CurApp,NULL);
		kbl=GetKeyboardLayout(idthd);
		if((int)kbl==67699721)
			{
				tnid.hIcon = hIconEng;
				lstrcpyn(tnid.szTip, "English", sizeof(tnid.szTip));
			}
		if((int)kbl==68748313)
			{

				tnid.hIcon = hIconRus;
				lstrcpyn(tnid.szTip, "Russian", sizeof(tnid.szTip));

			}
		Shell_NotifyIcon(NIM_MODIFY,&tnid);
		return 1;

	case WM_COMMAND:
		break;

	case WM_DESTROY:
		Shell_NotifyIcon(NIM_DELETE,&tnid);
		PostQuitMessage(0);
		break;

	default:
		return DefWindowProc(hwnd,msg,wParam,lParam);
	}

	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, INT nCmdShow)
{
	MSG msg;
	HANDLE hAccelTable;

	hInst = hInstance;
	if (!InitApplication())
		return 0;
	hAccelTable = LoadAccelerators(hInst,MAKEINTRESOURCE(IDACCEL));
	if ((hwndMain = CreateruslatWndClassWnd()) == (HWND)0)
		return 0;
	ShowWindow(hwndMain,SW_HIDE);

		hIconEng=LoadIcon(hInst,"ENGICO");
		hIconRus=LoadIcon(hInst,"RUSICO");
		CurApp=GetForegroundWindow();
		idthd=GetWindowThreadProcessId(CurApp,NULL);
		kbl=GetKeyboardLayout(idthd);
			if((int)kbl==67699721)
			{
				tnid.cbSize = sizeof(NOTIFYICONDATA);
    			tnid.hWnd = hwndMain;
    			tnid.uID = 505;
    			tnid.uFlags = NIF_MESSAGE | NIF_ICON | NIF_TIP;
    			tnid.uCallbackMessage = MYWM_NOTIFYICON;
				tnid.hIcon = hIconEng;
				lstrcpyn(tnid.szTip, "English", sizeof(tnid.szTip));
			}
		if((int)kbl==68748313)
			{
				tnid.cbSize = sizeof(NOTIFYICONDATA);
    			tnid.hWnd = hwndMain;
    			tnid.uID = 505;
    			tnid.uFlags = NIF_MESSAGE | NIF_ICON | NIF_TIP;
    			tnid.uCallbackMessage = MYWM_NOTIFYICON;
				tnid.hIcon = hIconRus;
				lstrcpyn(tnid.szTip, "Russian", sizeof(tnid.szTip));
			}
    	Shell_NotifyIcon(NIM_ADD, &tnid);

	SetTimer(hwndMain,1,250,NULL);
	while (GetMessage(&msg,NULL,0,0))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}

	return msg.wParam;
}
