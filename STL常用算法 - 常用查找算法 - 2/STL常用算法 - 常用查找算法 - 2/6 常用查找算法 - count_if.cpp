/*5.2.6 count_if
* ���ã�������ͳ��Ԫ�ظ���
* ����ԭ�ͣ�
* count_if(iterator beg, iterator end, _Pred);
* ������ͳ��Ԫ�س��ֵĴ���
* beg ��ʼ������
* end ����������
* _Pred ν��
*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

// ͳ��������������

class Greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;// ���Ԫ�ش���20����true
	}
};

void test1()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	// ͳ�ƴ���20��Ԫ�ظ���
	int num = count_if(v.begin(), v.end(), Greater20());
	cout << "����20��Ԫ�ظ���Ϊ�� " << num << endl;
}

// ͳ���Զ�����������

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
public:
	string m_Name;
	int m_Age;
};

class AgeGreate20
{
public:
	bool operator()(const Person& p)
	{
		return p.m_Age > 20;
	}
};

void test2()
{
	vector<Person> v;
	Person p1("����", 35);
	Person p2("����", 35);
	Person p3("�ŷ�", 35);
	Person p4("����", 20);
	Person p5("�ܲ�", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int num = count_if(v.begin(), v.end(), AgeGreate20());
	cout << "�������20��������" << num << endl;
}

int main()
{
	//test1();
	test2();
	return 0;
}