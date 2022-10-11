//#include<iostream>
//
//using namespace std;
//
//// 设计Dog类
//class Dog
//{
//private:
//	string m_Name; // 姓名
//	int m_Age; // 年龄
//	char m_Sex; // 性别 male 男  female 女
//	float m_Weight; // 体重
//
//public:
//	// 初始化属性
//	void setdata()
//	{
//		cout << "请依次输入Dog的姓名，年龄，性别，体重" << endl;
//		cin >> m_Name >> m_Age >> m_Sex >> m_Weight;
//	}
//	
//	string GetName()
//	{
//		return this->m_Name;
//	}
//
//	int GetAge()
//	{
//		return this->m_Age;
//	}
//
//	char GetSex()
//	{
//		return this->m_Sex;
//	}
//
//	float GetWeight()
//	{
//		return this->m_Weight;
//	}
//
//};
//
//int main()
//{
//	Dog d1;
//	d1.setdata();
//	cout << "It is my dog." << endl;
//	cout << "Its name is " << d1.GetName() << endl;
//	cout << "It is "<< d1.GetAge() << " years old. " << endl;
//	char ret = d1.GetSex();
//	if (ret == 'm')
//	{
//		cout << "It is male." << endl;
//	}
//	else
//	{
//		cout << "It is female." << endl;
//	}
//
//	cout << "It is  "<< d1.GetWeight() << " kg. " << endl;
//
//	return 0;
//}