//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int removeDuplicates(vector<int>& nums) 
//{
//	int slow = 0;
//	int fast = slow + 1;
//	while (fast < nums.size())
//	{
//		if (nums[slow] == nums[fast])
//		{
//			nums.erase(find(nums.begin(), nums.end(), nums[slow]));
//			slow = 0;
//			fast = slow + 1;
//		}
//		else
//		{
//			slow++;
//			fast++;
//		}
//	}
//	return nums.size();
//	// 定义一个slow和一个fast，只要fast小于数组大小，如果相等的话，将slow指向的值删除，将slow，fast重置；若不相同，两个同时相加
//}
//
////int removeDuplicates(vector<int>& nums)
////{
////	int slow = 0;
////	int fast = slow + 1;
////	while (fast < nums.size())
////	{
////		if (nums[fast] == nums[slow])
////		{
////			fast++;
////		}
////		else
////		{
////			nums[slow + 1] = nums[fast];
////			slow++;
////			fast++;
////		}
////	}
////	return slow + 1;
////	// 定义一个slow和一个fast，只要fast小于数组大小，如果slow和fast指向的值相同，fast后移一步；若不相同，将fast指向的值拷贝到slow的下一个位置，fast和slow同时后移一步；最后
////}
//int main()
//{
//	vector<int> v1;
//	v1.push_back(0);
//	v1.push_back(0);
//	v1.push_back(1);
//	v1.push_back(1);
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(3);
//	v1.push_back(4);
//
//	int ret = removeDuplicates(v1);
//	cout << "ret = " << ret << endl;
//	return 0;
//}