#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;
// ���ֶ��峣���ķ���
// 1. #define ����ĺ곣��
// 2. const���εı��� 
//#define Day 7
//int main()
//{
//	// ��Ļ�����һ��hello world
//	//cout << "hello world" << endl;
//
//	// ������� �������� ������ = ������ʼֵ
//	int a = 10;
//	cout << "a = " << a << endl;
//
//	// Day = 8; // �����������޸�
//	cout << "һ���ܹ���" << Day << "��" << endl;
//
//	const int month = 12; // month �·�
//	// momth = 14; // �����������޸�
//	cout << "һ���ܹ���" << month << "��" << endl;
//
//	// system("pause");  // system ϵͳ pause ��ͣ
//
//	return 0;
//}

//#define MIN(x,y) (x)<(y)?(x):(y)
//// #define ����Ķ�������Ԥ����ʱֻ���򵥵��滻
//int main()
//{
//	//int a = 0;
//	//// �Ӽ�����������
//	//// ������cin
//	//cout << "������a��ֵ" << endl;
//	//cin >> a;
//	//cout << "��������a = " << a << endl;
//
//	int i, j, k;
//	i = 10, j = 15;
//	k = 10 * MIN(i, j); // 10 * (10)<(15)?(10):(15) = 15  
//	cout << k << endl;
//	return 0;
//}

//// �����Ƚϴ�С
//int main()
//{
//	int pig1 = 0, pig2 = 0, pig3 = 0;
//	cout << "������������ͷС�������:>" << endl;
//	cin >> pig1;
//	cin >> pig2;
//	cin >> pig3;
//	int max = 0, min = 0;
//	if (pig1 > pig2)
//	{
//		max = pig1;
//		min = pig2;
//	}
//	else
//	{
//		max = pig2;
//		min = pig1;
//	}
//	if (pig3 >= max)
//	{
//		max = pig3;
//		if (pig1 > pig2)
//		{
//			min = pig2;
//		}
//		else
//		{
//			min = pig1;
//		}
//	}
//	if (pig3 <= min)
//	{
//		min = pig3;
//		if (pig1 > pig2)
//		{
//			max = pig1;
//		}
//		else
//		{
//			max = pig2;
//		}
//	}
//	cout << "���ص�С��Ϊ:>" << max << endl;
//	cout << "�����С��Ϊ:>" << min << endl;
//
//	//system("pause");
//	return EXIT_SUCCESS;// 0 -- EXIT_SUCCESS
//}

// ��������Ϸ
int main()
{
	// ϵͳ�������һ������rand()����ɣ�����rand()���ص�ֵ�ɳ�Ϊ���ӵĳ�ʼֵ����
	// ÿ�����г���ʱ����ʼֵ����һ���ģ����Ե���ÿ��������ɵ�ֵ������ͬ��
	// Ϊ�˽��������⣬ÿ�γ����µ�����ֵ��
	// ����srand()���ṩ����ֵ������ǰʱ����Ϊsrand()�Ĳ��� 
	srand((unsigned int)time(NULL));
	// ������a,b��������a%b��ֵ��Զ����0 -- b-1֮��
	//cout << rand()%100 + 1 << endl;
	int key = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		cout << "��������²������:>" << endl;
		cin >> guess;
		if (guess > key)
		{
			cout << "�´���" << endl;
		}
		else if (guess < key)
		{
			cout << "��С��" << endl;
		}
		else
		{
			cout << "�¶��ˣ�������Ϊ:" << guess << endl;
			break;
		}
	}
 	system("pause");
	return 0;
}