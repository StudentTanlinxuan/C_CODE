///*3.8.7 pair���鴴��
//* ���ã��ɶԳ��ֵ����ݣ����ö�����Է�����������
//* ���ִ�����ʽ��
//* pair<type, type> p (value1, value2);
//* pair<type, type> p = make_pair(value1, value2);
//*/
//
//
//#include<iostream>
//
//using namespace std;
//
//void test1()
//{
//	// ��һ��ʹ�÷�ʽ
//	pair<string, int> p1("Tom", 20);
//	// ��ȡ����ֱ��ʹ�ñ����� . ��ʽ
//	cout << "������" << p1.first << " ���䣺" << p1.second << endl;
//
//	// �ڶ��ַ�ʽ
//	pair<string, int> p2 = make_pair("Jerry", 30);
//	cout << "������" << p2.first << " ���䣺" << p2.second << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}