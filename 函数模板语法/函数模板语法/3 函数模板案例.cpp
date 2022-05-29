// 1.2.3 函数模板案例
// 案例描述：
// 利用函数模板模拟一个排序的函数，可以对不同的数据类型数组进行排序
// 排序规则从大到小，排序算法为选择排序
// 分别用int类型数组和char类型数组进行测试

#include<iostream>

using namespace std;

template<class T>// typename可以替换成class
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void selectSort(T arr[], int sizenums)
{
	T begin = 0;
	T end = sizenums - 1;
	while (begin < end)
	{
		T max = begin;
		T min = end;
		for (int i = 0; i <= end; i++)
		{
			if (arr[i] < arr[min])
			{
				min = i;
			}
			if (arr[i] > arr[max])
			{
				max = i;
			}
		}
		mySwap(arr[begin], arr[max]);
		if (min == begin)
		{
			min = max;
		}
		mySwap(arr[end], arr[min]);
		begin++;
		end--;
	}
}

void test1()
{
	int arr[] = { 9,6,3,2,5,4,1,8,7,0 };
	selectSort<int>(arr, sizeof(arr) / sizeof(int));
	for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++)
	{
		cout << arr[i] ;
	}
}
int main()
{
	test1();
	return 0;
}