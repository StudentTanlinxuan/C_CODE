//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//
//void test1()
//{
//	cout << "输入几个实数" << endl;
//	int input;
//	cin >> input;
//	int* parr = new int[input];
//	for (int i = 0; i < input; i++)
//	{
//		cin >> *(parr + i);
//	}
//	ofstream ofs;
//	ofs.open("out.txt", ios::out);
//	for (int i = 0; i < input; i++)
//	{
//		ofs << *(parr + i) << endl;
//	}
//	ofs.close();
//	ifstream ifs;
//	ifs.open("out.txt", ios::binary | ios::in);
//	//string in;
//	//while (getline(ifs, in))
//	//{
//	//	cout << in << endl;
//	//}
//	//char c;
//	//int sum = 0;
//	//while ((c = ifs.get()) != EOF)
//	//{
//	//	cout << c;
//	//	cout << (int)c << " ";
//	//	sum += c;
//	//}
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//	int sum = 0;
//	int x = 0;
//	while (ifs >> x)
//	{
//		sum += x;
//	}
//	cout << "sum = " << sum << endl;
//	int avg = sum / input;
//	cout << "avg = " << avg << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}