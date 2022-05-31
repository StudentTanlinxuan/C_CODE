//// 1.3 类模板 
//// 1.3.1 类模板语法
//// 类模板作用：建立一个通用的类，类中的成员 数据类型可以不具体指定，用一个虚拟的类型来代表
//// 语法：template<typename T>
////		 类
//// 解释：template -- 声明创建模板
////		 typename -- 表名后面的符号是一种数据类型，可以用class代替
////		 T -- 通用的数据类型，名称可以替换，通常为大写字母
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//// 类模板
//template<class NameType, class AgeType>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	void showPerson()
//	{
//		cout << "name = " << this->m_name << " age = " << this->m_age << endl;
//	}
//public:
//	// 姓名
//	NameType m_name;
//	// 年龄
//	AgeType m_age;
//};
//void test1()
//{
//	Person<string, int>p1("孙悟空", 999);
//	p1.showPerson();
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：类模板和函数模板非常相似，在声明模板template后面加类，此类称为类模板