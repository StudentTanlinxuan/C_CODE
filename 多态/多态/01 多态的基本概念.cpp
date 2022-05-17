//#include<iostream>
//
//using namespace std;
//// 4.7.1 多态的基本概念
//// 多态分为两类：
//// 静态多态：函数重载和运算符重载属于静态多态，复用函数名
//// 动态多态：派生类和虚函数实现运行是动态多态
//// 静态多态和动态多态的区别：
//// 静态多态的函数地址早绑定 - 编译阶段确定函数地址
//// 动态多态的函数地址晚绑定 - 运行阶段确定函数地址
//
//// 动物类
//class Animal
//{
//public:
//	// 在函数前面加上virtual变成虚函数，那么编译器在编译的时候不能确定函数调用了
//	// virtual--虚拟的
//	virtual void Speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//// 猫类
//class Cat :public Animal
//{
//public:
//	// 重写： 函数的返回值类型  函数名  形参列表  完全相同
//	// 子类再重写时关键字virtual可写可不写
//	virtual void Speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//// 狗类
//class Dog :public Animal
//{
//public:
//	void Speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//// 执行说话函数
//// 地址早绑定 - 编译阶段确定函数地址
//// 如果想执行小猫说话，那么这个函数的地址就不能早绑定，需要在运行阶段进行绑定，地址晚绑定
//
//// 动态多态的满足条件：
//// 1. 有继承关系
//// 2. 子类重写父类的虚函数
//
//// 动态多态的使用
//// 父类的指针或者引用 指向子类对象
//void doSpeak(Animal& animal)// Animal &animal = cat;
//{
//	animal.Speak();
//}
//void test1()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//}
//void test2()
//{
//	cout << "size of Animal = " << sizeof(Animal) << endl;
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// 总结：多态的满足条件：1. 有继承关系  2. 子类重写父类的虚函数
////       动态多态的使用：父类的指针或者引用  指向子类对象
////				   重写：函数的返回值类型  函数名  形参列表  完全相同