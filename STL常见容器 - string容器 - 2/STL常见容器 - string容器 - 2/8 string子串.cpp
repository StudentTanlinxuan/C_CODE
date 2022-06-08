// 3.1.9 string 字串
// 作用：从字符串中获取想要的字串
// 函数原型：string substr(int pos = 0, int n = npos)const;// 返回由pos位置开始的n个字符组成的字符串

#include<iostream>
#include<string>

using namespace std;

void test1()
{
	string str = "abcdefg";
	string subStr = str.substr(1, 3);

	cout << "str = " << str << endl;
	cout << "subStr = " << subStr << endl;

}
// 实用操作
void test2()
{
	string email = "tanlinxuan@sina.com";

	// 从邮箱地址中获取 用户名信息

	// 找到@的位置
	int pos = email.find("@");// 10
	cout << pos << endl;

	// 从email中截取用户信息
	string usrName = email.substr(0, pos);// 参数理解：从哪个位置开始截取多少个并且返回截取到的字符串
	cout << usrName << endl;
}

int main()
{
	//test1();
	test2();
	return 0;
}
// 总结：灵活的运用求子串功能，可以在实际开发中获取到有效的信息