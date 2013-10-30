// demo.cpp : 定义应用程序的入口点。
//

#include "stdafx.h"
#include "demo.h"
#include "frame/FrameWndClassInfo.h"
#include "frame/FrameWindowImpl.h"


// 全局变量:


// 此代码模块中包含的函数的前向声明:
BOOL				InitInstance(HINSTANCE, int);

//INT_PTR CALLBACK	About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{


	FrameWinClassInfo().MyRegisterClass(hInstance);

	ui::FrameWindowImpl frame;
	if (!frame.create(hInstance, nCmdShow))
	{
		return FALSE;
	}
	return frame.exec();
}



// “关于”框的消息处理程序。
// INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
// {
// 	UNREFERENCED_PARAMETER(lParam);
// 	switch (message)
// 	{
// 	case WM_INITDIALOG:
// 		return (INT_PTR)TRUE;
// 
// 	case WM_COMMAND:
// 		if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
// 		{
// 			EndDialog(hDlg, LOWORD(wParam));
// 			return (INT_PTR)TRUE;
// 		}
// 		break;
// 	}
// 	return (INT_PTR)FALSE;
// }
