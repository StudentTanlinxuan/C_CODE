
#include<iostream>
using namespace std;
// const ���÷������ɣ���const�Ҳ�����ŵ���ָ�뻹�ǳ���, 
// ��ָ����ǳ���ָ�룬�ǳ�������ָ�볣��

//// ˮ�ɻ���
//// ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵��������� 
//int main()
//{
//	int sum = 0;
//	int a[3] = { 0 };
//	for (int input = 100; input < 1000; input++)
//	{
//		int ret = input;
//		int i = 0;
//		/*int a = ret % 10;
//		ret /= 10;
//		int b = ret % 10;
//		ret /= 10;
//		int c = ret % 10;
//		ret /= 10;
//		sum = a * a * a + b * b * b + c * c * c;*/
//		do
//		{
//			a[i] = ret % 10;
//			ret /= 10;
//			i++;
//		} while (ret);
//		sum = a[0] * a[0] * a[0] + a[1] * a[1] * a[1] + a[2] * a[2] * a[2];
//		if (input == sum)
//		{
//			cout << "��ˮ�ɻ���,����Ϊ:" << sum << endl;
//		}
//	}
//	return EXIT_SUCCESS;
//
//}
//
//// ������
//// ��1��ʼ��������100�� ������ָ�λ����7����������ʮλ����7��
//// ���߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ�����
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 7
//			|| i % 7 == 0
//			|| (i / 10) % 10 == 7)
//		{
//			cout << "������ " ;
//		}
//		else
//		{
//			cout << i << " ";
//		}
//	}
//	return 0;
//}
//
//// 9*9�˷���
//int main()
//{
//	for (int row = 1; row <= 9; row++)
//	{
//		for (int col = 1; col <= row; col++)
//		{
//			//printf("%d*%d=%d ", row, col, col * row);
//			cout << col <<  "*" <<  row << "=" << col * row << " ";
//		}
//		//printf("\n");
//		//cout << "\n";
//		cout << endl;
//	}
//	return 0;
//}
//
//// ��ֻС�������
//int main()
//{
//	int a[5] = { 150,222,200,210,187 };
//	int max = a[0];
//	for (int i = 0; i < 5; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	}
//	cout << "���ص�С������Ϊ:>" << max << endl;
//
//	return EXIT_SUCCESS;
//}
//
//// ����Ԫ������
//int main()
//{
//	int arr1[10] = { 0 };
//
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> arr1[i];
//	}
//	//int size = sizeof(arr1) / sizeof(arr1[0]);
//
//	int arr2[10] = { 0 };
//	//int i = size - 1;
//	int i = 10 - 1 ;
//
//	for (int j = 0; j < 10; j++)
//	{
//		arr2[j] = arr1[i--];
//	}
//	
//	for (int j = 0; j < 10; j++)
//	{
//		cout << arr2[j] << " ";
//	}
//
//	return EXIT_SUCCESS;
//}
//
//// ð������
//int main()
//{
//	int arr[10] = { 0,2,5,3,6,1,4,7,8,9 };
//	for (int i = 0; i < 10 - 1; i++)
//	{
//		for (int j = 0; j < 10 - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				// ����������Ҳ���Խ�������������㣬�˷������ŵ��ǲ�������ʱ����
//				arr[j] ^= arr[j + 1];
//				arr[j + 1] ^= arr[j];
//				arr[j] ^= arr[j + 1];
//
//				/*int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;*/
//			}
//		}
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	system("pause");
//	return EXIT_SUCCESS;
//}
 
// �ṹ��ķ��ʼ����
typedef struct hero
{
	string name;
	int age;
	string sex;
}hero;

void PrintHero(hero arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "����:" << arr[i].name << " " << "����:" << arr[i].age << " " << "�Ա�:" << arr[i].sex << " " << endl;

	}
}

void SortHero(hero arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				// ����������Ҳ���Խ�������������㣬�˷������ŵ��ǲ�������ʱ����					arr[j] ^= arr[j + 1];
				arr[j + 1].age ^= arr[j].age;
				arr[j].age ^= arr[j + 1].age;
				arr[j + 1].age ^= arr[j].age;
				/*int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;*/
			}
		}
	}
}
int main()
{
	// �ṹ������
	hero arr[5]
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	int size = sizeof(arr) / sizeof(arr[0]);
	SortHero(arr, size);
	PrintHero(arr, size);
	system("pause");
	return EXIT_SUCCESS;
}