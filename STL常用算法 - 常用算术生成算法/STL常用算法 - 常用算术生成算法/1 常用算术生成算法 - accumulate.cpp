///* 5.5 �������������㷨
//* ע�⣺���������㷨����С���㷨��ʹ��ʱ������ͷ�ļ�Ϊ#include<numeric>
//* �㷨��飺
//* accumulate	��������Ԫ���ۼ��ܺ�
//* fill			�����������Ԫ��
//*/
//
///* 5.5.1 accumulate
//* ���ã����������� ����Ԫ���ۼ��ܺ�
//* ����ԭ�ͣ�
//* accmumlate(iterator beg, iterator end, value);
//* ����������Ԫ���ۼ��ܺ�
//* beg		��ʼ������
//* end		����������
//* value     ��ʼ�ۼ�ֵ
//*/
//
//
//
//
//#include<iostream>
//#include<vector>
//#include<numeric>
//
//using namespace std;
//
//void test1()
//{
//	vector<int> v;
//
//	for (int i = 0; i <= 100; i++)
//	{
//		v.push_back(i);
//	}
//
//	// ����3��һ�� ��ʼ�ۼ�ֵ
//	int total = accumulate(v.begin(), v.end(), 0);
//	cout << "total = " << total << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺accumulateʹ��ʱͷ�ļ�ע����numeric,����㷨��ʵ��