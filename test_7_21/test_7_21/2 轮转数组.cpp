#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void rotate(vector<int>& nums, int k) {
    // 会超出时间限制
    //while (k--)
    //{
    //    nums.insert(nums.begin(), nums.back());
    //    nums.pop_back();
    //}
    k = k % nums.size();
    reverse(nums.begin(), nums.begin() + nums.size() - k);
    reverse(nums.begin() + nums.size() - k, nums.end());
    reverse(nums.begin(), nums.end());
}

void myPrint(int val)
{
    cout << val << " ";
}

int main()
{
    vector<int> v;
    for (int i = 1; i < 8; i++)
    {
        v.push_back(i);
    }

    rotate(v, 3);

    for_each(v.begin(), v.end(), myPrint);
    cout << endl;
	return 0;
}