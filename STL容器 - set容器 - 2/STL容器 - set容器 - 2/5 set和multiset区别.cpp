///*3.8.6 set��multiset����
//* ����
//* 1. set�����Բ����ظ���Ԫ�أ���multiset����
//* 2. set�ڲ������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
//* 3. multiset���������ݣ���˿��Բ����ظ�����
//*/
//
//
//#include<iostream>
//#include<set>
//
//using namespace std;
//
//void test1()
//{
//	set<int> s;
//
//	pair<set<int>::iterator, bool> ret = s.insert(10);
//
//	if (ret.second)
//	{
//		cout << "��һ�β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "��һ�β���ʧ��" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "�ڶ��β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "�ڶ��β���ʧ��" << endl;
//	}
//
//	multiset<int> ms;
//	// multiset��������ظ�ֵ
//	ms.insert(10);
//	ms.insert(10);
//
//	// ����
//	for (multiset<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
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
//// �ܽ᣺�������������ظ����ݿ�������set
////		 �����������ظ����ݿ�������multiset