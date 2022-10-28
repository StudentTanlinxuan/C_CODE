#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int search(vector<int>& nums, int target)
{
	/*for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == target)
		{
			return i;
		}
	}
	return -1;*/
	vector<int>::iterator pos = find(nums.begin(), nums.end(), target);
	if (pos == nums.end())
	{
		return -1;
	}
	int index;
	index = std::distance(nums.begin(), pos);
	// distance输出找到元素的下标
	return index;
}
int main()
{
	vector<int> v1;
	//v1.push_back(4);
	//v1.push_back(5);
	//v1.push_back(6);
	//v1.push_back(7);
	//v1.push_back(0);
	//v1.push_back(1);
	//v1.push_back(2);
	v1.push_back(1);
	cout << search(v1, 0) << endl;
	return 0;
}