#include <Windows.h>

LRESULT CALLBACK WndProc(HWND hWnd, UINT msgID, WPARAM wParam, LPARAM IParam) {
	return DefWindowProc(hWnd, msgID, wParam, IParam);
}//���ڴ���������������������ǵ���Ĭ�ϵĴ��ڴ�����

int CALLBACK WinMain(_In_ HINSTANCE hIns, _In_opt_ HINSTANCE hPreIns, _In_ LPSTR IpCmdLine, _In_ int nCmdshow)//�������ǰ׺���м��
{
	//ע�ᴰ����
	WNDCLASS wc = { 0 };//����һ���ṹ�壬�������ں˽���ע��
	wc.cbClsExtra = 0;//�������뻺��������λΪ�ֽ�
	wc.cbWndExtra = 0;//
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);//���ڱ���ɫ�����
	wc.hCursor = NULL;//������ƹ�꣬����Ĭ�Ϲ��
	wc.hIcon = NULL;//����Ĭ��ͼ��
	wc.hInstance = hIns;//����ǰ������ʵ�����������������һ������
	wc.lpfnWndProc = WndProc;//���Զ���Ĵ��ں���ָ�븳ֵ����
	LPCWSTR PRC = L"main";//���ڲ���Unicode���뷽ʽ��˴��ڼ���������
	wc.lpszClassName = PRC;//�����������
	wc.lpszMenuName = NULL;//���ڲ˵�����Ϊ�ձ�ʾ��Ҫ�˵�
	wc.style = CS_HREDRAW | CS_VREDRAW;//���ڱ�ʾ������ʼӦ��С
	RegisterClass(&wc);//���������е�ֵȫ��д�����ϵͳ
	//���ڴ��д������ڣ������ڴ棬���ڴ���
	LPCWSTR xy = L"windows";
	HWND hwnd = CreateWindow(PRC, xy, WS_OVERLAPPEDWINDOW, 200, 200, 600, 600, NULL, NULL, hIns, NULL);
	//��ʾ����
	ShowWindow(hwnd, SW_SHOW);
	UpdateWindow(hwnd);
	//��Ϣѭ��
	MSG nmsg = { 0 };
	while (GetMessage(&nmsg, NULL, 0, 0))
	{
		TranslateMessage(&nmsg);
		DispatchMessage(&nmsg);
	}
	return 0;
}

