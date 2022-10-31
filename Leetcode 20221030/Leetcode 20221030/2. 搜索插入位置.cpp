//#include<iostream>
//#include<vector>
//
//using namespace std;
//int searchInsert(vector<int>& nums, int target) 
//{
//	int left = 0;
//	int right = nums.size() - 1;
//	while (left <= right) // 注意这里要用left <= right
//	{
//		int mid = (left + right) / 2;
//		if (nums[mid] > target)
//		{
//			right = mid - 1;
//		}
//		else if (nums[mid] < target)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return right + 1;
//}
//int main()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(3);
//	v.push_back(5);
//	v.push_back(6);
//
//	cout << searchInsert(v, 2) << endl;
//	return 0;
//}