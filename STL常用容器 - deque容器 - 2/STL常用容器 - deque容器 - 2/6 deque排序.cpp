// 3.3.7 deque����
// ���ã������㷨ʵ�ֶ�deque����������������
// ����ԭ�ͣ�
// sort(iterator beg, iterator end);// ��beg��end������Ԫ�ؽ�������

#include<iostream>
#include<deque>
#include<algorithm>// ��׼�㷨ͷ�ļ�

using namespace std;

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test1()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);

	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);

	printDeque(d1);

	// ���� sortĬ����������Ǵ�С���� ����
	// ����֧��������ʵĵ�����������������������sort�㷨�������������
	// vector����Ҳ����ʹ��sort��������������ݽ�������
	sort(d1.begin(), d1.end());
	cout << "�����" << endl;
	printDeque(d1);
}

int main()
{
	test1();
	return 0;
}
// �ܽ᣺sort�㷨�ǳ�ʵ�ã�ʹ����Ҫ����ͷ�ļ�algorithm����
// sort(iterator beg, iterator end);  �������������ĳ�Ա����  ����λ�ö�����Ҫ�ṩ������