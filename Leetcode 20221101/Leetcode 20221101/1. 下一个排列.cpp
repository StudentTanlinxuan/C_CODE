//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//void MyPrint(int val)
//{
//	cout << val << " ";
//}
//void nextPermutation(vector<int>& nums) 
//{
//	int right = nums.size() - 1;
//	int i = 0;
//	int sign = false;
//	// ���������ҵ�����С�����ڵ������±�
//	while (right)
//	{
//		if (nums[right - 1] < nums[right])
//		{
//			sign = true;
//			i = right - 1;
//			break;
//		}
//		else
//		{
//			right--;
//		}
//	}
//	// û�ҵ�
//	if (sign == false)
//	{
//		// �������� û�ҵ�����С�����ڵ���
//		// �򷵻���С���м����������������
//		sort(nums.begin(), nums.end());
//		return;
//	}
//	right = nums.size() - 1;
//	int j = 0;
//	// ���������ҵ���һ�����ڴ������ڵ������±�
//	while (right)
//	{
//		if (nums[right] > nums[i])
//		{
//			j = right;
//			break;
//		}
//		else
//		{
//			right--;
//		}
//	}
//	// ��i��j�±���ָ�������н���
//	int temp = nums[i];
//	nums[i] = nums[j];
//	nums[j] = temp;
//	for_each(nums.begin(), nums.end(), MyPrint);
//	cout << endl;
//	cout << "i = " << i << endl;
//	cout << "j = " << j << endl;
//
//	// ��i+1λ�������Ԫ�ؽ�����������
//	for (int left = i + 1; left < nums.size(); left++)
//	{
//		for (int m = i + 1; m < nums.size() - 1; m++)
//		{
//			if (nums[m] > nums[m + 1])
//			{
//				int temp = nums[m];
//				nums[m] = nums[m + 1];
//				nums[m + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	vector<int> v;
//	v.push_back(5);
//	v.push_back(4);
//	v.push_back(7);
//	v.push_back(5);
//	v.push_back(3);
//	v.push_back(2);
//
//	nextPermutation(v);
//	for_each(v.begin(), v.end(), MyPrint);
//	return 0;
//}