/*5.1.2 transform
* ���ã�������������һ��������
* ����ԭ�ͣ�
* transform(iterator beg1, iterator end1, iterator beg2, _func);
* beg1 Դ������ʼ������
* end1 Դ��������������
* beg2 Ŀ��������ʼ������
* _func ������������
*/


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Transform
{
public:
	int operator()(int v)
	{
		return v + 100;
	}
};

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test1()
{
	vector<int> v;// Դ����

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int> vTarget;// Ŀ������
	vTarget.resize(v.size()); // Ŀ������ ��Ҫ��ǰ���ٿռ�
	transform(v.begin(), v.end(), vTarget.begin(), Transform());

	for_each(vTarget.begin(), vTarget.end(), MyPrint());
	cout << endl;
}

int main()
{
	test1();
	return 0;
}
// �ܽ᣺���˵�Ŀ����������Ҫ��ǰ���ٿռ䣬�����޷���������