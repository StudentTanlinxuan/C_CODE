//// 3.1.7 string�ַ���ȡ
//// string�е����ַ���ȡ��ʽ������
//// char& operator[](int n);// ͨ��[]��ʽȡ�ַ�
//// char& at(int n);// ͨ��at��ʽȡ�ַ�
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void test1()
//{
//	string str = "hello";
//
//	//cout << "str = " << str << endl;
//
//	// 1. ͨ��[]��ʽ��ȡ�����ַ�   Ҳ����ͨ���±�ķ�ʽ����
//	for (int i = 0; i < str.size(); i++)// str.size()���Ի�ȡ�ַ�������
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//	// 2. ͨ��at��ʽ��ȡ�����ַ�
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//	// �޸ĵ����ַ�
//	// ͨ��[]��ʽ
//	str[0] = 'x';
//	// xello
//	cout << "str = " << str << endl;
//
//	// ͨ��at��ʽ
//	str.at(1) = 'x';
//	// xxllo
//	cout << "str = " << str << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺string�ַ����е����ַ���ȡ�����ַ�ʽ������[]��at