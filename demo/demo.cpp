// demo.cpp : ����Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "demo.h"
#include "frame/FrameWndClassInfo.h"
#include "frame/FrameWindowImpl.h"


// ȫ�ֱ���:


// �˴���ģ���а����ĺ�����ǰ������:
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



// �����ڡ������Ϣ�������
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
