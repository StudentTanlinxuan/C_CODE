///* 5.3.3 merge
//* ���ã�����������Ԫ�غϲ��������浽��һ������
//* ����ԭ�ͣ�
//* merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//* �����е�Ԫ�غϲ��������浽��һ������
//* ע�⣺���������е�Ԫ�ر����� ���� ��
//* beg1 ����1�Ŀ�ʼ������ 
//* end1 ����1�Ľ���������
//* beg2 ����2�Ŀ�ʼ������
//* end2 ����2�Ľ���������
//* dest Ŀ��������ʼ������
//*/
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//void Myprint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		//v2.push_back(i + 1);
//	}
//
//	for (int i = 10; i > 0; i--)
//	{
//		//v1.push_back(i);
//		v2.push_back(i);
//	}
//
//	// ����merge��v1��v2�ϲ���һ��
//	// ע�⣺1. �ϲ�ʱ�������������� ���� ��  
//	// 2. �������������б�����ͬ��������һ��������һ���ǽ���
//	
//	// Ŀ������
//	vector<int> vTarget;
//	
//	// ��ǰҪ��Ŀ����������ռ�
//	vTarget.resize(v1.size() + v2.size());
//
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), vTarget.end(), Myprint);
//	cout << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺merge�ںϲ�ʱ������������������
////       ������ǰ��Ŀ�����������ڴ�ռ�