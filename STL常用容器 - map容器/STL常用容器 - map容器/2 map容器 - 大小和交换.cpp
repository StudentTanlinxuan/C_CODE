///*3.9.3 map��С�ͽ���
//* ���ã�ͳ��map�����Ĵ�С�ͽ���map����
//* ����ԭ�ͣ�
//* size(); // ���������е�Ԫ�ظ���
//* empty(); // �ж������Ƿ�Ϊ��
//* swap(mp); // ����������������
//*/
//
//#include<iostream>
//#include<map>
//
//using namespace std;
//
//// ��С����
//void test1()
//{
//	map<int, int> m;
//	
//	// ��m�в������ݣ�map�е����ݶ��ǳɶԴ��ڵģ����Բ���ʱҪʹ�ö���pair
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//
//	if (m.empty())
//	{
//		cout << "mΪ��" << endl;
//	}
//	else
//	{
//		cout << "m��Ϊ��" << endl;
//		cout << "m�Ĵ�СΪ��" << m.size() << endl;
//	}
//}
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//// ��������
//void test2()
//{
//	map<int, int> m1;
//
//	// ��m�в������ݣ�map�е����ݶ��ǳɶԴ��ڵģ����Բ���ʱҪʹ�ö���pair
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(pair<int, int>(2, 20));
//	m1.insert(pair<int, int>(3, 30));
//
//	map<int, int> m2;
//	m2.insert(pair<int, int>(4, 100));
//	m2.insert(pair<int, int>(5, 200));
//	m2.insert(pair<int, int>(6, 300));
//
//	cout << "����ǰ��" << endl;
//	printMap(m1);
//	printMap(m2);
//
//	m1.swap(m2);
//	cout << "������" << endl;
//	printMap(m1);
//	printMap(m2);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// �ܽ᣺size(); -- ͳ�ƴ�С
////		 empty(); -- �ж��Ƿ�Ϊ��
////		 swap(); -- ��������