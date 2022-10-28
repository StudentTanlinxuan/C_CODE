//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int strStr(string haystack, string needle) 
//{
//	int fast = 0;
//	int start = 0;
//	while (fast < haystack.size())
//	{
//		if (haystack[fast] == needle[start])
//		{
//			fast++;
//			start++;
//		}
//		else
//		{
//			fast++;
//			if (start > 0)
//			{
//				fast = fast - start;
//			}
//			start = 0;
//		}
//		if (start == needle.size())
//		{
//			return fast - needle.size();
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	string haystack = "mississipi";
//	string needle = "issip";
//	int ret = strStr(haystack, needle);
//	cout << "ret = " << ret << endl;
//	return 0;
//}