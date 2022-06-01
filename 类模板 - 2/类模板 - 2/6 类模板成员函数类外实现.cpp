//// 1.3.6 类模板成员函数类外实现
//
//#include<iostream>
//#include<string>
// 
//using namespace std;
//
//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	//{
//	//	this->m_Name = name;
//	//	this->m_Age = age;
//	//}
//	void showPerson();
//	//{
//	//	cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
//	//}
//public:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//// 构造函数类外实现
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//// 成员函数类外实现
//template<class T1, class T2>
//// 类模板成员函数类外实现步骤：
//// 1. 先将类模板中成员函数声明复制粘贴下来   void showPerson();
//// 2. 先加上Person作用域，因为是类模板成员函数，再加上<T1, T2>
//// 3. 最后因为编译器不认识T1,T2的类型，再加上template<class T1, class T2>让编译器认识T1,T2类型
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
//}
//
//void test1()
//{
//	Person<string, int> P("Tom", 20);
//	P.showPerson();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：类模板成员函数类外实现时，需要加上模板参数列表