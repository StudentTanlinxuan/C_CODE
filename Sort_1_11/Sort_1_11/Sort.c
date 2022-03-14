#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>
#include"Stack.h"

void PrintfArry(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
//按升序来写，降序相反

//插入排序
//基本思想：
//直接插入排序是一种简单的插入排序法，其基本思想是：把待排序的记录按其关键码值的大小逐
//个插入到一个已经排好序的有序序列中，直到所有的记录插入完为止，得到一个新的有序序列 。
//实际中我们玩扑克牌时，就用了插入排序的思想

//时间复杂度O(N^2)
//什么情况下最坏？逆序 1+2+3+4+...+n-1 就是一个等差数列
//什么情况下最好？顺序排好 O(N)
void InsertSort(int* a, int n)
{
	//有[0,end]的数有序，将end+1位置的值插入到[0,end]中，使得[0,end + 1]有序
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];//保存end位置后面的数

		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;

			}
		}
		a[end + 1] = tmp;
	}
}
void TestInsertSort()
{
	int a[] = { 9,6,3,2,5,4,1,8,7,0 };
	InsertSort(a, sizeof(a) / sizeof(int));
	PrintfArry(a, sizeof(a) / sizeof(int));
}
//希尔排序   在直接插入排序的基础上优化
//1.先进行预排序，让数组接近有序   先将其分成间隔为gap的小组
//2.再进行直接插入排序
//时间复杂度：O(logN * N)或者O(log3N * N)
//平均时间复杂度：O(N^1.3)
void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		//gap = gap / 2;//时间复杂度为:logN
		gap = gap / 3 + 1;//时间复杂度为:log3N  以3为底N的对数
		//当gap > 1都是预排序   接近排序
		// 当gap == 1时为直接插入排序 有序
		
		// 当gap很大时，下面预排序的时间复杂度是O(N)
		// 当gap很小时，数组已经很接近有序了，这是差不多也是O(N)
		
		//把间隔gap的多组数据同时排
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];

			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}
void TestShellSort()
{
	int a[] = { 9,6,3,2,5,4,1,8,7,0 };
	ShellSort(a, sizeof(a) / sizeof(int));
	PrintfArry(a, sizeof(a) / sizeof(int));
}
//交换两个数
void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
//向下调整算法
void AdjustDown(int* a, int n, int root)
{
	//父节点和孩子节点都是数组的下标
	int parent = root;
	int child = (parent * 2) + 1;//默认为左孩子
	while (child < n)
	{
		//找出左右孩子中大的哪一个
		if (child + 1 < n && a[child + 1] > a[child])//还要满足访问右孩子时不能越界  
			//此处建的是小堆，要想建大堆，将a[child + 1] < a[child]改为 >
		{
			child += 1;
		}

		if (a[child] > a[parent])
			//此处建的是小堆，要想建大堆，将a[child] < a[parent]改为 >
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = (parent * 2) + 1;
		}
		else
		{
			break;
		}
	}
}
// 堆排序
// 整体的时间复杂度为：O(N*logN)
void HeapSort(int* a, int n)
{
	// 建堆
	// 建堆的时间复杂度是O(N)
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}

	//排升序，建大堆还是建小堆？建大堆
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}
void TestHeapSort()
{
	int a[] = { 9,6,3,2,5,4,1,8,7,0 };
	//int a[] = { 3,5,2,7,8,6,1,9,4,0 };
	HeapSort(a, sizeof(a) / sizeof(int));
	PrintfArry(a, sizeof(a) / sizeof(int));
}

// 直接选择排序
// 时间复杂度：O(N*N)
// 效率很差，就算是最好的情况也是O(N)
// N
// N-2
// N-4
void SelectSort(int* a, int n)
{
	//一次选两个数，一个最大，一个最小
	int begin = 0;
	int end = n - 1;
	while (begin < end)
	{
		int maxi = end;
		int mini = begin;
		for (int i = begin; i <= end; i++)
		{
			if (a[i] < a[mini])
			{
				mini = i;
			}
			if (a[i] > a[maxi])
			{
				maxi = i;
			}
		}
		Swap(&a[begin], &a[mini]);
		if (maxi == begin)
		{
			maxi = mini;
		}
		Swap(&a[end], &a[maxi]);
		begin++;
		end--;
	}
}
void TestSelectSort()
{
	int a[] = { 9,6,3,2,5,4,1,8,7,0 };
	//int a[] = { 3,5,2,7,8,6,1,9,4,0 };
	SelectSort(a, sizeof(a) / sizeof(int));
	PrintfArry(a, sizeof(a) / sizeof(int));
}
// 冒泡排序
// 时间复杂度：O(N*N)
// N - 1
// N - 2
// ...
// 最好的情况是有序的时候，时间复杂度：O(N)
// 冒泡排序和直接插入排序哪个好？ -> 直接插入排序好
void BubbleSort(int* a, int n)
{
	////也可以使用end的方式来控制趟数
	//	int end = n;
	//	while (end > 0)
	//	{
	//		for (int i = 1; i < end; i++)
	//		{
	//			if (a[i] < a[i - 1])
	//			{
	//				Swap(&a[i], &a[i - 1]);
	//			}
	//		}
	//		end--;
	//	}
	for (int j = 0; j < n; j++)
	{
		int exchange = 0;
		for (int i = 1; i < n - j; i++)
		{
			if (a[i] < a[i - 1])
			{
				Swap(&a[i], &a[i - 1]);
				exchange = 1;
			}
		}
		if (exchange == 0)
		{
			break;
		}
	}
}
void TestBubbleSort()
{
	int a[] = { 9,6,3,2,5,4,1,8,7,0 };
	//int a[] = { 3,5,2,7,8,6,1,9,4,0 };
	BubbleSort(a, sizeof(a) / sizeof(int));
	PrintfArry(a, sizeof(a) / sizeof(int));
}
// 三数取中法
int GetMidIndex(int* a, int left, int right)
{
	int mid = (left + right) >> 1;
	if (a[mid] > a[left])
	{
		if (a[right] > a[mid])
		{
			return mid;
		}
		else if (a[left] > a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
	else// a[mid] < a[left]
	{
		if (a[mid] > a[right])
		{
			return mid;
		}
		else if (a[right] > a[left])
		{
			return left;
		}
		else
		{
			return right;
		}
	}

}
// 挖坑法
int PartSort1(int* a, int left, int right)
{
	// 第一种方法：挖坑法
	// 不好理解可以采用
	// 1.画函数递归展开图
	// 2.根据测试用例画图加调试

	// 为了出现最坏的情况算法效率低，采用三数取中法
	int index = GetMidIndex(a, left, right);
	Swap(&a[index], &a[left]);

	int begin = left, end = right;
	int pivot = begin;
	int key = a[begin];

	while (begin < end)
	{
		// 坑在左边，从右边先开始动。找比key小的
		while (begin < end && a[end] >= key)// 如果不加前面的条件会出问题
		{
			--end;
		}
		a[pivot] = a[end];
		pivot = end;
		// 此时坑在右边，从左边开始动。找比key大的
		while (begin < end && a[begin] <= key)// 如果不加前面的条件会出问题
		{
			++begin;
		}
		a[pivot] = a[begin];
		pivot = begin;
	}
	pivot = begin;
	a[pivot] = key;
	return pivot;
}
// 左右指针法
int PartSort2(int* a, int left, int right)
{
	int index = GetMidIndex(a, left, right);
	Swap(&a[index], &a[left]);

	int begin = left, end = right;
	int keyi = begin;

	while (begin < end)
	{
		// 先从右边开始找小
		if (begin < end && a[end] >= a[keyi])
		{
			--end;
		}

		// 再从左边开始找大
		if (begin < end && a[begin] <= a[keyi])
		{
			begin++;
		}

		Swap(&a[begin], &a[end]);
	}
	Swap(&a[begin], &a[keyi]);

	// 返回相遇的地方
	return begin;
}
// 前后指针法
int PartSort3(int* a, int left, int right)
{
	int index = GetMidIndex(a, left, right);
	Swap(&a[index], &a[left]);

	int keyi = left;
	int prev = left, cur = left + 1;
	while (cur <= right)
	{
		// 优化法 
		// 避免出现prev与cur指向同一个值时交换
		if (a[cur] < a[keyi]
			&& ++prev != cur)
		{
			Swap(&a[cur], &a[prev]);
		}
		/*if (a[cur] < a[keyi])
		{
			prev++;
			Swap(&a[cur], &a[prev]);
		}*/
		++cur;
	}
	Swap(&a[prev], &a[keyi]);

	return prev;
}
// 快速排序
// 时间复杂度：O(N * logN)
// 快速排序在有序的情况下最坏，时间复杂度：O(N * N)
void QuickSort(int* a, int left, int right)
{
	// 单趟排序的时间复杂度：O(N)
	if (left >= right)
	{
		return;
	}
	
	int keyIndex = PartSort3(a, left, right);

	// [left,right]
	// [left,pivot-1] pivot [pivot+1,right]
	// 要使整个序列有序，我们采用 分治递归 ，使左子区间和右子区间都有序即可
	//QuickSort(a, left, pivot - 1);
	//QuickSort(a, pivot + 1, right);
	// 小区间优化
	if (keyIndex - 1 - left > 10)
	{
		QuickSort(a , left, keyIndex - 1);
	}
	else
	{
		// 当区间之间的数小于10的时候使用 直接插入排序 效率高点
		InsertSort(a + left, keyIndex - 1 - left + 1);
	}

	if (right - (keyIndex + 1) > 10)
	{
		QuickSort(a, keyIndex + 1, right);
	}
	else
	{
		// 当区间之间的数小于10的时候使用 直接插入排序 效率高点
		InsertSort(a + keyIndex + 1, right - (keyIndex + 1) + 1);
	}
}
// 递归的缺陷：栈帧深度太深，栈空间不够用，可能会导致栈溢出
// 非递归
// 递归改非递归：1、直接改循环(简单) 2、利用数据结构的栈来模拟递归过程(复杂一点)
void QuickSortNonR(int* a, int n)
{
	ST st;
	StackInit(&st);
	// 先入最右边的数据，因为栈的特点是后进先出
	StackPush(&st, n - 1);
	StackPush(&st, 0);
	while (!StackEmpty(&st))
	{
		int left = StackTop(&st);
		StackPop(&st);
		int right = StackTop(&st);
		StackPop(&st);

		int KeyIndex = PartSort1(a, left, right);
		// PartSort1取中间值，将区间分为两部分
		// [left,KeyIndex - 1] KeyIndex [KeyIndex + 1,right]
		if (KeyIndex + 1 < right)
		{
			StackPush(&st, right);
			StackPush(&st, KeyIndex + 1);
		}

		if (left < KeyIndex - 1)
		{
			StackPush(&st, KeyIndex - 1);
			StackPush(&st, left);
		}
	}

	StackDestory(&st);
}
void TestQuickSort()
{
	//int a[] = { 6,3,2,5,9,4,1,8,7,0 };
	//int a[] = { 6,1,2,7,9,3,4,5,10,8 };
	int a[] = {49,38,65,97,76,13,27,49};
	//QuickSort(a, 0, (sizeof(a) / sizeof(int)) - 1);
	QuickSortNonR(a, sizeof(a) / sizeof(int));
	PrintfArry(a, sizeof(a) / sizeof(int));
}
void _MergeSort(int* a, int left, int right, int* tmp)
{
	if (left >= right)
		return;
	int mid = (left + right) >> 1;
	// 采取分治思想
	// 只要[left,mid]  [mid+1,right]有序，就可以归并了
	_MergeSort(a, left, mid, tmp);
	_MergeSort(a, mid+1, right, tmp);
	// 归并
	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int index = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[index++] = a[begin1++];
		}
		else
		{
			tmp[index++] = a[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		tmp[index++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[index++] = a[begin2++];
	}
	// 拷贝回去
	for (int i = left; i <= right; i++)
	{
		a[i] = tmp[i];
	}
}
// 归并排序的非递归
// 可以使用队列实现
// 时间复杂度O(N*logN)
void MergeSortNonR(int* a, int n)
{
	int gap = 1;// 每组数据的个数
	// [i,i+gap-1] [i+gap,i+2*gap-1]
	int* tmp = (int*)malloc(sizeof(int) * n);
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2*gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			int index = i;

			// 归并过程中可能右半区间不存在
			if (begin2 >= n)
			{
				break;
			}
			// 归并过程中可能右半区间算多了，修正一下
			if (end2 >= n)
			{
				end2 = n - 1;
			}

			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] < a[begin2])
				{
					tmp[index++] = a[begin1++];
				}
				else
				{
					tmp[index++] = a[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				tmp[index++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[index++] = a[begin2++];
			}
			// 拷贝回去
			for (int j = 0; j <= end2; j++)
			{
				a[j] = tmp[j];
			}
		}
		gap *= 2;
	}
	free(tmp);
}

// 归并排序
void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);

	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}
void TestMergeSort()
{
	int a[] = { 10,6,7,1,3,9,4,2,8,2,4 };
	//int a[] = { 6,1,2,7,9,3,4,5,10,8 };
	//MergeSort(a, sizeof(a) / sizeof(int));
	MergeSortNonR(a, sizeof(a) / sizeof(int));
	PrintfArry(a, sizeof(a) / sizeof(int));
}

// 非比较排序
// 计数排序:思想很巧，但是有一定的使用局限性
// 时间复杂度：O(N + range),说明这适用于数据集中的整形数据排序
// 空间复杂度：O(range)
void CountSort(int* a, int n)
{
	int max = a[0];
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}

	int range = max - min + 1;
	int* CountArr = (int*)malloc(sizeof(int)*range);
	if (CountArr == NULL)
	{
		printf("malloc fail\n");
	}
	memset(CountArr, 0, sizeof(int)*range);

	// 统计次数
	for (int j = 0; j < n; j++)
	{
		CountArr[a[j] - min]++;
	}
	int j = 0;
	for (int i = 0; i < range; i++)
	{
		while (CountArr[i]--)
		{
			a[j++] = i + min;
		}
	}

	free(CountArr);
}
void TestCountSort()
{
	int a[] = { 10,6,7,1,3,9,4,2,8,2,4,0,10,0 };
	CountSort(a, sizeof(a) / sizeof(int));
	PrintfArry(a, sizeof(a) / sizeof(int));
}
int f(int n)
{
	return n > 1 ? f(n - 1) + n : 1;
}
// 测试排序的性能对比
void TestOP()
{
	srand(time(0));
	const int N = 100000;
	int* a1 = (int*)malloc(sizeof(int) * N);
	int* a2 = (int*)malloc(sizeof(int) * N);
	int* a3 = (int*)malloc(sizeof(int) * N);
	int* a4 = (int*)malloc(sizeof(int) * N);
	int* a5 = (int*)malloc(sizeof(int) * N);
	int* a6 = (int*)malloc(sizeof(int) * N);
	int* a7 = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];
		a7[i] = a1[i];

	}
	int begin1 = clock();
	InsertSort(a1, N);
	int end1 = clock();

	int begin2 = clock();
	ShellSort(a2, N);
	int end2 = clock();

	int begin3 = clock();
	SelectSort(a3, N);
	int end3 = clock();

	int begin4 = clock();
	HeapSort(a4, N);
	int end4 = clock();

	int begin5 = clock();
	//QuickSort(a5, 0, N - 1);
	QuickSort(a4, 0, N - 1);
	int end5 = clock();

	int begin6 = clock();
	//MergeSort(a6, N);
	int end6 = clock();

	int begin7 = clock();
	BubbleSort(a7, N);
	int end7 = clock();

	printf("InsertSort:%d\n", end1 - begin1);
	printf("ShellSort:%d\n", end2 - begin2);
	printf("SelectSort:%d\n", end3 - begin3);
	printf("HeapSort:%d\n", end4 - begin4);
	printf("QuickSort:%d\n", end5 - begin5);
	/*printf("MergeSort:%d\n", end6 - begin6);*/
	printf("BubbleSort:%d\n", end7 - begin7);

	free(a1);
	free(a2);
	free(a3);
	free(a4);
	free(a5);
	free(a6);
	free(a7);

}
int main()
{
	//TestOP();
	//TestInsertSort();
	//TestShellSort();
	//TestHeapSort();
	//TestSelectSort();
	//TestBubbleSort();
	//TestQuickSort();
	//TestMergeSort();
	TestCountSort();
	//printf("%d\n", f(10000));
	return 0;
}


