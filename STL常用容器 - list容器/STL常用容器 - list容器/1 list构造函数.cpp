//// 3.7.2 list���캯��
//// ���ã�����list����
//// ����ԭ�ͣ�
//// list<T> lst; // list������ģ��ʵ�֣�����Ĭ�Ϲ�����ʽ
//// list(beg,end); // ���캯����[beg,end)�����е�Ԫ�ؿ�������
//// list(n, elem); // ���캯����n��elem����������
//// list(const list& lst);// �������캯�� 
//
//#include<iostream>
//#include<list>
//
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
//void test1()
//{
//	// ����list����
//	list<int> L1; // Ĭ�Ϲ���
//
//	// ��������
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	// ��������
//	printList(L1);
//
//	// ���䷽ʽ����
//	list<int> L2((++L1.begin()), (--L1.end()));// �������൱��ָ��
//	printList(L2);
//
//	// ��������
//	list<int> L3(L1);
//	printList(L3);
//
//	// n��elem
//	list<int> L4(10, 1000);
//	printList(L4);
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺list���췽ʽͬ��������STL�����������������ռ���