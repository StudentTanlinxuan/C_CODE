#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
// Ч��̫��
//int findRepeatNumber(vector<int>& nums) 
//{
//	int left = 0;
//	for (left = 0; left < nums.size(); left++)
//	{
//		int right = nums.size() - 1;
//		while (right > left)
//		{
//			if (nums[left] == nums[right])
//			{
//				return nums[left];
//			}
//			right--;
//		}
//	}
//}
// Ч��̫��
//int findRepeatNumber(vector<int>& nums)
//{
//	vector<int> temp = nums;
//	for (int key = 0; key < nums.size(); key++)
//	{
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (i == key)
//			{
//				
//				continue;
//			}
//			if (nums[key] == temp[i])
//			{
//				return nums[key];
//			}
//		}
//	}
//}
//int Bin_Find(vector<int>& temp, int key)
//{
//	int left = 0;
//	int right = temp.size() - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (key > temp[mid])
//		{
//			left = mid + 1;
//		}
//		else if (key < temp[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return key;
//		}
//	}
//	return -1;
//}
//int findRepeatNumber(vector<int>& nums)
//{
//	vector<int> temp = nums;
//	sort(temp.begin(), temp.end());
//	for (int i = 0; i < nums.size(); i++)
//	{
//		temp.erase(find(temp.begin(), temp.end(), nums[i]));
//		int ret = Bin_Find(temp, nums[i]);
//		if (ret == -1)
//		{
//			
//			continue;
//		}
//		else
//		{
//			return ret;
//		}
//	}
//}
// ԭ�ؽ�����
int findRepeatNumber(vector<int>& nums)
{
	int i = 0;
	while (i < nums.size()) {
		// �жϵ�ǰ��λ�е�ֵ�ǲ��Ǻ���ȷ��λֵ���
		// ��ȷ��λ����һһ����Ӧ��
		if (i == nums[i]) {
			i++;
			continue;
		}
		// ����ȷ����ǰ�ǲ���Ӧ��
		// Ȼ���жϵ�ǰ��λ��ֵ�Ƿ�͵�ǰ��λ��ֵ����Ӧ�Ŀ�λ��ֵ�Ƿ���ȣ��������֤�������ظ���ֵ
		// ������Ƚ��佻��
		if (nums[nums[i]] == nums[i]) {
			return nums[i];
		}
		swap(nums[i], nums[nums[i]]);
	}
	return -1;
}
int main()
{
	vector<int> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(11);
	v.push_back(6);

	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	v.push_back(10);
	v.push_back(11);
	v.push_back(12);
	v.push_back(13);
	v.push_back(14);
	v.push_back(15);



	cout << findRepeatNumber(v) << endl;
	return 0;
}