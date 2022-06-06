// 2.5.3 vector容器嵌套容器
// 容器嵌套容器  可以理解为  二维数组
#include<iostream>
#include<vector>
using namespace std;
void test1()
{
	// 创建一个大容器v
	vector<vector<int>> v;

	// 创建小容器v1,v2,v3,v4
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	// 往小容器中插入数据
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	// 将小容器插入到大容器
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	// 遍历
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		// (* it) 是一个vector<int>类型的容器 
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << *vit << " ";
		}
		cout << endl;
	}
}

void test2()
{
	int arr1[4][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7} };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			//cout << arr1[i][j] << " ";
			cout << *(*(arr1 + i)) + j << " ";
		}
		cout << endl;
	}
}
int main()
{
	//test1();
	test2();
	return 0;
}
// 总结：(*it) 的类型就是vector< >中<>内的类型