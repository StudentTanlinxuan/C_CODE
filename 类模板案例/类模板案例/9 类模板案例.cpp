// 1.3.9 ��ģ�尸��
// ����������ʵ��һ��ͨ�õ������࣬Ҫ�����£�
// ���Զ����õ����������Լ��Զ����������͵����ݽ��д洢
// �������е����ݴ洢������
// ���캯���п��Դ������������
// �ṩ��Ӧ�Ŀ������캯���Լ�operator = ��ֹǳ��������
// �ṩβ�巨��βɾ���������е����ݽ��в����ɾ��
// ����ͨ�������±�ķ�ʽ���������е�Ԫ��
// ���Ի�ȡ�����е�ǰԪ�ظ�������������

#include<iostream>
#include"myArray.hpp"
#include<string>

using namespace std;

void printArrInt(myArray<int>& arr)
{
	for (int i = 0; i < arr.Get_Size(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test1()
{
	myArray<int> arr1(5);
	//arr1[0];
	for (int i = 0; i < 5; i++)
	{
		// ����β�巨��������
		arr1.Push_Back(i);
	}
	cout << "arr1�Ĵ�ӡ���" << endl;
	printArrInt(arr1);
	cout << "arr1��������" << arr1.Get_Capacity() << endl;
	cout << "arr1�Ĵ�С��" << arr1.Get_Size() << endl;
	myArray<int> arr2(arr1);
	cout << "arr2βɾǰ�Ĵ�ӡ���" << endl;
	printArrInt(arr2);
	arr2.Pop_Back();
	cout << "arr2βɾ��Ĵ�ӡ���" << endl;
	printArrInt(arr2);
	cout << "arr2��������" << arr2.Get_Capacity() << endl;
	cout << "arr2�Ĵ�С��" << arr2.Get_Size() << endl;
	//myArray<int> arr3(100);
	//arr3 = arr1;
}

// �Զ����������ݵĲ���

class Person
{
public:
	Person()
	{

	}
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
public:
	string m_Name;
	int m_Age;
};

void printPersonArray(myArray<Person>& personArr)
{
	for (int i = 0; i < personArr.getSize(); i++) {
		cout << "������" << personArr[i].m_Name << " ���䣺 " << personArr[i].m_Age << endl;
	}

}

void test02()
{
	//��������
	MyArray<Person> pArray(10);
	Person p1("�����", 30);
	Person p2("����", 20);
	Person p3("槼�", 18);
	Person p4("���Ѿ�", 15);
	Person p5("����", 24);

	//��������
	pArray.Push_back(p1);
	pArray.Push_back(p2);
	pArray.Push_back(p3);
	pArray.Push_back(p4);
	pArray.Push_back(p5);

	printPersonArray(pArray);

	cout << "pArray�Ĵ�С��" << pArray.getSize() << endl;
	cout << "pArray��������" << pArray.getCapacity() << endl;

}

int main()
{
	test2();
	//test1();
	return 0;
}