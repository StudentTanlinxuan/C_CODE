#include<iostream>
#include<fstream>

using namespace std;
// 5.2.2 ���ļ�
// �����ƶ��ļ���Ҫ��������Ա���ó�Ա����read
// ����ԭ�ͣ�istream& read(char* buffer, int len);
// �������ͣ��ַ�bufferָ���ڴ��е�һ�δ洢�ռ䡣len�Ƕ�д���ֽ�����

class Person
{
public:
	char m_Name[64] = { 0 };
	int m_Age;
};
void test1()
{
	// 1. ����ͷ�ļ�

	// 2. ����������
	ifstream ifs;

	// 3. ���ļ�  ���жϴ��Ƿ�ɹ�
	ifs.open("Person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
	}
	// 4. ���ļ�
	Person p;
	ifs.read((char*)&p, sizeof(p));
	cout << "p������Ϊ��" << p.m_Name << " p������Ϊ��" << p.m_Age << endl;

	// 5. �ر��ļ�
	ifs.close();
}
int main()
{
	test1();
	return 0;
}
// �ܽ᣺�ļ��������������ͨ��read�������Զ����Ʒ�ʽ������