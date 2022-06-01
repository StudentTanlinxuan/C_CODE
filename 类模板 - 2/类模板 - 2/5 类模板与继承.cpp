//// 1.3.5 类模板与继承
//// 当类模板碰到继承时，需注意以下几点：
//// 1. 当子类继承的父类是一个类模板，子类在声明时，要指定出父类中T的数据类型
//// 2. 如果不指定，编译器无法给子类分配内存
//// 3. 如果想灵活指定父类中的T的类型，子类也需变为类模板
//
//#include<iostream>
//
//using namespace std;
//template<class T>
//class Base
//{
//public:
//	Base()
//	{
//		cout << "父类中T的数据类型为：" << typeid(T).name() << endl;
//	}
//public:
//	T m;
//};
//// 1. 当子类继承的父类是一个类模板，子类在声明时，要指定出父类中T的数据类型
////class Son :public Base// error  因为必须要知道父类中T的类型，才能继承给子类
//class Son :public Base<int>// ok
//{
//
//};
//void test1()
//{
//	Son s1;
//}
//// 3. 如果想灵活指定父类中的T的类型，子类也需变为类模板
//template<class T1, class T2>
//class Son2 :public Base<T2>// 继承时要调用父类中的构造函数
//{
//public:
//	Son2()
//	{
//		cout << "T1的数据类型为：" << typeid(T1).name() << endl;
//		cout << "T2的数据类型为：" << typeid(T2).name() << endl;
//	}
//public:
//	T1 s;
//};
//void test2()
//{
//	Son2<int, char> s;
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// 总结：如果父类是类模板，子类需要指定出父类中T的数据类型