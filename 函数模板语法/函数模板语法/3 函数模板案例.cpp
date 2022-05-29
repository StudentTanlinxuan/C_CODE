// 1.2.3 ����ģ�尸��
// ����������
// ���ú���ģ��ģ��һ������ĺ��������ԶԲ�ͬ���������������������
// �������Ӵ�С�������㷨Ϊѡ������
// �ֱ���int���������char����������в���

#include<iostream>

using namespace std;

template<class T>// typename�����滻��class
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