#include<iostream>
#include<fstream>

using namespace std;
// 5.2.2 读文件
// 二进制读文件主要利用流成员调用成员函数read
// 函数原型：istream& read(char* buffer, int len);
// 参数解释：字符buffer指向内存中的一段存储空间。len是读写的字节数。

class Person
{
public:
	char m_Name[64] = { 0 };
	int m_Age;
};
void test1()
{
	// 1. 包含头文件

	// 2. 创建流对象
	ifstream ifs;

	// 3. 打开文件  并判断打开是否成功
	ifs.open("Person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
	}
	// 4. 读文件
	Person p;
	ifs.read((char*)&p, sizeof(p));
	cout << "p的姓名为：" << p.m_Name << " p的年龄为：" << p.m_Age << endl;

	// 5. 关闭文件
	ifs.close();
}
int main()
{
	test1();
	return 0;
}
// 总结：文件输入流对象可以通过read函数，以二进制方式读数据