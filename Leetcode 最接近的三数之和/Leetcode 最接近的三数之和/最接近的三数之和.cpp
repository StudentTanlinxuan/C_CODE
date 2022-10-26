#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    //int minv = 9999;
    int ans = nums[0] + nums[1] + nums[2];
    //vector<int> ret;
    for (int i = 0; i < nums.size(); i++)
    {
        int left = i + 1;
        int right = nums.size() - 1;
        while (right > left)
        {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum > target)
            {
                if (abs(sum - target) < abs(ans - target))
                    ans = sum;

                right--;
            }
            else if (sum < target)
            {
                if (abs(sum - target) < abs(ans - target))
                    ans = sum;
                left++;
            }
            else
            {
                //ret.push_back(sum);
                return target;
                left++;
                right--;
            }
        }
    }
    //for (int i = 0; i < ret.size(); i++)
    //{
    //    minv = min(minv, abs(ret[i] - target));
    //}
    //cout << minv << endl;
    //for (vector<int> ::iterator i = ret.begin(); i != ret.end(); i++)
    //{
    //    cout << *i << " ";
    //}
    //cout << endl;
    //return minv + target;
    return ans;
}

int main()
{
    vector<int> v;
    v.push_back(-1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(-4);
    int ret = threeSumClosest(v, 4);
    cout << ret << endl;
	return 0;
}