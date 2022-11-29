#include<iostream>
#include<vector>

using namespace std;
bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) 
{
	int col = matrix.size();
	int row = matrix[0].size();

	int vcol = 0;
	int vrow = 0;

	vcol = col / 2;
	row = row / 2;
	if (matrix[row][col] < target)
	{

	}
	return true;
}
int main()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(4);
	v1.push_back(7);
	v1.push_back(11);
	v1.push_back(15);

	vector<int> v2;
	v2.push_back(2);
	v2.push_back(5);
	v2.push_back(8);
	v2.push_back(12);
	v2.push_back(19);

	vector<int> v3;
	v3.push_back(3);
	v3.push_back(6);
	v3.push_back(9);
	v3.push_back(16);
	v1.push_back(22);

	vector<int> v4;
	v4.push_back(10);
	v4.push_back(13);
	v4.push_back(14);
	v4.push_back(17);
	v4.push_back(24);

	vector<int> v5;
	v5.push_back(18);
	v5.push_back(21);
	v5.push_back(23);
	v5.push_back(26);
	v5.push_back(30);

	vector<int> v6;
	v6.push_back(18);
	v6.push_back(21);
	v6.push_back(23);
	v6.push_back(26);
	v6.push_back(30);

	vector<vector<int>> pv;
	pv.push_back(v1);
	pv.push_back(v2);
	pv.push_back(v3);
	pv.push_back(v4);
	pv.push_back(v5);

	cout << findNumberIn2DArray(pv, 5) << endl;
	return 0;
}