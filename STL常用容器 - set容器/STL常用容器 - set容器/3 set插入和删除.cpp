///*3.8.4 set�����ɾ��
//* ���ã�set�������в������ݺ�ɾ������
//* ����ԭ�ͣ�
//* insert(elem);// �������в���Ԫ��
//* clear();// �������Ԫ��
//* erase(pos); // ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
//* erase(beg,end);// ɾ��[beg,end)������Ԫ�أ�������һ��Ԫ�صĵ�����
//* erase��elem); // ɾ��������ֵΪelem��Ԫ��
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
//void test1()
//{
//	set<int> s1;
//	// ��������
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(30);
//
//	// ����
//	printSet(s1);
//
//	// ɾ��
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	// ɾ�����ذ汾
//	s1.erase(30);
//	printSet(s1);
//
//	// ���
//	//s1.erase(s1.begin(), s1.end());
//	s1.clear();
//	printSet(s1);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺clear(); -- ���
////		 erase(); -- ɾ��
////		 insert(); -- ����