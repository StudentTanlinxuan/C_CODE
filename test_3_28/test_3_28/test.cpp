#include<iostream>

using namespace std;

// 内存中划分四个区
// 1.代码区  2.全局区  3.栈区  4.堆区

//// 全局区
//// 创建一个全局变量
//int g_a = 10;
//int g_b = 10;
//// 创建一个全局常量
//const int c_g_a = 10;
//const int c_g_b = 10;
//int main()
//{
//	// 全局区
//	// 主要存放全局变量，静态变量，常量(字符串常量，其他常量(const修饰的常量))
//	// 创建一个局部变量
//	int a = 10;
//	int b = 10;
//
//	cout << "局部变量a的地址为: " << &a << endl;
//	cout << "局部变量b的地址为: " << &b << endl;
//
//	cout << "全局变量g_a的地址为: " << &g_a << endl;
//	cout << "全局变量g_b的地址为: " << &g_b << endl;
//	// 静态变量
//	static int s_a = 10;
//	static int s_b = 10;
//	cout << "静态变量s_a的地址为: " << &s_a << endl;
//	cout << "静态变量s_b的地址为: " << &s_b << endl;
//	// 常量
//	// 字符串常量
//	cout << "字符串常量的地址为: " << &"hello world" << endl;
//	// const修饰的变量
//	// const修饰全局变量 -- 全局常量
//	cout << "全局常量c_g_a的地址为: " << &c_g_a << endl;
//	cout << "全局常量c_g_b的地址为: " << &c_g_b << endl;
//	// const修饰局部变量 -- 局部常量 
//	// 局部常量 -- 不在全局区中存放，和局部变量在一起存放
//	const int c_l_a = 10;// c--const  g--global(全局)  l--local(局部)
//	const int c_l_b = 10;
//	cout << "局部常量c_l_a的地址为: " << &c_l_a << endl;
//	cout << "局部常量c_l_b的地址为: " << &c_l_b << endl;
//	//system("pause");
//	return EXIT_SUCCESS;
//}
//
//// 栈区 -- 注意事项:栈区的数据不能返回局部变量的地址
//// 栈区里面存放的数据由编译器管理开辟与释放
//int* func()
//{
//	// 局部变量，存放在栈区，栈区的数据在执行完函数后会自动释放掉
//	// 栈区存放局部变量，函数的形参
//	int a = 10;
//	return &a;// 返回局部变量的地址
//}
//int main()
//{
//	int* p = func(); // 此处的操作已经属于非法操作内存，
//	// 因为函数里面的局部变量在执行完函数时编译器已经将其释放，再用*操作已经非法
//	cout << *p << endl;// 前几次打印编译器会对其进行保留
//	cout << *p << endl;
//
//	return 0;
//}

//// 堆区
//// 堆区的数据由程序员管理它的开辟与释放，若程序员没有释放则由操作系统释放
//int* func()
//{
//	// 在堆上开辟数据采用关键字new
//	int* p = new int(10);// p实质还是局部变量，存放在栈区，而p指向的内容存放在堆区
//	// new + 数据类型(开辟数据的初始值)返回新开辟的数据的地址
//	return p;
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//
//	return 0;
//}

//// 1.关键字new的基本语法
//int* func()
//{
//	// new会返回 创建的数据类型的地址
//	int* p = new int(10);
//	return p;
//}
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	// 释放在堆区上创建的数据采用关键字delete
//	delete p;
//	//cout << *p << endl;// p指向的内存已经被释放，再解引用就属于非法访问了
//}
//// 2.再堆区利用new开辟数组
//void test02()
//{
//	// 在堆区创建一个有十个整形变量的数组
//	int* arr = new int[10];// new返回的是数组首元素的地址
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//		//*(arr + i) = i + 100;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//		//cout << *(arr + i) << endl;
//	}
//	// 释放堆区上创建的数组需要再delete后面加一个[],后面加new返回回来的指针
//	delete[] arr;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}

//// 引用的基本语法
//int main()
//{
//	// 数据类型 &别名 = 原名
//	int a = 10;
//	// 创建一个别名
//	int& b = a;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	b = 100;// 别名与原名操作的是同一个内存空间
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}

// 引用的注意事项
int main()
{
	int a = 10;
	// 1.引用必须初始化
	//int& b;//错误，应用要初始化
	int& b = a;
	// 2.引用被初始化后，不能再被修改
	int c = 20;
	b = c;// 此处并不是更改引用，使创建的别名b等于c，而是赋值运算，将c的值赋给b
	cout << "a = " << a << endl;//20
	cout << "b = " << b << endl;//20 -- 因为将c的值赋给了b
	cout << "c = " << c << endl;//20 -- 因为b和a指向同一块内存

	return 0;
}