//// 3.1.6 string字符串比较
//// 作用：比较两个字符串
//// 比较方式：字符串比较是按字符ASCII码进行比较
//// = 返回0       > 返回1        < 返回-1
//// 函数原型：
//// int compare(const string& s)const;// 与字符串s进行比较
//// int compare(const char* s)const;// 与字符串s进行比较
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void test1()
//{
//	string str1 = "hello";
//	string str2 = "xello";// 比较方式是通过ASCII码值逐个进行比较
//
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1等于str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1大于str2" << endl;
//	}
//	else
//	{
//		cout << "str1小于str2" << endl;
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：字符串对比主要用于比较两个字符串是否相等，判断谁大谁小的意义并不是很大