#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
    vector<int> sum;
    sum.resize(nums1.size() + nums2.size());
    int s1 = 0;
    int s2 = 0;
    int i = 0;
    while (s1 < nums1.size() && s2 < nums2.size())
    {
        if (nums1[s1] > nums2[s2])
        {
            sum[i++] = nums2[s2++];
        }
        else
        {
            sum[i++] = nums1[s1++];
        }
    }
    if (s1 >= nums1.size())
    {
        while (s2 < nums2.size())
        {
            sum[i++] = nums2[s2++];
        }
    }
    else
    {
        while (s1 < nums1.size())
        {
            sum[i++] = nums1[s1++];
        }
    }
    for (vector<int>::iterator i = sum.begin(); i != sum.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    //merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), sum.begin());
    // merge 合并两个有序容器
    if (sum.size() % 2 == 0)
    {
        return (double)(sum[((sum.size() + 1) / 2)] + sum[((sum.size() - 1) / 2)]) / 2;
    }
    else
    {
        return (double)sum[(sum.size() / 2)];
    }
}

int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    vector<int> v2;
    v2.push_back(3);
    v2.push_back(4);
    double ret = findMedianSortedArrays(v1, v2);
    cout << "中位数:" << ret << endl;
	return 0;
}