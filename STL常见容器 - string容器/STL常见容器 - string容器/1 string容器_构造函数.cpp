//// 3.1.2 string容器_构造函数
//// 构造函数原型：
//// string();  // 相当于无参构造  创建一个空字符串
//// string(const char* s);  // 相当于有参构造  使用字符s对其初始化
//// string(const string& str);  // 相当于拷贝构造  使用一个string对象给另一个string对象初始化
//// string(int n, char c);  // 使用n个字符c初始化
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void test1()
//{
//	// 相当于无参构造
//	string s1;
//
//	// 相当于有参构造
//	const char* s = "hello worder";
//	string s2(s);
//	cout << "s2 = " << s2 << endl;
//
//	// 相当于拷贝构造
//	string s3(s2);
//	cout << "s3 = " << s3 << endl;
//
//	// 使用n个字符初始化
//	string s4(10, 's');
//	cout << "s4 = " << s4 << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：string的多种构造方式没有可比性，灵活使用即可