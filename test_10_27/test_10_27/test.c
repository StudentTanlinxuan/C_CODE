#define _CRT_SECURE_NO_WARNINGS 1

#include<string.h>
#include<stdlib.h>
#include<stdio.h>

//给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，
//分别表示 nums1 和 nums2 中的元素数目。
//请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int* tmp = (int*)malloc(sizeof(int)*(m + n));
	int i1 = 0, i2 = 0;
	int i = 0;
	while (i1 < m && i2 < n)
	{
		if (nums1[i1] < nums2[i2])
		{
			tmp[i] = nums1[i1];
			i++;
			i1++;
		}
		else
		{
			tmp[i] = nums2[i2];
			i++;
			i2++;
		}
	}
	while (i1 < m)
	{
		tmp[i] = nums1[i1];
		i++;
		i1++;
	}
	while (i2 < n)
	{
		tmp[i] = nums2[i2];
		i++;
		i2++;
	}
	memcpy(nums1, tmp, sizeof(int)*(m + n));
	free(tmp);
	tmp = NULL;
}
int main()
{
	int nums1[] = { 1,2,3,0,0,0 };
	int nums2[] = { 5,6,7 };
	int m = 3;
	int n = 3;
	int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
	int nums2Size = sizeof(nums2) / sizeof(nums2[0]);
	merge(nums1, nums1Size, m, nums2, nums2Size, n);
	int i = 0;
	for (i = 0; i < (m+n); i++)
	{
		printf("%d ", *(nums1 + i));
	}
	return 0;
}

//暴力求解法
//int* rotate(int* arr, int k, int size)
//{
//	k %= size;
//	int start = 0;
//	int end = size - 1;
//	int mid = size - k - 1;
//	int tmp = 0;
//	while (start < mid)
//	{ 
//		tmp = arr[start];
//		arr[start] = arr[mid];
//		arr[mid] = tmp;
//		start++;
//		mid--;
//	}
//	//[4, 3, 2, 1, 5, 6, 7]
//	int start2 = size - k;
//	while (start2 < end)
//	{
//		tmp = arr[start2];
//		arr[start2] = arr[end];
//		arr[end] = tmp;
//		start2++;
//		end--;
//	}
//	//[4,3,2,1,7,6,5]
//	int start3 = 0;
//	int end2 = size - 1;
//	while (start3 < end2)
//	{
//		tmp = arr[start3];
//		arr[start3] = arr[end2];
//		arr[end2] = tmp;
//		start3++;
//		end2--;
//	}
//	//[5, 6, 7, 1, 2, 3, 4]
//	return arr;
//}
//优化法

//void reverse(int* arr, int left, int right)
//{
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int* rotate(int* arr, int k, int size)
//{
//	//k有可能大于数组的大小
//	k %= size;
//	reverse(arr, 0, size - k - 1);
//	reverse(arr, size - k, size - 1);
//	reverse(arr, 0, size - 1);
//	return arr;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	//{5,6,7,1,2,3,4}
//	int k = 3;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int* ret = rotate(arr, k, size);//rotate 使旋转
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}