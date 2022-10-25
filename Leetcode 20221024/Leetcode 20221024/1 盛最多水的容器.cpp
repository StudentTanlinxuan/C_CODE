//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int maxArea(vector<int>& height) 
//{
//	int i = 0, j = height.size() - 1, res = 0;
//	while (i < j) {
//		if (height[i] < height[j])
//		{
//			res = max(res, (j - i) * height[i]);
//			i++;
//		}
//		else
//		{
//			res = max(res, (j - i) * height[j]);
//			j--;
//		}
//		//res = height[i] < height[j] ?
//		//	max(res, (j - i) * height[i++]) :
//		//	max(res, (j - i) * height[j--]);
//	}
//	return res;
//}
//int main()
//{
//	vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(8);
//	v1.push_back(6);
//	v1.push_back(2);
//	v1.push_back(5);
//	v1.push_back(4);
//	v1.push_back(8);
//	v1.push_back(3);
//	v1.push_back(7);
//	cout << maxArea(v1);
//	return 0;
//}