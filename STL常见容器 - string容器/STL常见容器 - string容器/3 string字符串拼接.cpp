// 3.1.4 string字符串拼接
// 实现在字符串末尾拼接字符串
// 函数原型：
// string& operator+=(const char* str);// 重载+=操作符
// string& operator+=(const char c);// 重载+=操作符
// string& operator+=(const string& str);// 重载+=操作符
// string& append(const char* s);// 把字符串s连接到当前字符串结尾
// string& append(const char* s, int n);// 把字符串s的前n个字符连接到当前字符串结尾
// string& append(const string& s);// 同operator+=(const string& str)
// string& append(const string& s, int pos, int n);// 字符串s中从第pos个位置开始的n个字符连接到当前字符串结尾

#include<iostream>

using namespace std;
void test1()
{
	const char* str = "我";
	string str1;
	str1 += str;
	cout << "str1 = " << str1 << endl;

	const char str2 = 'w';
	str1 += str2;
	str1 += 'y';
	cout << "str1 = " << str1 << endl;

	string str3 = "NBA2K LOL";
	str1 += str3;
	cout << "str1 = " << str1 << endl;

	string str4;
	str4.append(str);
	cout << "str4 = " << str4 << endl;

	const char* str5 = "love ya";
	str4.append(str5, 4);
	cout << "str4 = " << str4 << endl;

	str4.append(str3);
	cout << "str4 = " << str4 << endl;

	str4.append(str3, 6, 4);// 参数2 从哪个位置开始截取，参数3 截取的字符个数
	cout << "str4 = " << str4 << endl;
}
int main()
{
	test1();
	return 0;
}
// 总结：字符串拼接的重载版本很多，初学阶段记住几个即可