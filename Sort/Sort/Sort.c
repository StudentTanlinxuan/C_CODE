#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PrintfArry(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
////��������д�������෴
//��������
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
void HeapSort(int* a, int n)
{
	//����
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
// ������������ܶԱ�
void TestOP()
{
	srand(time(0));
	const int N = 1000000;
	int* a1 = (int*)malloc(sizeof(int) * N);
	int* a2 = (int*)malloc(sizeof(int) * N);
	int* a3 = (int*)malloc(sizeof(int) * N);
	int* a4 = (int*)malloc(sizeof(int) * N);
	int* a5 = (int*)malloc(sizeof(int) * N);
	int* a6 = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];
	}
	int begin1 = clock();
	InsertSort(a1, N);
	int end1 = clock();
	int begin2 = clock();
	ShellSort(a2, N);
	int end2 = clock();
	int begin3 = clock();
	//SelectSort(a3, N);
	int end3 = clock();
	int begin4 = clock();
	//HeapSort(a4, N);
	int end4 = clock();
	int begin5 = clock();
	//QuickSort(a5, 0, N - 1);
	int end5 = clock();
	int begin6 = clock();
	//MergeSort(a6, N);
	int end6 = clock();
	printf("InsertSort:%d\n", end1 - begin1);
	printf("ShellSort:%d\n", end2 - begin2);
	/*printf("SelectSort:%d\n", end3 - begin3);
	printf("HeapSort:%d\n", end4 - begin4);
	printf("QuickSort:%d\n", end5 - begin5);
	printf("MergeSort:%d\n", end6 - begin6);*/
	free(a1);
	free(a2);
	free(a3);
	free(a4);
	free(a5);
	free(a6);
}
int main()
{
	//TestInsertSort
	//TestShellSort();
	//TestOP();
	TestHeapSort();
	return 0;
}
//���ؾ�ҵ��
//1. ��������
//1.1����˼�룺
//ֱ�Ӳ���������һ�ּ򵥵Ĳ������򷨣������˼���ǣ��Ѵ�����ļ�¼����ؼ���ֵ�Ĵ�С��
//�����뵽һ���Ѿ��ź�������������У�ֱ�����еļ�¼������Ϊֹ���õ�һ���µ��������� ��
//ʵ�����������˿���ʱ�������˲��������˼��