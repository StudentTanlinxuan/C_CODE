///*3.9.5 ���Һ�ͳ��
//* ���ã���map�������в��������Լ�ͳ������
//* ����ԭ�ͣ�
//* find(key); // ����keyֵ�Ƿ���ڣ������ڣ��򷵻ظü��ĵ��������������ڣ��򷵻�map.end()
//* count(key); // ͳ��key��Ԫ�ظ���
//*/
//
//#include<iostream>
//#include<map>
//
//using namespace std;
//
//void test1()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(make_pair(3, 30));
//	//m.insert(make_pair(3, 40));
//	// ����
//	map<int, int>::iterator pos = m.find(3);
//	if (pos != m.end())
//	{
//		cout << "�ҵ�Ԫ�أ�" << "key = " << pos->first << " value = " << pos->second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//	// ͳ��
//	// map�������ܲ����ظ���key Ԫ�أ�countͳ�ƶ��ԣ����Ҫô��0��Ҫô��1
//	// multimap����countͳ�ƿ��ܴ���1
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//}
//
//void printMultimap(multimap<int, int>& m)
//{
//	for (multimap<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test2()
//{
//	multimap<int, int> m;
//	m.insert(make_pair(1, 10));
//	m.insert(make_pair(2, 20));
//	m.insert(make_pair(3, 30));
//	m.insert(make_pair(3, 20));
//
//	printMultimap(m);
//
//	//m.erase(3);
//	//printMultimap(m);
//
//	multimap<int, int>::iterator pos = m.find(3);
//	if (pos != m.end())
//	{
//		cout << "�ҵ�Ԫ�أ�" << "key = " << pos->first << " value = " << pos->second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//
//	int num = m.count(3);
//	cout << "num = " << num << endl;
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//// �ܽ᣺find() -- ���ص���һ������������������ڷ���end()������
////       count() -- ����map������˵���ֻ����0��1
//
//
//
//
//
//
//
//
////int main()
////{
////
////	int arr[5] = { 1,4,5,6,7 };
////
////	// ð������
////	/*for (int i = 0; i < 5 - 1; i++)
////	{
////		for (int j = 0; j < 5 - i - 1; j++)
////		{
////			if (arr[j] < arr[j + 1])
////			{
////				arr[j] ^= arr[j + 1];
////				arr[j + 1] ^= arr[j];
////				arr[j] ^= arr[j + 1];
////			}
////		}
////	}*/
////
////	// ѡ������
////	int max = 0;
////	for (int i = 0; i < 5; i++)
////	{
////		max = i;
////		for (int j = i; j < 5; j++)
////		{
////			if (arr[j] > arr[max])
////			{
////				arr[j] ^= arr[max];
////				arr[max] ^= arr[j];
////				arr[j] ^= arr[max];
////			}
////		}
////		//max++;
////	}
////
////	for (int i = 0; i < 5; i++)
////	{
////		cout << arr[i] << " ";
////	}
////	cout << endl;
////
////	return 0;
////}