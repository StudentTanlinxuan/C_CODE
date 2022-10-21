#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>

using namespace std;

void test1()
{
	cout << "ÊäÈë¼¸¸ö×Ö·û" << endl;
	int input;
	cin >> input;
	char* parr = new char[input];
	for (int i = 0; i < input; i++)
	{
		cin >> *(parr + i);
	}
	ofstream ofs;
	ofs.open("A.txt", ios::out);
	for (int i = 0; i < input; i++)
	{
		ofs << *(parr + i);
	}
	ofs.close();
	ifstream ifs;
	ifs.open("A.txt", ios::in);
	string in;
	while (getline(ifs, in))
	{
		//cout << in << endl;
	}
	sort(in.begin(), in.end());
	//cout << in << endl;
	ifs.close();
	ofs.open("B.txt", ios::out);
	ofs << in << endl;
	ofs.close();
	ifs.open("B.txt", ios::in);
	while (getline(ifs, in))
	{
		cout << in << endl;
	}
}

int main()
{
	test1();
	return 0;
}