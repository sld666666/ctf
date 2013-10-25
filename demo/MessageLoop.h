#ifndef MESSAGELOOP_H
#define MESSAGELOOP_H


class MessageLoop{
public:
	MessageLoop(){}
	~MessageLoop(){}


	int run(HINSTANCE hInstance){
		MSG msg;
		HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_DEMO));
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

#endif // MessageLoop_h