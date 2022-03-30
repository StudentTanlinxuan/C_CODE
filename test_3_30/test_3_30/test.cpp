#include<iostream>

using namespace std;
//// 引用做函数参数
//// 交换两个数
//// 值传递
//void mySwap1(int a, int b)
//{
//	int temp = a;
//	a = b; 
//	b = temp;
//}
//// 址传递
//void mySwap2(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//// 引用传递
//void mySwap3(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//mySwap1(a,b);// 值传递，形参不会修饰实参
//	//mySwap2(&a, &b);// 址传递，形参会修饰实参
//	mySwap3(a, b);// 引用传递也会让形参修饰实参
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return EXIT_SUCCESS;
//}

//// 引用做函数的返回值
//// 1.不要返回局部变量的引用
//int& test1()
//{
//	int a = 10;
//	return a;
//}
//// 2.函数的调用可以作为左值
//int& test2()
//{
//	static int a = 10; 
//	// 加一个static，则a存放在全局区，全局区上的数据在程序结束后由操作系统释放
//	return a;
//}
//int main()
//{
//	//int& ret = test1();
//	//cout << "ret = " << ret << endl;// 错误，
//	// 因为a是一个局部变量存放在栈区，函数执行完会释放掉，再次操作属于非法操作
//
//	int& ret2 = test2();
//	cout << "ret2 = " << ret2 << endl;
//	cout << "ret2 = " << ret2 << endl;
//	test2() = 100;// 如果函数的返回值是引用，这个函数调用可以作为左值
//	cout << "ret2 = " << ret2 << endl;
//	cout << "ret2 = " << ret2 << endl;
//
//	return 0;
//}

// 引用的本质 -- 就是一个指针常量
// 引用一旦被初始化，就不能发生改变
// 发现是引用，则转化为 int* const ref = &a; 
void func(int& ref)
{
	ref = 100;// ret是引用，转化为*ref = 100;
}
int main()
{
	int a = 10;
	// 会自动转化为int* const ref = &a;ref所指向的内容不能修改
	int& ref = a;
	ref = 20;// 内部发现ref是引用，自动会帮我们转化为*ref = 20;

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func(a);
	return 0;
}