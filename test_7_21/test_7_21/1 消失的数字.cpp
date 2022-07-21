//#include<iostream>
//#include<numeric>
//#include<vector>
//
//using namespace std;
//
//int test1(vector<int>& nums)
//{
//    int sumV = accumulate(nums.begin(), nums.end(), 0);
//
//    int size = nums.size() + 1;
//    int sum = 0;
//    // ÇóºÍ
//    while (size--)
//    {
//        sum += size;
//    }
//    int ret = sum - sumV;
//    return ret;
//}
//
//int main()
//{
//    vector<int> v;
//    v.push_back(0);
//    v.push_back(1);
//    v.push_back(3);
//
//	int ret = test1(v);
//    cout << "ret = " << ret << endl;
//	return 0;
//}