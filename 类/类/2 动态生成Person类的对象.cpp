#include<iostream>

using namespace std;

// 动态生成Person类的对象
class Person
{
private:
	//char m_Name[20];
	string m_Name;
	int m_Age;
	char m_Sex;

public:
	Person()
	{
		//this->m_Name[0] = 'X';
		//this->m_Name[1] = 'X';
		//this->m_Name[2] = 'X';
		this->m_Name = "XXX";
		this->m_Age = 0;
		this->m_Sex = 'm';
	}
	void Register()
	{
		cout << "依次输入姓名，年龄，性别" << endl;
		cin >> m_Name >> m_Age >> m_Sex;
	}
	void ShowMe()
	{
		cout << m_Name << " " << m_Age << " " << m_Sex << endl;
	}
	~Person()
	{
		cout << "Now destroying the instance of Person！" << endl;
	}
};

int main()
{
	Person* p1 = new Person();
	Person* p2 = new Person();
	p1->ShowMe();
	p2->ShowMe();
	p1->Register();
	p2->Register();
	p1->ShowMe();
	p2->ShowMe();
	delete p1;
	delete p2;
	return 0;
}