//// 3.7.7 list��ת������
//// ���ã��������е�Ԫ�ط�ת���Լ��������е�Ԫ������
//// ����ԭ�ͣ�
//// reverse(); // ��ת����
//// sort(); // ��������
//
//#include<iostream>
//#include<list>
//#include<algorithm>
//using namespace std;
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//// ��ת
//void test1()
//{
//	list<int> L1;
//
//	L1.push_back(40);
//	L1.push_back(20);
//	L1.push_back(50);
//	L1.push_back(10);
//	L1.push_back(30);
//	cout << "��תǰ��" << endl;
//	printList(L1);
//
//	L1.reverse();
//	cout << "��ת��" << endl;
//	printList(L1);
//}
//
//bool MyCompare(int v1, int v2)
//{
//	// ���� ���õ�һ���� > �ڶ�����
//	return v1 > v2;
//}
//
//// ����
//void test2()
//{
//	list<int> L1;
//
//	L1.push_back(40);
//	L1.push_back(20);
//	L1.push_back(50);
//	L1.push_back(10);
//	L1.push_back(30);
//	cout << "����ǰ��" << endl;
//	printList(L1);
//
//	cout << "�����" << endl;
//	// ���в�֧��������ʵ��������������������ñ�׼�㷨
//	// ��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
//	//sort(L1.begin(), L1.end());
//
//	L1.sort();// Ĭ����������Ǵ�С���� ��������
//	printList(L1);
//
//	// ��ν���
//	L1.sort(MyCompare);
//	printList(L1);
//
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// �ܽ᣺reverse() -- ��ת����(��Ա����)
////		 sort() -- ��������(��Ա����)