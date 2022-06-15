// 3.7.4 list��С����
// ���ã���list�����Ĵ�С���в���
// ����ԭ�ͣ�
// size(); // ����������Ԫ�صĸ���
// empty(); // �ж������Ƿ�Ϊ��
// resize(num); // ����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
//				//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
// resize(num, elem); // ����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
//                     //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����

#include<iostream>
#include<list>


using namespace std;

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test1()
{
	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	// �ж������Ƿ�Ϊ��
	if (L1.empty())
	{
		cout << "L1Ϊ��" << endl;
	}
	else
	{
		cout << "L1��Ϊ��" << endl;
		cout << "L1�Ĵ�СΪ��" << L1.size() << endl;
	}

	// ����ָ����С
	L1.resize(10,100);
	printList(L1);
}

int main()
{
	test1();
	return 0;
}
// �ܽ᣺empty();�ж������Ƿ�Ϊ��
// size();����Ԫ�ظ���
// resize();����ָ����С
// 