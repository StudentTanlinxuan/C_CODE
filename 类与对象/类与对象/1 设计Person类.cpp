//#include<iostream>
//
//using namespace std;
//
//
//class Person
//{
//	// ��Ա����
//private:
//	string m_Name; // ����
//	int m_Age; // ����
//	char m_Sex; // �Ա�
//
//	// ��Ա����
//public:
//	Person()
//	{
//
//	}
//
//	void Register(string name, int age, char sex)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//		this->m_Sex = sex;
//	}
//	void ShowMe()
//	{
//		cout << "������" << this->m_Name << " ���䣺" << this->m_Age << " �Ա�" << this->m_Sex << endl;
//	}
//	~Person()
//	{
//
//	}
//};
//
//int main()
//{
//	Person p1;
//	string name;
//	int age;
//	char sex;
//	cout << "������Ϣ��>" << endl;
//	cin >> name >> age >> sex;
//	p1.Register(name, age, sex);;
//	p1.ShowMe();
//	Person p2;
//	p2.Register("Zhang3", 19, 'm');
//	p2.ShowMe();
//	return 0;
//}