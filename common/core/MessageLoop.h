#ifndef COMMON_CORE_MESSAGELOOP_H
#define COMMON_CORE_MESSAGELOOP_H
#include "CoreGlobal.h"

namespace core{
	class MessageLoop{
	public:
		MessageLoop(){}
		~MessageLoop(){}


		int run(HINSTANCE hInstance){
			MSG msg;
			HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE("unKnow"));
			// 主消息循环:
			while (GetMessage(&msg, NULL, 0, 0))
			{
				if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
				{
					TranslateMessage(&msg);
					DispatchMessage(&msg);
				}
			}

			return (int) msg.wParam;
		}
	};
};


#endif // COMMON_CORE_MESSAGELOOP_H