// 2.5.3 vector����Ƕ������
// ����Ƕ������  �������Ϊ  ��ά����
#include<iostream>
#include<vector>
using namespace std;
void test1()
{
	// ����һ��������v
	vector<vector<int>> v;

	// ����С����v1,v2,v3,v4
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	// ��С�����в�������
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	// ��С�������뵽������
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	// ����
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		// (* it) ��һ��vector<int>���͵����� 
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
// �ܽ᣺(*it) �����;���vector< >��<>�ڵ�����