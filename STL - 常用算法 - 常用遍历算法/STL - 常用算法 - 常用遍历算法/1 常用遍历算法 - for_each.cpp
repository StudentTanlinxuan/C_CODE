///*5.1 ���ñ����㷨
//* for_each // ��������
//* transform // ������������һ������
//* 5.1.1 for_each
//* ���ã�ʵ�ֱ�������
//* ����ԭ�ͣ�
//* for_each(iterator beg, iterator end, _func);
//* �����㷨 ��������Ԫ��
//* beg ��ʼ������
//* end ����������
//* _func ������������
//*/
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//void print1(int val)
//{
//	cout << val << " ";
//}
//
//class Print
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test1()
//{
//	vector<int> v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	
//	// ��ͨ����ʵ��
//	for_each(v.begin(), v.end(), print1);
//	cout << endl;
//
//	// �º���(��������)ʵ��
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺for_each��ʵ�ʿ���������ñ����㷨������������