
#include<iostream>
using namespace std;
// const 的用法：技巧：看const右侧紧跟着的是指针还是常量, 
// 是指针就是常量指针，是常量就是指针常量

//// 水仙花数
//// 水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身 
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
//			cout << "是水仙花数,该数为:" << sum << endl;
//		}
//	}
//	return EXIT_SUCCESS;
//
//}
//
//// 敲桌子
//// 从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，
//// 或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 7
//			|| i % 7 == 0
//			|| (i / 10) % 10 == 7)
//		{
//			cout << "敲桌子 " ;
//		}
//		else
//		{
//			cout << i << " ";
//		}
//	}
//	return 0;
//}
//
//// 9*9乘法表
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
//// 五只小猪称体重
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
//	cout << "最重的小猪体重为:>" << max << endl;
//
//	return EXIT_SUCCESS;
//}
//
//// 数组元素逆置
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
//// 冒泡排序
//int main()
//{
//	int arr[10] = { 0,2,5,3,6,1,4,7,8,9 };
//	for (int i = 0; i < 10 - 1; i++)
//	{
//		for (int j = 0; j < 10 - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				// 两个数交换也可以进行三次异或运算，此方法的优点是不借助临时变量
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
 
// 结构体的访问及输出
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
		cout << "姓名:" << arr[i].name << " " << "年龄:" << arr[i].age << " " << "性别:" << arr[i].sex << " " << endl;

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
				// 两个数交换也可以进行三次异或运算，此方法的优点是不借助临时变量					arr[j] ^= arr[j + 1];
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
	// 结构体数组
	hero arr[5]
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	int size = sizeof(arr) / sizeof(arr[0]);
	SortHero(arr, size);
	PrintHero(arr, size);
	system("pause");
	return EXIT_SUCCESS;
}