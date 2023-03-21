#include<iostream>

using namespace std;
typedef int ElemType;

int main()
{
	// 一维数组
	ElemType arr[20];

	cout << arr << endl;// 表示数组的首地址
	cout << arr + 1 << endl;// 表示数组首地址的下一个元素的地址
	cout << arr + 2 << endl;// 表示数组首地址的下一个的下一个元素的地址
	cout << &arr << endl;// 表示数组的地址
	// 二维数组
	// 一般编译器都是采用行优先存储的方式存储二维数组，但是matlab和fortran采用列优先存储方式存储
	// 假如二维数组arr[m][n]起始地址为LOC
	// 1> 行优先：a[i][j]的地址为：(i * n + j)*sizeof(ElemType)
	// 2> 列优先：a[i][j]的地址为：(j * m + i)*sizeof(ElemType)
 	return 0;
}