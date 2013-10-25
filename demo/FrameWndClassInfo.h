#ifndef COMMON_UI_FRAMEWNDCLASSINFO_H
#define COMMON_UI_FRAMEWNDCLASSINFO_H

LRESULT CALLBACK	WndProc(HWND, UINT, WPARAM, LPARAM);

#define MAX_LOADSTRING 100
TCHAR szTitle[MAX_LOADSTRING];					// 标题栏文本
TCHAR szWindowClass[MAX_LOADSTRING];			// 主窗口类名


class  FrameWndClassInfo
{
public:
	
	ATOM MyRegisterClass(HINSTANCE hInstance)
	{
		LoadString(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
		LoadString(hInstance, IDC_DEMO, szWindowClass, MAX_LOADSTRING);

		WNDCLASSEX wcex;

		wcex.cbSize = sizeof(WNDCLASSEX);

		wcex.style			= CS_HREDRAW | CS_VREDRAW;
		wcex.lpfnWndProc	= WndProc;
		wcex.cbClsExtra		= 0;
		wcex.cbWndExtra		= 0;
		wcex.hInstance		= hInstance;
		wcex.hIcon			= LoadIcon(hInstance, MAKEINTRESOURCE(IDI_DEMO));
		wcex.hCursor		= LoadCursor(NULL, IDC_ARROW);
		wcex.hbrBackground	= (HBRUSH)(COLOR_WINDOW+1);
		wcex.lpszMenuName	= MAKEINTRESOURCE(IDC_DEMO);
		wcex.lpszClassName	= szWindowClass;
		wcex.hIconSm		= LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

		return RegisterClassEx(&wcex);
	}

};


#endif // COMMON_UI_FRAMEWNDCLASSINFO_H

