//#include<iostream>
//#include<fstream>
//
//using namespace std;
//// 5.2 �������ļ�
//// �Զ����Ƶ���ʽ���ļ����в���
//// �򿪷�ʽҪָ��Ϊios::binary
//// 5.2.1 д�������ļ�
//// ������д�ļ���Ҫ������������ó�Ա����write
//// ����ԭ�ͣ�ostream& write(consr char* buffer, int len);
//// �������ͣ��ַ�ָ��bufferָ���ڴ��е�һ�δ洢�ռ䡣lenָ���Ƕ�д���ֽ���
//
//class Person
//{
//public:
//	char m_Name[64] = { 0 };
//	int m_Age;
//};
//void test1()
//{
//	// 1. ����ͷ�ļ�
//
//	// 2. ����������
//	ofstream ofs("Person.txt", ios::out | ios::binary);
//
//	// 3. ���ļ�
//	//ofs.open("Person.txt", ios::out | ios::binary);
//
//	// 4. д�ļ�
//	Person p = { "����",18 };
//	ofs.write((const char*)&p, sizeof(Person));
//
//	// 5. �ر��ļ�
//	ofs.close();
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺�ļ�������������ͨ��write�������Զ����Ƶķ�ʽд���ݡ�