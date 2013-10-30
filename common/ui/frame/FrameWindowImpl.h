#ifndef COMMON_UI_FRAME_FRAMEWINDOWIMP_H
#define COMMON_UI_FRAME_FRAMEWINDOWIMP_H

#include "core/MessageLoop.h"
HINSTANCE hInst;								// 当前实例

namespace ui{
	class  FrameWindowImpl
	{
	public:
		FrameWindowImpl(){}
		~FrameWindowImpl(){}
	public:
		bool create(HINSTANCE hInstance, int nCmdShow)
		{
			HWND hWnd;

			hInst = hInstance; // 将实例句柄存储在全局变量中
			hinstance_ = hInstance;

			hWnd = CreateWindow(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
				CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, NULL, NULL, hInstance, NULL);

			if (!hWnd)return false;

			ShowWindow(hWnd, nCmdShow);
			UpdateWindow(hWnd);

			return true;
		}

		int		exec(){return core::MessageLoop().run(hinstance_);};
	private:
		HINSTANCE	hinstance_;
	};
}



#endif // COMMON_UI_FRAME_FRAMEWINDOWIMP_H

