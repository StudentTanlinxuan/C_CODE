#include<iostream>

using namespace std;

//// 常量的引用
//// 使用场景：修饰形参，防止误操作
//void ShowValue(const int &a)// 加上const让其不能修改a的值
//{
//	//a = 1000;
//	cout << "a = " << a << endl;
//}
//int main()
//{
//	int a = 10;
//	//const int& ref = 10;// 引用必须引用一块合法的内存
//	// 加上const编译器会将其修改成：int temp = 10;const int &ref = temp;
//	//ref = 20; // 加上const后，变成只读，变量不许修改
//	ShowValue(a);
//	cout << "a = " << a << endl;
//	/*int b = 20;
//	const int* pa = &a;
//	cout << pa << endl;
//	*pa = 20;
//	cout << a << endl;
//	pa = &b;
//	cout << pa << endl;*/
//	return 0;
//}

//// 函数默认参数
//// 如果调用函数时传入了数据，那就用传入的数据，如果没有传入则使用默认的
//// 语法：返回值类型 函数名称(形参 = 默认值){函数体}
//int func(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//// 注意事项：1.如果从其中一个形参开始有默认值，那么从这个形参开始从左向右都必须有默认值
////// 错误案例
////int func2(int a, int b = 10, int c)
////{
////	return a + b + c;
////}
//// 2.声明函数和函数实现两个中的形参只能有一个形参有默认值
//// 如果声明函数中有则函数实现中没有，反之
//int func2(int a = 10, int b = 20);
//int func2(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int ret = func(10,30);
//	cout << ret << endl;
//	cout << func2(10, 20) << endl;
//	return 0;
//}

//// 函数占位参数
//// 在c++中函数形参位置可以有占位参数，用来做占位，在调用时必须做填补操作
//// 语法：返回值类型 函数名 (数据类型){函数体};
//// 占位参数还可以有默认参数
//void func(int a, int)
//{
//	cout << "this is func" << endl;
//}
//int main()
//{
//	func(10, 10);// 在调用占位参数时必须填补
//	return 0;
//}

//// 函数重载
//// 作用：相同的函数名可以重复使用，提高复用率
//// 函数重载的满足条件：
//// 1、在同一个作用域下
//// 2、函数名称相同
//// 3、两个相同的函数名的函数参数类型不同，或者个数不同，或者顺序不同
//// 但是函数的返回值不能作为
//void func()
//{
//	cout << "func 的调用" << endl;
//}
//void func(int a)
//{
//	cout << "func(int a) 的调用" << endl;
//}
//void func(double a)
//{
//	cout << "func(double a) 的调用" << endl;
//}
//void func(int a, double b)
//{
//	cout << "func(int a, double b)的调用" << endl;
//}
//void func(double a, int b)
//{
//	cout << "func(double a, int b)的调用" << endl;
//}
//// 注意事项：函数的返回值不能作为函数重载的条件
////int func(double a, int b)// 无法重载仅按返回值区分的函数
////{
////	cout << "func(double a, int b)的调用" << endl;
////}
//int main()
//{
//	func();
//	func(10);
//	func(3.14);
//	func(10,3.14);
//	func(3.14,10);
//	return 0;
//}

// 函数重载的注意事项
// 1.引用作为函数重载的条件
void func(int &a)// int &a = 10; 语法不合法
{
	cout << "func(int &a)的调用" << endl;
}
void func(const int& a)// const int &a = 10; 语法合法
// 因为编译器会创建一个临时变量存放10，再使a指向那块内存
{
	cout << "func(const int &a)的调用" << endl;
}
// 2.函数重载遇到默认参数 
void func2(int a , int b = 10)
{
	cout << "func(int a, int b)的调用" << endl;
}
void func2(int a)
{
	cout << "func(int a)的调用" << endl;
}
int main()
{
	//int a = 10;
	//func(a);// 此时会调用func(int &a)
	//// 要想调用func(const int &a)
	//func(10);

	//func2(10);// 当函数重载遇到默认参数，会出现二义性就会出现错误
	// 注意：在使用时避免这种情况的发生
	return 0;
}