#include<iostream>
#include<vector>

using namespace std;
vector<int> searchRange(vector<int>& nums, int target) 
{
    vector<int> temp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            temp.push_back(i);
        }
    }
    if (temp.size() == 0) return { -1,-1 };
    else if (temp.size() == 1) return{ temp[0],temp[0] };
    else return{ temp[0],temp[temp.size() - 1] };
    /*vector<int> result;
    if (nums.size() == 0)
    {
        result.push_back(-1);
        result.push_back(-1);
        return result;
    }
    int left = 0;
    int right = nums.size() - 1;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            result.push_back(mid);
            nums[mid] = -1;
        }
    }
    if (result.size())
    {
        return result;
    }
    result.push_back(-1);
    result.push_back(-1);
    return result;*/
}

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(7);
    v.push_back(7);
    v.push_back(8);
    v.push_back(8);
    v.push_back(10);
    vector<int> ret = searchRange(v, 8);
	return 0;
}