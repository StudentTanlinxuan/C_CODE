//#include<iostream>
//
//using namespace std;
//
//// 设计带构造函数的Dog类
//
//class Dog
//{
//private:
//	string m_Name;
//	int m_Age;
//	char m_Sex;
//	float m_Weight;
//	string m_Speak;
//public:
//	Dog(string name, int age, char sex, float weight, string speak)
//	{
//		m_Name = name;
//		m_Age = age;
//		m_Sex = sex;
//		m_Weight = weight;
//		m_Speak = speak;
//	}
//	string GetName()
//	{
//		return m_Name;
//	}
//	int GetAge()
//	{
//		return m_Age;
//	}
//	char GetSex()
//	{
//		return m_Sex;
//	}
//	float GetWeight()
//	{
//		return m_Weight;
//	}
//	// 显示狗的叫声
//	void Speak()
//	{
//		cout << m_Speak << endl;
//	}
//};
//
//int main()
//{
//	Dog d1("Tom", 4, 'm', 2.4,"Arf!Arf!");
//	cout << d1.GetName() << endl;
//	cout << d1.GetAge() << endl;
//	cout << d1.GetSex() << endl;
//	cout << d1.GetWeight() << endl;
//	d1.Speak();
//	return 0;
//}