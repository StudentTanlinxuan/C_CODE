//#include<iostream>
//#include<vector>
//
//using namespace std;
////// ����һ ʹ�������С�𽥵ݼ����0~n�ĺ� - ����֮�� = ȱʧ������
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
////// ������ ʹ��λ������� ��λ���
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
////// ������ ֱ�ӱ���
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
////    // ������������ԭ���ǣ���ȡ�����鳤�ȵ�λ�ã�����ַ��������±�Խ���������������������
////    /*for (int i = 0; i <= nums.size(); i++)
////    {
////        if (nums[i] != i)
////        {
////            return i;
////        }
////    }*/
////}
//// ������ ʹ�ö��ַ���˼�룬���nunms[mid]��mid��ֵ��ȣ�����left = mid + 1��
//// ���nums[mid] > mid������right = mid - 1;
//// �������nums[mid] < mid��ʱ��
//// ֱ��left > rightʱ����
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
//        else // ����elseֻ����nums[mid] > mid
//        {
//            // return mid; // ����������д����Ϊ���뵽else��֤��nums[mid] > mid�ģ�
//            // ����Ҫ�ҵ�ȱʧ��������࣬����Ҫ��right = mid - 1;
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