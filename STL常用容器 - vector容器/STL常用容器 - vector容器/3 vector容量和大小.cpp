// 3.2.4 vector�����ʹ�С
// ���ã���vector���������ʹ�С���в���
// ����ԭ�ͣ�empty();// �ж������Ƿ�Ϊ��
// capacity();// ����������
// size();// ����������Ԫ�صĸ���
// resize(int num);// ����ָ�������ĳ���num,�������䳤������Ĭ��ֵ�����λ��
//                 // ��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
// resize(int num, elem);// ����ָ����������num���������䳤������elemֵ�����λ��
//                       // ��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��  
#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test1()
{
	// ����һ��vector����v
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	// ��ӡ���v
	printVector(v1);

	// empty()�ж������Ƿ�Ϊ��
	if (v1.empty())
	{
		cout << "v1Ϊ��" << endl;
	}
	else
	{
		cout << "v1��Ϊ��" << endl;
		cout << "v1������Ϊ��" << v1.capacity() << endl;
		cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
	}

	// ����ָ����С
	v1.resize(15,100);// �����������ذ汾��ָ��Ĭ�����ֵ��Ҳ���ǲ���2
	printVector(v1);// �������ָ���ı�ԭ���ˣ�Ĭ����0������µ�λ��

	v1.resize(5);
	printVector(v1);// �������ָ���ı�ԭ�����ˣ������Ĳ��ֻᱻɾ����
}

int main()
{
	test1();
	return 0;
}
// �ܽ᣺�ж������Ƿ�Ϊ�� empty()
//       ������������ capacity()
//		 ����������С size()
//		 ����ָ����С resize(int num)���ذ汾resize(int num, elem)
// 