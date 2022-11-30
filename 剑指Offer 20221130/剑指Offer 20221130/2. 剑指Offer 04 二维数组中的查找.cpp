//#include<iostream>
//#include<vector>
//
//using namespace std;
//int GetMid(int left, int right)
//{
//	return (left + right) / 2;
//}
//// 方法一 对每行进行二分查找
//bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) 
//{
//	int row = matrix.size();
//	if (row == 0)
//	{
//		return false;
//	}
//	int col = matrix[0].size();
//
//	// 对每行进行二分查找
//	for (int i = 0; i < row; i++)
//	{
//		int left = 0;
//		int right = col - 1;
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (matrix[i][mid] < target)
//			{
//				left = mid + 1;
//			}
//			else if (matrix[i][mid] > target)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				return true;
//			}
//		}
//	}
//	/*int leftcol = 0;
//	int rightcol = col - 1;
//	int leftrow = 0;
//	int rightrow = row - 1;
//	int midcol = 0;
//	int midrow = 0;
//	int greatermidcolprev = 0;
//	int greatermidrowprev = 0;
//	int lessmidcolprev = 0;
//	int lessmidrowprev = 0;
//	while (leftcol <= rightcol && leftrow <= rightrow)
//	{
//		midcol = GetMid(leftcol, rightcol);
//		midrow = GetMid(leftrow, rightrow);
//
//		if (matrix[midrow][midcol] < target)
//		{
//			leftcol = midcol + 1;
//			leftrow = midrow + 1;
//			greatermidcolprev = midcol;
//			greatermidrowprev = midrow;
//		}
//		else if (matrix[midrow][midcol] > target)
//		{
//			rightcol = midcol - 1;
//			rightrow = midrow - 1;
//			lessmidcolprev = midcol;
//			lessmidrowprev = midrow;
//		}
//		else
//		{
//			return true;
//		}
//	}*/
//	
//	return false;
//}
////// 方法二 
/////*思路：从右上角开始走，利用这个顺序关系可以在O(m + n)的复杂度下解决这个题：
////如果当前位置元素比target小，则row++
////如果当前位置元素比target大，则col--
////如果相等，返回true
////如果越界了还没找到，说明不存在，返回false*/
////bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) 
////{
////	int m = matrix.size();
////	if (m == 0)
////	{
////		return false;
////	}
////	int n = matrix[0].size();
////	int row = 0, col = n - 1;
////	while (row < m && col >= 0) {
////		if (matrix[row][col] > target) {
////			col--;
////		}
////		else if (matrix[row][col] < target) {
////			row++;
////		}
////		else {
////			return true;
////		}
////	}
////	return false;
////}
//int main()
//{
//	vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(1);
//	//v1.push_back(7);
//	//v1.push_back(11);
//	//v1.push_back(15);
//
//	vector<int> v2;
//	v2.push_back(2);
//	v2.push_back(5);
//	v2.push_back(8);
//	v2.push_back(12);
//	v2.push_back(19);
//
//	vector<int> v3;
//	v3.push_back(3);
//	v3.push_back(6);
//	v3.push_back(9);
//	v3.push_back(16);
//	v3.push_back(22);
//
//	vector<int> v4;
//	v4.push_back(10);
//	v4.push_back(13);
//	v4.push_back(14);
//	v4.push_back(17);
//	v4.push_back(24);
//
//	vector<int> v5;
//	v5.push_back(18);
//	v5.push_back(21);
//	v5.push_back(23);
//	v5.push_back(26);
//	v5.push_back(30);
//
//	//vector<int> v6;
//	//v6.push_back(18);
//	//v6.push_back(21);
//	//v6.push_back(23);
//	//v6.push_back(26);
//	//v6.push_back(30);
//
//	vector<vector<int>> pv;
//	pv.push_back(v1);
//	//pv.push_back(v2);
//	//pv.push_back(v3);
//	//pv.push_back(v4);
//	//pv.push_back(v5);
//	// pv.push_back(v6);
//
//
//	cout << findNumberIn2DArray(pv,0) << endl;
//	return 0;
//}