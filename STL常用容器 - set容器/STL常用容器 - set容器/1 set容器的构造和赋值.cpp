///*set�����������Ԫ���ڲ���ʱ���ᱻ�Զ�����
//* set��multiset����set���������������ظ���Ԫ�� 
//*					 multiset�������������ظ���Ԫ��
//* 
//* 3.8.2 set����͸�ֵ
//* ���ã�����set��������ֵ
//* ����ԭ�ͣ�
//* ���죺
//* set<T> st; // Ĭ�Ϲ���
//* set(const set& st); // �������캯��
//* ��ֵ��
//* set& operator=(const set& st);// ���صȺ������
//*/
//
//#include<iostream>
//#include<set>
//
//using namespace std;
//
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	set<int> s1;
//	
//	// �������� ֻ��insert��ʽ
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(30);
//
//	// ��������
//	// set�����ص㣺set����Ԫ��ʱ������������
//	//				set��������������ظ�ֵ
//	printSet(s1);
//
//	// ��������
//	set<int> s2(s1);
//	printSet(s2);
//
//	// ��ֵ
//	set<int> s3;
//	s3 = s2;
//	printSet(s3);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺set��������������insert
////		 set�����������ݵ����ݻ��Զ�����