//#include<iostream>
//
//using namespace std;
//
//
//class Person
//{
//	// 成员属性
//private:
//	string m_Name; // 姓名
//	int m_Age; // 年龄
//	char m_Sex; // 性别
//
//	// 成员方法
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
//		cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << " 性别：" << this->m_Sex << endl;
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
//	cout << "输入信息：>" << endl;
//	cin >> name >> age >> sex;
//	p1.Register(name, age, sex);;
//	p1.ShowMe();
//	Person p2;
//	p2.Register("Zhang3", 19, 'm');
//	p2.ShowMe();
//	return 0;
//}