//#include<iostream>
//
//using namespace std;
//
//int lengthOfLongestSubstring(string s) {
//	int start = 0;
//	int end = 0;
//	int length = 0;
//	int result = 0;
//	while (end < s.size())
//	{
//		char temp = s[end];
//		for (int i = start; i < end; i++)
//		{
//			if (temp == s[i])
//			{
//				start = i + 1;
//				length = end - start;
//				break;
//			}
//		}
//		end++;
//		length++;
//		result = max(result, length);
//	}
//	return result;
//}
//
//int main()
//{
//	string s = "abcabcbb";
// 	int ret = lengthOfLongestSubstring(s);
//	cout << "ret = " << ret << endl;
//	return 0;
//}