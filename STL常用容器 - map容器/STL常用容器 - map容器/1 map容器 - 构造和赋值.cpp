///*3.9.2 map����͸�ֵ
//* 
//* 3.9.1 map��������
//
//**��飺**
//
//* 1. map������Ԫ�ض���pair
//* 2. pair�е�һ��Ԫ��Ϊkey����ֵ�������������ã��ڶ���Ԫ��Ϊvalue��ʵֵ��
//* 3. ����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����
//* 
//* ���ã���map�������й���͸�ֵ
//* ����ԭ�ͣ�
//* ���죺
//* map<T1, T2> mp; // mapĬ�Ϲ��캯��
//* map(const map& mp); // ��������
//* ��ֵ��
//* map& operator=(const map& mp); // ���صȺ������
//*/
//
//#include<iostream>
//#include<map>
//
//using namespace std;
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << (*it).first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	// ����map����
//	map<int, int> m;
//
//	// ��������ʱ�����Զ���key��ֵ����
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(3, 30));
//
//	printMap(m);
//
//	// ��������
//	map<int, int> m2(m);
//	printMap(m2);
//
//	// ��ֵ
//	map<int, int> m3;
//	m3 = m2;
//	printMap(m3);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺map�����е��������ݶ��ǳɶԴ��ڵģ���������ʱҪʹ�ö���