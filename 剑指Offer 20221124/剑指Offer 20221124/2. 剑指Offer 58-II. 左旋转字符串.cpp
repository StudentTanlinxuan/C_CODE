#include<iostream>
#include<string>

using namespace std;
string reverseLeftWords(string s, int n) 
{
	//string temp;
	//for (int i = 0; i < n; i++)
	//{
	//	temp += s[i];
	//}
	//s.erase(0, n);
	//s += temp;
	string temp = s.substr(0, n);
	s.erase(0, n);
	s += temp;
	return s;
}

int main()
{
	//string s1 = "abcdefg";
	string s1 = "lrloseumgh";

	int k = 6;
	string ret = reverseLeftWords(s1, k);
	cout << ret << endl;
	return 0;
}