//// 3.1.5 string查找和替换
//// 查找：查找指定字符串是否存在
//// 替换：在指定位置替换字符串
//// 函数原型：
//// int find(const string& str, int pos = 0)const;// 查找str第一次出现的位置，从pos开始查找
//// int find(const char* s, int pos = 0)const;// 查找s第一次出现的位置，从pos开始查找
//// int find(const char* s, int pos, int n)const;// 从pos的位置开始查找s的前n个字符第一次出现的位置
//// int find(const char c, int pos = 0)const;// 查找字符c第一次出现的位置，从pos开始查找
//// int rfind(const string& str, int pos = npos)const;// 查找str最后一次出现的位置，从pos开始查找
//// int rfind(const char* s, int pos = 0)const;// 查找s最后一次出现的位置，从pos开始查找
//// int rfind(const char* s, int pos, int n)const;// 从pos位置开始查找s的前n个字符最后一次出现的位置
//// int rfind(const char c, int pos = 0)const;// 查找字符c最后一次出现的位置，从pos开始查找
//// string& replace(int pos, int n, const string& str);// 替换从pos位置开始n个字符为字符串str
//// string& replace(int pos, int n, const char* s);// 替换pos位置开始n个字符为字符串s
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//// 查找
//void test1()
//{
//	// find
//	string str1 = "abcdefcd";
//	int pos = str1.find("cd");// 2  因为认为第一个位置为0
//	//int pos = str1.find("cf");// -1 如果在该字符串中找不到字串则返回-1
//	if (pos == -1)
//	{
//		cout << "未找到字符串" << endl;
//	}
//	else
//	{
//		cout << "找到了字符串，pos = " << pos << endl;
//	}
//	// rfind
//	pos = str1.rfind("cf");
//	// rfind和find区别
//	// find从从左往右查   rfind从右往左查  但是都是从左往右来计算位置
//	cout << "pos = " << pos << endl;
//}
//// 替换
//void test2()
//{
//	string str = "abcdefg";
//	// 从1号位置起 3个字符 替换成"1111"
//	str.replace(1, 3, "1111");
//	cout << "str = " << str << endl;
//}
//int main()
//{
//	test1();
//	//test2();
//	return 0;
//}
//// 总结：1. rfind是从右往左查  find是从左往右查   但是位置都是从左往右算
////       2. find和rfind找到字符串后返回查找的第一个字符的位置，没有找到返回-1
////       3. replace再替换时，要指定从哪个位置起，多少个字符，替换成什么样的字符串 