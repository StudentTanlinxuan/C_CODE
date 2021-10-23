#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//long long Fib_r(size_t N)
//{
//	return N < 2 ? N : Fib_r(N - 1) + Fib_r(N - 2);
//}
//long long* Fib(unsigned int N)//unsigned int N等价为size_t
//{
//	int i = 0;
//	long long* fibArry = malloc(sizeof(long long)*(N+1));
//	fibArry[0] = 0;
//	if (N = 0)
//		return fibArry;
//	fibArry[1] = 1;
//	for (i = 2; i <= N; ++i)
//	{
//		fibArry[i] = fibArry[i - 1] + fibArry[i - 2];
//	}
//	return fibArry;
//}
//int main()
//{
//	//long long ret = Fib_r(10);
//	//long long ret = Fib(10);
//	printf("%d\n", Fib(1000));
//	return 0;
//}

//int DisappearNumber(int*arr1, int*arr2, int sz1, int sz2)
//{
//	int x = 0;
//	int i = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		x ^= arr1[i];
//	}
//	for (i = 0; i < sz2; i++)
//	{
//		x ^= arr2[i];
//	}
//	return x;
//}
////消失的数字
////数组中有0 - n之间的所有整数,但缺少一个,请你找出缺少的数字
////采取异或法
//int main()
//{
//	int arr1[] = { 0,1,2,3,4,5,7,8,9 };
//	int arr2[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz1 = sizeof(arr1)/sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int ret = DisappearNumber(arr1, arr2, sz1, sz2);
//	printf("消失的数字是:>%d\n", ret);
//	return 0;
//}

//int DisappearNumber(int*arr,int sz)
//{
//	int x = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		x ^= arr[i];
//	}
//	for (i = 0; i <= sz; i++)
//	{
//		x ^= i;
//	}
//	return x;
//}
////优化法
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = DisappearNumber(arr,sz);
//	printf("消失的数字是:>%d\n", ret);
//	return 0;
//}

int* SingleNumber(int* nums, int sz)
{
	int x = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		x ^= nums[i];
	}
	//找出x的第m位为1(任意找)
	int m = 0;
	while (m<32)
	{
		if (x&(1 << m))
			break;
		else
			m++;
	}
	//分离
	int x1 = 0;
	int x2 = 0;
	for (i = 0; i < sz; i++)
	{
		if (nums[i] & (1 << m))
		{
			x1 ^= nums[i];
		}
		else
		{
			x2 ^= nums[i];
		}
	}
	int *retArr = (int*)malloc(sizeof(int) * 2);
	retArr[0] = x1;
	retArr[1] = x2;
	return retArr;
}
//只出现一次的数字
//给出一个整型数组,数组中每个元素都出现两次,但有两个元素只出现一次,请找出这两个元素
int main()
{
	int nums[] = { 1,2,1,3,2,5 };
	int sz = sizeof(nums)/sizeof(nums[0]);
	int* ret = SingleNumber(nums, sz);//single - 单个的
	printf("%d ", *ret);
	printf("%d ", *(ret+1));
	return 0;
}

