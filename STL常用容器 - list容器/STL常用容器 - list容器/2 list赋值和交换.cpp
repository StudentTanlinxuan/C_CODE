//// 3.7.3 list��ֵ�ͽ���
//// ���ã���list�������и�ֵ���Լ�����list����
//// ����ԭ�ͣ�
//// assign(beg,end);// ��[beg,end)�����е����ݿ�����ֵ������
//// assign(n, elem);// ��n��elem������ֵ������
//// list& operator=(const list& lit); // ���صȺ������
//// swap(lst); // ��lst�뱾���Ԫ�ػ���
//
//#include<iostream>
//#include<list>
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
//// ��ֵ
//void test1()
//{
//	list<int> L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	list<int> L2;
//	L2 = L1; // operator=��ʽ��ֵ
//	printList(L2);
//
//	// ���䷽ʽ
//	list<int> L3(L1.begin(), L1.end());
//	printList(L3);
//
//	// n��elem��ʽ
//	list<int>L4(10, 100);
//	printList(L4);
//
//}
//
//// ����
//void test2()
//{
//	list<int> L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	list<int> L2(10, 100);
//	cout << "����ǰ��" << endl;
//	printList(L1);
//	printList(L2);
//
//	L1.swap(L2);
//	cout << "������" << endl;
//	printList(L1);
//	printList(L2);
//
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// �ܽ᣺list��ֵ�ͽ��������ܹ�������ü���