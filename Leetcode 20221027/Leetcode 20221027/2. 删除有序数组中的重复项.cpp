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
//	// ����һ��slow��һ��fast��ֻҪfastС�������С�������ȵĻ�����slowָ���ֵɾ������slow��fast���ã�������ͬ������ͬʱ���
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
////	// ����һ��slow��һ��fast��ֻҪfastС�������С�����slow��fastָ���ֵ��ͬ��fast����һ����������ͬ����fastָ���ֵ������slow����һ��λ�ã�fast��slowͬʱ����һ�������
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