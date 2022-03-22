#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;
// 两种定义常量的方法
// 1. #define 定义的宏常量
// 2. const修饰的变量 
//#define Day 7
//int main()
//{
//	// 屏幕中输出一个hello world
//	//cout << "hello world" << endl;
//
//	// 定义变量 数据类型 变量名 = 变量初始值
//	int a = 10;
//	cout << "a = " << a << endl;
//
//	// Day = 8; // 常量不可以修改
//	cout << "一周总共有" << Day << "天" << endl;
//
//	const int month = 12; // month 月份
//	// momth = 14; // 常量不可以修改
//	cout << "一年总共有" << month << "月" << endl;
//
//	// system("pause");  // system 系统 pause 暂停
//
//	return 0;
//}

//#define MIN(x,y) (x)<(y)?(x):(y)
//// #define 定义的东西，在预编译时只做简单的替换
//int main()
//{
//	//int a = 0;
//	//// 从键盘输入数据
//	//// 输入用cin
//	//cout << "请输入a的值" << endl;
//	//cin >> a;
//	//cout << "整形数据a = " << a << endl;
//
//	int i, j, k;
//	i = 10, j = 15;
//	k = 10 * MIN(i, j); // 10 * (10)<(15)?(10):(15) = 15  
//	cout << k << endl;
//	return 0;
//}

//// 三数比较大小
//int main()
//{
//	int pig1 = 0, pig2 = 0, pig3 = 0;
//	cout << "请依次输入三头小猪的体重:>" << endl;
//	cin >> pig1;
//	cin >> pig2;
//	cin >> pig3;
//	int max = 0, min = 0;
//	if (pig1 > pig2)
//	{
//		max = pig1;
//		min = pig2;
//	}
//	else
//	{
//		max = pig2;
//		min = pig1;
//	}
//	if (pig3 >= max)
//	{
//		max = pig3;
//		if (pig1 > pig2)
//		{
//			min = pig2;
//		}
//		else
//		{
//			min = pig1;
//		}
//	}
//	if (pig3 <= min)
//	{
//		min = pig3;
//		if (pig1 > pig2)
//		{
//			max = pig1;
//		}
//		else
//		{
//			max = pig2;
//		}
//	}
//	cout << "最重的小猪为:>" << max << endl;
//	cout << "最轻的小猪为:>" << min << endl;
//
//	//system("pause");
//	return EXIT_SUCCESS;// 0 -- EXIT_SUCCESS
//}

// 猜数字游戏
int main()
{
	// 系统随机生成一个数用rand()来完成，但是rand()返回的值由称为种子的初始值决定
	// 每次运行程序时，初始值都是一样的，所以导致每次随机生成的值都是相同的
	// 为了解决这个问题，每次出现新的种子值，
	// 采用srand()来提供种子值，将当前时间作为srand()的参数 
	srand((unsigned int)time(NULL));
	// 假设有a,b两个数，a%b的值永远都在0 -- b-1之间
	//cout << rand()%100 + 1 << endl;
	int key = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		cout << "请输入你猜测的数字:>" << endl;
		cin >> guess;
		if (guess > key)
		{
			cout << "猜大了" << endl;
		}
		else if (guess < key)
		{
			cout << "猜小了" << endl;
		}
		else
		{
			cout << "猜对了，该数字为:" << guess << endl;
			break;
		}
	}
 	system("pause");
	return 0;
}