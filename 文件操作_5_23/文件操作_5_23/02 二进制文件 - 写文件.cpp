//#include<iostream>
//#include<fstream>
//
//using namespace std;
//// 5.2 二进制文件
//// 以二进制的形式对文件进行操作
//// 打开方式要指定为ios::binary
//// 5.2.1 写二进制文件
//// 二进制写文件主要利用流对象调用成员函数write
//// 函数原型：ostream& write(consr char* buffer, int len);
//// 参数解释：字符指针buffer指向内存中的一段存储空间。len指的是读写的字节数
//
//class Person
//{
//public:
//	char m_Name[64] = { 0 };
//	int m_Age;
//};
//void test1()
//{
//	// 1. 包含头文件
//
//	// 2. 创建流对象
//	ofstream ofs("Person.txt", ios::out | ios::binary);
//
//	// 3. 打开文件
//	//ofs.open("Person.txt", ios::out | ios::binary);
//
//	// 4. 写文件
//	Person p = { "张三",18 };
//	ofs.write((const char*)&p, sizeof(Person));
//
//	// 5. 关闭文件
//	ofs.close();
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：文件输出流对象可以通过write函数，以二进制的方式写数据。