//// 3.1.7 string字符存取
//// string中单个字符存取方式有两种
//// char& operator[](int n);// 通过[]方式取字符
//// char& at(int n);// 通过at方式取字符
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void test1()
//{
//	string str = "hello";
//
//	//cout << "str = " << str << endl;
//
//	// 1. 通过[]方式获取单个字符   也就是通过下标的方式访问
//	for (int i = 0; i < str.size(); i++)// str.size()可以获取字符串长度
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//	// 2. 通过at方式获取单个字符
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//	// 修改单个字符
//	// 通过[]方式
//	str[0] = 'x';
//	// xello
//	cout << "str = " << str << endl;
//
//	// 通过at方式
//	str.at(1) = 'x';
//	// xxllo
//	cout << "str = " << str << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：string字符串中单个字符存取有两种方式，利用[]和at