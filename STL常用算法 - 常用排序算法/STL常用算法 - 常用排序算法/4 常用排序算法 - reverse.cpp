/* 5.3.4 reverse
* ���ã��������е�Ԫ�ؽ��з�ת
* ����ԭ�ͣ�
* reverse(iterator beg, iterator end);
* ��תָ����Χ��Ԫ��
* beg  ��ʼ������
* end  ����������
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
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(50);
	v.push_back(30);

	cout << "��תǰ��" << endl;
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;

	cout << "��ת��" << endl;
	reverse(v.begin(), v.end());
	for_each(v.begin(), v.end(), Myprint);
	cout << endl;
}

int main()
{
	test1();
	return 0;
}

// �ܽ᣺reverse��ת�����е�Ԫ��