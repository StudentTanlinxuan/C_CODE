/* 5.5.2 fill
* ���ã������������ָ����Ԫ��
* ����ԭ�ͣ�
* fill(iterator beg, iterator end, value);
* �����������ָ����Ԫ��
* beg	��ʼ������
* end   ����������
* value ����ֵ
*/



#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>

using namespace std;

void myPrint(int val)
{
	cout << val << " ";
}

void test1()
{
	vector<int> v;
	v.resize(10);
	// ����ָ����С��Ĭ��ֵΪ0
	//for_each(v.begin(), v.end(), myPrint);
	//cout << endl;

	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main()
{
	test1();
	return 0;
}
// �ܽ᣺����fill���Խ�����������Ԫ�����Ϊ ָ����ֵ