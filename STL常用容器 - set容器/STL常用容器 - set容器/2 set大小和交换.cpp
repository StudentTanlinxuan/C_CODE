///*3.8.3 set��С�ͽ���
//*���ã�ͳ��set������С�Լ�����set����
//* ����ԭ�ͣ�
//* size(); // ����������Ԫ�ص���Ŀ
//* empty(); // �ж������Ƿ�Ϊ��
//* swap(); // ����������������
//*/
//
//#include<iostream>
//#include<set>
//
//using namespace std;
//
//void printSet(const set<int>& s)
//{
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//// ��С
//void test1()
//{
//	set<int> s1;
//	// ��������
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//
//
//	// ��ӡ����
//	printSet(s1);
//
//	if (s1.empty())
//	{
//		cout << "s1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "s1��Ϊ��" << endl;
//		cout << "s1�Ĵ�СΪ��" << s1.size() << endl;
//	}
//}
//
//// ����
//void test2()
//{
//	set<int> s1;
//	// ��������
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//
//	set<int> s2;
//	// ��������
//	s2.insert(100);
//	s2.insert(200);
//	s2.insert(300);
//	s2.insert(400);
//	cout << "����ǰ��" << endl;
//	printSet(s1);
//	printSet(s2);
//
//	cout << "������" << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// �ܽ᣺ͳ�ƴ�С -- size();
////		 �ж��Ƿ�Ϊ�� -- empty();
////		 ���� -- swap();