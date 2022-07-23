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
// ����˫ָ�뷽��
// ��ָ�����ָ�붼ָ����ʼλ��
// ����ָ��ָ���ֵ�����㣬������ָ��ָ���ֵ��������ָ������ƶ�����ָ������ƶ�
// ����ָ��ָ���ֵ�����㣬ֻ����ָ������ƶ�

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