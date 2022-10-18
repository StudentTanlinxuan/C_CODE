#include<iostream>

using namespace std;

class Plural
{
public:
	int m_Real; // Êµ²¿
	int m_Virtual; // Ðé²¿
public:
	Plural()
	{

	}
	Plural(int real, int virtualn)
	{
		m_Real = real;
		m_Virtual = virtualn;
	}
	Plural operator+(Plural p)
	{
		Plural temp;
		temp.m_Real = this->m_Real + p.m_Real;
		temp.m_Virtual = this->m_Virtual + p.m_Virtual;
		return temp;
	}
	Plural& operator=(Plural& p)
	{
		return *this;
	}
};

int main()
{
	Plural p1(1, 2);
	Plural p2(3, 4);
	Plural p3 = p1 + p2;
	cout << p3.m_Real << " + j" << p3.m_Virtual << endl;
	return 0;
}