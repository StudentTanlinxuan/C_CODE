///* 5.4 ���ÿ������滻�㷨
//* �㷨��飺
//* copy			������ָ����Χ��Ԫ�ؿ�������һ������
//* replace			��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
//* replace_if		������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
//* swap			��������������Ԫ��
//*/
//
///* 5.4.1 copy
//* ���ã���������ָ����Χ��Ԫ�ؿ��������������
//* ����ԭ�ͣ�
//* copy(iterator beg, iterator end, iterator dest);
//* beg		��ʼ������
//* end		����������
//* dest		Ŀ��������ʼ������
//*/
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int> v2;
//	// �����Ŀ��������ǰ�����ڴ�ռ�
//	v2.resize(v1.size());
//	copy(v1.begin(), v1.end(), v2.begin());
//
//	for_each(v2.begin(), v2.end(), myPrint);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺��ʹ��copy�㷨ʱ��Ŀ�������ǵ���ǰ���ٿռ�