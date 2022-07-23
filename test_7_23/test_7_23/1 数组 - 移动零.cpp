#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Equal0
{
public:
	bool operator()(int v)
	{
		return v == 0;
	}
};

//void moveZeroes(vector<int>& nums) {
//	int sum = count(nums.begin(), nums.end(), 0);
//
//	while (sum--)	
//	{
//		vector<int>:: iterator pos = find(nums.begin(), nums.end(), 0);
//		cout << *pos << endl;
//		if (pos == nums.end())
//		{
//			break;
//		}
//		nums.erase(pos);
//		nums.push_back(0);
//	}
//}

void moveZeroes(vector<int>& nums)
{
	int n = nums.size(), left = 0, right = 0;
	while (right < n) 
	{
		if (nums[right]) 
		{
			swap(nums[left], nums[right]);
			left++;
		}
		right++;
	}
}
// 采用双指针方法
// 左指针和右指针都指向起始位置
// 当右指针指向的值大于零，将左右指针指向的值交换，左指针向后移动，右指针向后移动
// 当右指针指向的值等于零，只将右指针向后移动

void myPrint(int val)
{
	cout << val << " ";
}

int main()
{
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(0);
	v.push_back(3);
	v.push_back(12);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	moveZeroes(v);
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
	return 0;
}