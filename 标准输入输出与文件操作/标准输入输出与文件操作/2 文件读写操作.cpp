//#include<iostream>
//#include<fstream>
//using namespace std;
//
//void test1()
//{
//	// 写文件
//	// 1. 先包含头文件#include<fstream>
//	// 2. 创建对象
//	ofstream ofs;
//	ofs.open("A.txt", ios::out);
//	if (!ofs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//	}
//	ofs << "1    ";
//	ofs << "AB" << endl;
//	ofs << "CD" << endl;
//	ofs << "EF" << endl;
//	ofs << "UV" << endl;
//	ofs << "XY" << endl;
//	ofs.close();
//
//	ifstream ifs;
//	ifs.open("A.txt", ios::in);
//	//string buf;
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//	char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}
//	ifs.close();
//}
//int main()
//{
//	 test1();
//	return 0;
//}