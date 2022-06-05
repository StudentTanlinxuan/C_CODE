// 1.3.9 类模板案例
// 案例描述：实现一个通用的数组类，要求如下：
// 可以对内置的数据类型以及自定义数据类型的数据进行存储
// 将数组中的数据存储到堆区
// 构造函数中可以传入数组的容量
// 提供对应的拷贝构造函数以及operator = 防止浅拷贝问题
// 提供尾插法和尾删法对数组中的数据进行插入和删除
// 可以通过访问下标的方式访问数组中的元素
// 可以获取数组中当前元素个数和数组容量

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
		// 利用尾插法插入数据
		arr1.Push_Back(i);
	}
	cout << "arr1的打印输出" << endl;
	printArrInt(arr1);
	cout << "arr1的容量：" << arr1.Get_Capacity() << endl;
	cout << "arr1的大小：" << arr1.Get_Size() << endl;
	myArray<int> arr2(arr1);
	cout << "arr2尾删前的打印输出" << endl;
	printArrInt(arr2);
	arr2.Pop_Back();
	cout << "arr2尾删后的打印输出" << endl;
	printArrInt(arr2);
	cout << "arr2的容量：" << arr2.Get_Capacity() << endl;
	cout << "arr2的大小：" << arr2.Get_Size() << endl;
	//myArray<int> arr3(100);
	//arr3 = arr1;
}

// 自定义类型数据的测试

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
		cout << "姓名：" << personArr[i].m_Name << " 年龄： " << personArr[i].m_Age << endl;
	}

}

void test02()
{
	//创建数组
	MyArray<Person> pArray(10);
	Person p1("孙悟空", 30);
	Person p2("韩信", 20);
	Person p3("妲己", 18);
	Person p4("王昭君", 15);
	Person p5("赵云", 24);

	//插入数据
	pArray.Push_back(p1);
	pArray.Push_back(p2);
	pArray.Push_back(p3);
	pArray.Push_back(p4);
	pArray.Push_back(p5);

	printPersonArray(pArray);

	cout << "pArray的大小：" << pArray.getSize() << endl;
	cout << "pArray的容量：" << pArray.getCapacity() << endl;

}

int main()
{
	test2();
	//test1();
	return 0;
}