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
//��������д�������෴

//��������
//����˼�룺
//ֱ�Ӳ���������һ�ּ򵥵Ĳ������򷨣������˼���ǣ��Ѵ�����ļ�¼����ؼ���ֵ�Ĵ�С��
//�����뵽һ���Ѿ��ź�������������У�ֱ�����еļ�¼������Ϊֹ���õ�һ���µ��������� ��
//ʵ�����������˿���ʱ�������˲��������˼��

//ʱ�临�Ӷ�O(N^2)
//ʲô������������ 1+2+3+4+...+n-1 ����һ���Ȳ�����
//ʲô�������ã�˳���ź� O(N)
void InsertSort(int* a, int n)
{
	//��[0,end]�������򣬽�end+1λ�õ�ֵ���뵽[0,end]�У�ʹ��[0,end + 1]����
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];//����endλ�ú������

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
//ϣ������   ��ֱ�Ӳ�������Ļ������Ż�
//1.�Ƚ���Ԥ����������ӽ�����   �Ƚ���ֳɼ��Ϊgap��С��
//2.�ٽ���ֱ�Ӳ�������
//ʱ�临�Ӷȣ�O(logN * N)����O(log3N * N)
//ƽ��ʱ�临�Ӷȣ�O(N^1.3)
void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		//gap = gap / 2;//ʱ�临�Ӷ�Ϊ:logN
		gap = gap / 3 + 1;//ʱ�临�Ӷ�Ϊ:log3N  ��3Ϊ��N�Ķ���
		//��gap > 1����Ԥ����   �ӽ�����
		// ��gap == 1ʱΪֱ�Ӳ������� ����
		
		// ��gap�ܴ�ʱ������Ԥ�����ʱ�临�Ӷ���O(N)
		// ��gap��Сʱ�������Ѿ��ܽӽ������ˣ����ǲ��Ҳ��O(N)
		
		//�Ѽ��gap�Ķ�������ͬʱ��
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
//����������
void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
//���µ����㷨
void AdjustDown(int* a, int n, int root)
{
	//���ڵ�ͺ��ӽڵ㶼��������±�
	int parent = root;
	int child = (parent * 2) + 1;//Ĭ��Ϊ����
	while (child < n)
	{
		//�ҳ����Һ����д����һ��
		if (child + 1 < n && a[child + 1] > a[child])//��Ҫ��������Һ���ʱ����Խ��  
			//�˴�������С�ѣ�Ҫ�뽨��ѣ���a[child + 1] < a[child]��Ϊ >
		{
			child += 1;
		}

		if (a[child] > a[parent])
			//�˴�������С�ѣ�Ҫ�뽨��ѣ���a[child] < a[parent]��Ϊ >
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
// ������
// �����ʱ�临�Ӷ�Ϊ��O(N*logN)
void HeapSort(int* a, int n)
{
	// ����
	// ���ѵ�ʱ�临�Ӷ���O(N)
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}

	//�����򣬽���ѻ��ǽ�С�ѣ������
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

// ֱ��ѡ������
// ʱ�临�Ӷȣ�O(N*N)
// Ч�ʺܲ��������õ����Ҳ��O(N)
// N
// N-2
// N-4
void SelectSort(int* a, int n)
{
	//һ��ѡ��������һ�����һ����С
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
// ð������
// ʱ�临�Ӷȣ�O(N*N)
// N - 1
// N - 2
// ...
// ��õ�����������ʱ��ʱ�临�Ӷȣ�O(N)
// ð�������ֱ�Ӳ��������ĸ��ã� -> ֱ�Ӳ��������
void BubbleSort(int* a, int n)
{
	////Ҳ����ʹ��end�ķ�ʽ����������
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
// ����ȡ�з�
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
// �ڿӷ�
int PartSort1(int* a, int left, int right)
{
	// ��һ�ַ������ڿӷ�
	// ���������Բ���
	// 1.�������ݹ�չ��ͼ
	// 2.���ݲ���������ͼ�ӵ���

	// Ϊ�˳����������㷨Ч�ʵͣ���������ȡ�з�
	int index = GetMidIndex(a, left, right);
	Swap(&a[index], &a[left]);

	int begin = left, end = right;
	int pivot = begin;
	int key = a[begin];

	while (begin < end)
	{
		// ������ߣ����ұ��ȿ�ʼ�����ұ�keyС��
		while (begin < end && a[end] >= key)// �������ǰ��������������
		{
			--end;
		}
		a[pivot] = a[end];
		pivot = end;
		// ��ʱ�����ұߣ�����߿�ʼ�����ұ�key���
		while (begin < end && a[begin] <= key)// �������ǰ��������������
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
// ����ָ�뷨
int PartSort2(int* a, int left, int right)
{
	int index = GetMidIndex(a, left, right);
	Swap(&a[index], &a[left]);

	int begin = left, end = right;
	int keyi = begin;

	while (begin < end)
	{
		// �ȴ��ұ߿�ʼ��С
		if (begin < end && a[end] >= a[keyi])
		{
			--end;
		}

		// �ٴ���߿�ʼ�Ҵ�
		if (begin < end && a[begin] <= a[keyi])
		{
			begin++;
		}

		Swap(&a[begin], &a[end]);
	}
	Swap(&a[begin], &a[keyi]);

	// ���������ĵط�
	return begin;
}
// ǰ��ָ�뷨
int PartSort3(int* a, int left, int right)
{
	int index = GetMidIndex(a, left, right);
	Swap(&a[index], &a[left]);

	int keyi = left;
	int prev = left, cur = left + 1;
	while (cur <= right)
	{
		// �Ż��� 
		// �������prev��curָ��ͬһ��ֵʱ����
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
// ��������
// ʱ�临�Ӷȣ�O(N * logN)
// �����������������������ʱ�临�Ӷȣ�O(N * N)
void QuickSort(int* a, int left, int right)
{
	// ���������ʱ�临�Ӷȣ�O(N)
	if (left >= right)
	{
		return;
	}
	
	int keyIndex = PartSort3(a, left, right);

	// [left,right]
	// [left,pivot-1] pivot [pivot+1,right]
	// Ҫʹ���������������ǲ��� ���εݹ� ��ʹ����������������䶼���򼴿�
	//QuickSort(a, left, pivot - 1);
	//QuickSort(a, pivot + 1, right);
	// С�����Ż�
	if (keyIndex - 1 - left > 10)
	{
		QuickSort(a , left, keyIndex - 1);
	}
	else
	{
		// ������֮�����С��10��ʱ��ʹ�� ֱ�Ӳ������� Ч�ʸߵ�
		InsertSort(a + left, keyIndex - 1 - left + 1);
	}

	if (right - (keyIndex + 1) > 10)
	{
		QuickSort(a, keyIndex + 1, right);
	}
	else
	{
		// ������֮�����С��10��ʱ��ʹ�� ֱ�Ӳ������� Ч�ʸߵ�
		InsertSort(a + keyIndex + 1, right - (keyIndex + 1) + 1);
	}
}
// �ݹ��ȱ�ݣ�ջ֡���̫�ջ�ռ䲻���ã����ܻᵼ��ջ���
// �ǵݹ�
// �ݹ�ķǵݹ飺1��ֱ�Ӹ�ѭ��(��) 2���������ݽṹ��ջ��ģ��ݹ����(����һ��)
void QuickSortNonR(int* a, int n)
{
	ST st;
	StackInit(&st);
	// �������ұߵ����ݣ���Ϊջ���ص��Ǻ���ȳ�
	StackPush(&st, n - 1);
	StackPush(&st, 0);
	while (!StackEmpty(&st))
	{
		int left = StackTop(&st);
		StackPop(&st);
		int right = StackTop(&st);
		StackPop(&st);

		int KeyIndex = PartSort1(a, left, right);
		// PartSort1ȡ�м�ֵ���������Ϊ������
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
	// ��ȡ����˼��
	// ֻҪ[left,mid]  [mid+1,right]���򣬾Ϳ��Թ鲢��
	_MergeSort(a, left, mid, tmp);
	_MergeSort(a, mid+1, right, tmp);
	// �鲢
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
	// ������ȥ
	for (int i = left; i <= right; i++)
	{
		a[i] = tmp[i];
	}
}
// �鲢����ķǵݹ�
// ����ʹ�ö���ʵ��
// ʱ�临�Ӷ�O(N*logN)
void MergeSortNonR(int* a, int n)
{
	int gap = 1;// ÿ�����ݵĸ���
	// [i,i+gap-1] [i+gap,i+2*gap-1]
	int* tmp = (int*)malloc(sizeof(int) * n);
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2*gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			int index = i;

			// �鲢�����п����Ұ����䲻����
			if (begin2 >= n)
			{
				break;
			}
			// �鲢�����п����Ұ���������ˣ�����һ��
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
			// ������ȥ
			for (int j = 0; j <= end2; j++)
			{
				a[j] = tmp[j];
			}
		}
		gap *= 2;
	}
	free(tmp);
}

// �鲢����
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

// �ǱȽ�����
// ��������:˼����ɣ�������һ����ʹ�þ�����
// ʱ�临�Ӷȣ�O(N + range),˵�������������ݼ��е�������������
// �ռ临�Ӷȣ�O(range)
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

	// ͳ�ƴ���
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
// ������������ܶԱ�
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


