#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//long long Fib_r(size_t N)
//{
//	return N < 2 ? N : Fib_r(N - 1) + Fib_r(N - 2);
//}
//long long* Fib(unsigned int N)//unsigned int N�ȼ�Ϊsize_t
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
////��ʧ������
////��������0 - n֮�����������,��ȱ��һ��,�����ҳ�ȱ�ٵ�����
////��ȡ���
//int main()
//{
//	int arr1[] = { 0,1,2,3,4,5,7,8,9 };
//	int arr2[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz1 = sizeof(arr1)/sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int ret = DisappearNumber(arr1, arr2, sz1, sz2);
//	printf("��ʧ��������:>%d\n", ret);
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
////�Ż���
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = DisappearNumber(arr,sz);
//	printf("��ʧ��������:>%d\n", ret);
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
	//�ҳ�x�ĵ�mλΪ1(������)
	int m = 0;
	while (m<32)
	{
		if (x&(1 << m))
			break;
		else
			m++;
	}
	//����
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
//ֻ����һ�ε�����
//����һ����������,������ÿ��Ԫ�ض���������,��������Ԫ��ֻ����һ��,���ҳ�������Ԫ��
int main()
{
	int nums[] = { 1,2,1,3,2,5 };
	int sz = sizeof(nums)/sizeof(nums[0]);
	int* ret = SingleNumber(nums, sz);//single - ������
	printf("%d ", *ret);
	printf("%d ", *(ret+1));
	return 0;
}

