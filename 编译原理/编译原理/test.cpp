#include <Windows.h>

LRESULT CALLBACK WndProc(HWND hWnd, UINT msgID, WPARAM wParam, LPARAM IParam) {
	return DefWindowProc(hWnd, msgID, wParam, IParam);
}//窗口处理函数，在这个函数中我们调用默认的窗口处理函数

int CALLBACK WinMain(_In_ HINSTANCE hIns, _In_opt_ HINSTANCE hPreIns, _In_ LPSTR IpCmdLine, _In_ int nCmdshow)//必须加入前缀进行检查
{
	//注册窗口类
	WNDCLASS wc = { 0 };//定义一个结构体，用于向内核进行注册
	wc.cbClsExtra = 0;//用于申请缓冲区，单位为字节
	wc.cbWndExtra = 0;//
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);//窗口背景色的设计
	wc.hCursor = NULL;//用于设计光标，采用默认光标
	wc.hIcon = NULL;//采用默认图标
	wc.hInstance = hIns;//将当前函数的实例句柄赋予它，即第一个参数
	wc.lpfnWndProc = WndProc;//将自定义的窗口函数指针赋值给他
	LPCWSTR PRC = L"main";//由于采用Unicode编码方式因此存在兼容性问题
	wc.lpszClassName = PRC;//窗口类的名字
	wc.lpszMenuName = NULL;//窗口菜单，置为空表示不要菜单
	wc.style = CS_HREDRAW | CS_VREDRAW;//用于表示将窗口始应大小
	RegisterClass(&wc);//将以上所有的值全部写入操作系统
	//在内存中创建窗口，申请内存，在内存中
	LPCWSTR xy = L"windows";
	HWND hwnd = CreateWindow(PRC, xy, WS_OVERLAPPEDWINDOW, 200, 200, 600, 600, NULL, NULL, hIns, NULL);
	//显示窗口
	ShowWindow(hwnd, SW_SHOW);
	UpdateWindow(hwnd);
	//消息循环
	MSG nmsg = { 0 };
	while (GetMessage(&nmsg, NULL, 0, 0))
	{
		TranslateMessage(&nmsg);
		DispatchMessage(&nmsg);
	}
	return 0;
}

