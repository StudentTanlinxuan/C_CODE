//// 3.1.3 string赋值操作
//// 赋值的函数原型：
//// string& operator=(const char* s);// 将char*类型的字符串赋值给当前的字符串
//// string& operator=(const string& s);// 将字符串s赋值给当前字符串
//// string& operator=(const char c);// 将字符c赋值给当前字符串
//// string& assign(const char* s);// 将char*类型的字符串赋值给当前的字符串
//// string& assign(const char* s, int n);// 将char*类型的字符串的前n个字符赋值给当前字符串
//// string& assign(const string& s);// 将字符串s赋值给当前字符串
//// string& assign(int n, char c);// 将n个字符c赋值给当前字符串
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void test1()
//{
//	string str1;
//	str1 = "hello world";
//	cout << "str1 = " << str1 << endl;
//
//	string str2;
//	str2 = str1;
//	cout << "str2 = " << str2 << endl;
//
//	string str3;
//	str3 = 'd';
//	cout << "str3 = " << str3 << endl;
//
//	string str4;
//	str4.assign("hello C++");
//	cout << "str4 = " << str4 << endl;
//
//	string str5;
//	str5.assign("what", 3);
//	cout << "str5 = " << str5 << endl;
//
//	string str6;
//	str6.assign(str5);
//	cout << "str6 = " << str6 << endl;
//
//	string str7;
//	str7.assign(10,'r');
//	cout << "str7 = " << str7 << endl;
//
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：string赋值方式很多，operator这种方式是比较实用的