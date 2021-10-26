#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//int removeElement(int* nums, int numsSize, int val)
//{
//	int src = 0;
//	int dst = 0;
//	while (src < numsSize)
//	{
//		if (nums[src] != val)
//		{
//			nums[dst] = nums[src];
//			src++;
//			dst++;
//		}
//		else
//		{
//			src++;
//		}
//	}
//	return dst;
//}
////移除元素
////给你一个数组 nums 和一个值 val，
////你需要 原地 移除所有数值等于 val 的元素,并返回移除后数组的新长度。
////不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
//int main()
//{
//	int nums[] = { 1,2,3,4,3,5,3 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int val = 3;
//	int ret = removeElement(nums, numsSize, val);
//	printf("%d\n", ret);
//	return 0;
//}

//int removeDuplicates(int* nums, int numsSize)
//{
//	if (numsSize == 0)
//	{
//		return 0;
//	}
//	int preve = 0, cur = 1, src = 0;
//	while (cur < numsSize)
//	{
//		if (nums[preve] != nums[cur])
//		{
//			nums[src] = nums[preve];
//			cur++;
//			preve++;
//			src++;
//		}
//		else
//		{
//			cur++;
//			preve++;
//		}
//	}
//	nums[src] = nums[preve];
//	src++;
//	preve++;
//	return src;
//}
////删除有效数组中的重复项
////给你一个有序数组 nums ，请你 原地 删除重复出现的元素，
////使每个元素 只出现一次 ，返回删除后数组的新长度。
////不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
//int main()
//{
//	int nums[] = { 1,1,2,2,2,3,3,3,4,5 };
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	int ret = removeDuplicates(nums, numsSize);
//	printf("%d\n", ret);
//	return 0;
//}

int* addToArrayForm(int* num, int numSize, int k, int* returnSize)
{
	int kSize = 0;
	int knum = k;
	while (knum)
	{
		kSize++;
		knum /= 10;
	}
	int len = numSize > kSize ? numSize : kSize;
	int* retArr = (int*)malloc(sizeof(int)*(len + 1));
	int numi = numSize - 1;
	int Ai = 0;
	int Nextnum = 0;
	while (len--)
	{
		int a = 0;
		if (numi >= 0)
		{
			a = num[numi];
			numi--;
		}
		int ret = a + Nextnum + k % 10;
		k /= 10;
		if (ret > 9)
		{
			ret -= 10;
			Nextnum = 1;
		}
		else
		{
			Nextnum = 0;
		}
		retArr[Ai] = ret;
		Ai++;
	}
	if (Nextnum == 1)
	{
		retArr[Ai] = 1;
		Ai++;
	}
	int left = 0, right = Ai - 1;
	while (left < right)
	{
		int tmp = retArr[left];
		retArr[left] = retArr[right];
		retArr[right] = tmp;
		left++;
		right--;
	}
	*returnSize = Ai;
	return retArr;
}
//对于非负整数 X 而言，X 的数组形式是每位数字按从左到右的顺序形成的数组
//例如，如果 X = 1231，那么其数组形式为 [1,2,3,1]
//给定非负整数 X 的数组形式 A，返回整数 X+K 的数组形式
int main()
{
	int num[] = { 2,7,4 };
	int k = 181;
	int numSize = sizeof(num) / sizeof(num[0]);
	int *returnSize = NULL;
	int* ret = addToArrayForm(num,numSize,k,returnSize);
	printf("returnSize = %d\n", *returnSize);
	printf("%d\n", *ret);
	printf("%d\n", *(ret +1));
	printf("%d\n", *(ret +2));
	return 0;
}