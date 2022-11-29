//#include<iostream>
//#include<vector>
//
//using namespace std;
////// 方法一 使用数组大小逐渐递减求出0~n的和 - 数组之和 = 缺失的数字
////int missingNumber(vector<int>& nums) 
////{
////    int sum1 = 0;
////    for (int i = nums.size(); i >= 0; i--)
////    {
////        sum1 += i;
////    }
////    int sum2 = 0;
////    for (int i = 0; i < nums.size(); i++)
////    {
////        sum2 += nums[i];
////    }
////    return sum1 - sum2;
////}
////// 方法二 使用位运算计算 按位异或
////int missingNumber(vector<int>& nums)
////{
////    int sum1 = 0;
////    for (int i = nums.size(); i > 0; i--)
////    {
////        sum1 ^= i;
////    }
////    for (int i = 0; i < nums.size(); i++)
////    {
////        sum1 ^= nums[i];
////    }
////    return sum1;
////}
////// 方法三 直接遍历
////int missingNumber(vector<int>& nums)
////{
////    for (int i = 0; i < nums.size(); i++)
////    {
////        if (nums[i] != i)
////        {
////            return i;
////        }
////    }
////    return nums.size();
////    // 不能下面这种原因是，会取到数组长度的位置，会出现访问数组下标越界情况，所有用上面那种
////    /*for (int i = 0; i <= nums.size(); i++)
////    {
////        if (nums[i] != i)
////        {
////            return i;
////        }
////    }*/
////}
//// 方法四 使用二分法的思想，如果nunms[mid]和mid的值相等，则让left = mid + 1；
//// 如果nums[mid] > mid，则让right = mid - 1;
//// 不会出现nums[mid] < mid的时候
//// 直到left > right时结束
//int missingNumber(vector<int>& nums)
//{
//    int left = 0;
//    int right = nums.size() - 1;
//    while (left <= right)
//    {
//        int mid = (right + left) / 2;
//        if (nums[mid] == mid)
//        {
//            left = mid + 1;
//        }
//        else // 出现else只能是nums[mid] > mid
//        {
//            // return mid; // 不可以这样写，因为进入到else，证明nums[mid] > mid的，
//            // 所以要找的缺失数字在左侧，则需要将right = mid - 1;
//            right = mid - 1;
//        }
//    }
//    return left;
//    /*int left = 0;
//    int right = nums.size() - 1;
//    while (left <= right)
//    {
//        int mid = (right + left) / 2;
//        if (nums[mid] == mid)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            right = mid - 1;
//        }
//    }
//    return left;*/
//}
//int main()
//{
//    vector<int> v1;
//    v1.push_back(1);
//    v1.push_back(2);
//    v1.push_back(3);
//    /*for (int i = 0; i < 8; i++)
//    {
//        v1.push_back(i);
//    }
//    v1.push_back(9);*/
//    cout << missingNumber(v1) << endl;
//	return 0;
//}