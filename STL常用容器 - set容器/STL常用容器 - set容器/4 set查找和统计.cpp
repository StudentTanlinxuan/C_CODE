/*
* 3.8.5 set���Һ�ͳ��
* ���ã���set�������в��������Լ�ͳ������
* ����ԭ�ͣ�
* find(key); // ���������Ƿ���key�������ڷ��ظý���Ԫ�ص��������������ڣ�����set.end()
* count(key); // ͳ��key��Ԫ�ظ���
*/

#include<iostream>
#include<set>

using namespace std;

// ����
void test1()
{
	set<int> s1;

	// ��������
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);

	set<int>::iterator pos = s1.find(300);
	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}
}

// ͳ��
void test2()
{
	set<int> s1;

	// ��������
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);

	// ͳ��30�ĸ���
	int num = s1.count(3900);
	// ����set�������� ͳ�ƽ��Ҫô��1 Ҫô��0
	cout << "num = " << num << endl;
}

int main()
{
	//test1();
	test2();
	return 0;
}
// �ܽ᣺find(); -- ����(���ص��ǵ�����)
//		 count(); -- ͳ��(����set��˵�����Ϊ0��1)