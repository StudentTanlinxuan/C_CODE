//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//using namespace std;
//class Pet
//{
//private:
//	char m_Name[20];
//	int m_Age;
//	char m_Colour[10];
//public:
//	Pet(const char* name, int age, const char* colour)
//	{
//		strcpy(m_Name, name);
//		m_Age = age;
//		strcpy(m_Colour, colour);
//	}
//	char* GetName()
//	{
//		return m_Name;
//	}
//	int GetAge()
//	{
//		return m_Age;
//	}
//	char* GetColour()
//	{
//		return m_Colour;
//	}
//	virtual void Speak() = 0;
//	virtual void Getinfo() = 0;
//};
//
//class Cat : public Pet
//{
//public:
//	Cat(const char* name, int age, const char* colour):Pet(name, age, colour)
//	{
//
//	}
//	void Speak()
//	{
//		cout << "è�Ľ�����" << "miao! miao!" << endl;
//	}
//	void Getinfo()
//	{
//		cout << "è�����֣�" << GetName() << endl;
//		cout << "è�����䣺" << GetAge() << endl;
//		cout << "è����ɫ��" << GetColour() << endl;
//	}
//};
//class Dog : public Pet
//{
//public:
//	Dog(const char* name, int age, const char* colour) :Pet(name, age, colour)
//	{
//
//	}
//	void Speak()
//	{
//		cout << "���Ľ�����" << "wang!wang!" << endl;
//	}
//	void Getinfo()
//	{
//		cout << "�������֣�" << GetName() << endl;
//		cout << "�������䣺" << GetAge() << endl;
//		cout << "������ɫ��" << GetColour() << endl;
//	}
//};
//int main()
//{
//	Pet* p = new Cat("mikey", 2, "blue");
//	p->Getinfo();
//	p->Speak();
//	p = new Dog("benben", 1, "black");
//	p->Getinfo();
//	p->Speak();
//	return 0;
//}