/* 5.6.3 set_difference
* ���ã����������ϵĲ
* ����ԭ�ͣ�
* set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
* ���������ϵĲ
* ע�⣺�������ϱ�������������
* beg1 ����1��ʼ������
* end1 ����1����������
* beg2 ����2��ʼ������
* end2 ����2����������
* dest Ŀ��������ʼ������
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Myprint(int val)
{
	cout << val << " ";
}

void test1()
{
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		//v2.push_back(i + 5);
	}

	// �������v2��v1�ĲΪ��
	//for (int i = 0; i < 5; i++)
	//{
	//	v2.push_back(i);
	//	//v2.push_back(i + 5);
	//} 

	vector<int> vTarget;
	// ��ǰ��Ŀ���������ٿռ�
	// ��������������������û�н�����ȡ���������д��size��ΪĿ���������ٵĿռ�
	vTarget.resize(max(v1.size(), v2.size()));

	cout << "v1��v2�ĲΪ��" << endl;
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, Myprint);
	cout << endl;

	cout << "v2��v1�ĲΪ��" << endl;
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, Myprint);
	cout << endl;
}

int main()
{
	test1();
	return 0;
}
/* �ܽ᣺
*		1. �����������ϱ�������������
*		2. Ŀ���������ٿռ���Ҫ������������ȡ����
*		3. set_difference����ֵ���ǲ�����һ��Ԫ�ص�λ��
*/