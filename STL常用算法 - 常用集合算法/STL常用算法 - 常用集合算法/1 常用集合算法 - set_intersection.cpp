///* 5.6 ���ü����㷨
//* �㷨��飺
//* set_intersection		�����������Ľ���
//* set_union				�����������Ĳ���
//* set_difference		�����������Ĳ
//*/
//
///* 5.6.1 set_intersection
//* ���ã������������Ľ���
//* ����ԭ�ͣ�set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//* �����������Ľ���
//* ע�⣺����������������������
//* beg1����1��ʼ������
//* end1����1����������
//* beg2����2��ʼ������
//* end2����2����������
//* destĿ��������ʼ������
//*/
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
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
//		v1.push_back(i); // 0 ~ 9
//		v2.push_back(i + 5); // 5 ~ 14
//	}
//
//	vector<int> vTarget;
//	// Ŀ��������Ҫ��ǰ���ٿռ�
//	// �������������������а���С���������ٿռ��ڴ� ȡС������size����
//	vTarget.resize(min(v1.size(), v2.size()));
//
//	// ��ȡ����
//	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	// ע�⣺set_intersection���ص������������н��������һ��Ԫ�ص�λ��
//
//	for_each(vTarget.begin(), itEnd, MyPrint()); 
//	// ע��˴��Ľ���������Ҫ��set_intersection���صĵ�����
//	// ��Ϊ����ָ����Сʱ�����ǵ���������
//	cout << endl;
//
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
//
///* �ܽ᣺
//*		1. Դ�����е�����������������������
//*		2. �ڸ�Ŀ���������ٿռ�ʱ����Ҫȡ������������С��������С
//*		3. set_intersection�ķ���ֵ���ǽ����е����һ��Ԫ��λ��   �����ڱ���ʱҪ�÷��ص����������
//*/