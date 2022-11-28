#include<iostream>
#include<vector>

using namespace std;
int search(vector<int>& nums, int target)
{
    int count = 0;
    // ∆’Õ® µœ÷
    /*for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            count++;
        }
    }*/
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right)
    {
        int mid = (right + left) / 2;
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
            if (nums[left] != target)
            {
                left++;
            }
            if (nums[right] != target)
            {
                right--;
            }
            if (nums[left] == target && nums[right] == target)
            {
                count = right - left + 1;
                break;
            }
        }
    }
    return count;
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

    int k = 8;
    cout << search(v, k) << endl;
	return 0;
}