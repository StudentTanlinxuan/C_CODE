//// 3.1.8 string插入删除
//// 作用：对string字符串进行插入和删除字符操作
//// 函数原型：
//// string& insert(int pos, const char* s);// 插入字符串
//// string& insert(int pos, const string& s);// 插入字符串
//// string& insert(int pos, int n, char c);// 在指定的位置插入n个字符c
//// string& erase(int pos, int n = npos);// 删除从pos位置开始的n个字符
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void test1()
//{
//	string str1 = "hello";
//	string str2 = "world";
//	const char* str3 = "C++";
//
//	// 插入
//	str1.insert(5,str3);
//	cout << "str1 = " << str1 << endl;
//
//	str1.insert(5, 3, 'C');
//	cout << "str1 = " << str1 << endl;
//
//	// 删除
//	str1.erase(5, 3);
//	cout << "str1 = " << str1 << endl;
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：插入和删除的下标都是从0开始的