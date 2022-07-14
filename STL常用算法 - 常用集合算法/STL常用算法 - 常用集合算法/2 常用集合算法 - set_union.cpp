///*	5.6.2 set_union
//* ���ã����������ϵĲ���
//* ����ԭ�ͣ�
//* set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//* ���������ϵĲ���
//* ע�⣺�������ϱ�������������
//* beg1 ����1��ʼ������
//* end1 ����1����������
//* beg2 ����2��ʼ������
//* end2 ����2����������
//* dest Ŀ��������ʼ������
//*/
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class MyPrint
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
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vector<int> vTarget;
//	// ��ǰ��Ŀ���������ٿռ�
//	// ���������� ��������û�н���������������������size���
//	vTarget.resize(v1.size() + v2.size());
//
//	// ��ȡ����
//	vector<int>:: iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	// ����Ŀ������
//	for_each(vTarget.begin(), itEnd, MyPrint());
//	cout << endl;
//
//	// �ڶ��ֱ�����ʽ
//	for (vector<int>::iterator it = vTarget.begin(); it < itEnd; it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
///* �ܽ᣺
//*		1. �󲢼�������������������������
//*		2. �ڸ�Ŀ���������ٿռ�ʱ����Ҫ��������������С���
//*		3. set_union����ֵ���ǽ��������һ��Ԫ�ص�λ��
//*/