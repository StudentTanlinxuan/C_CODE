// queue���ýӿ�
// ���ã������������ö���Ľӿ�
// ���캯����
// queue<int> que; // queue������ģ��ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
// queue(const queue& que); // �������캯��
// ��ֵ������
// queue& operator=(const queue& que); // ���صȺ������
// ���ݴ�ȡ��
// push(elem);// �����������Ԫ��
// pop(); // �Ӷ�ͷ�Ƴ�Ԫ��
// front(); // ���ص�һ��Ԫ�� 
// back(); // �������һ��Ԫ��
// ��С������
// empty(); // �ж϶����Ƿ�Ϊ��
// size(); // ���ض�����Ԫ�ظ���

#include<iostream>
#include<queue>

using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
public:
	string m_Name;
	int m_Age;
};
void test1()
{
	// ����һ������
	queue<Person> q;

	// ׼������
	Person p1("��ɮ", 30);
	Person p2("�����", 1000);
	Person p3("��˽�", 700);
	Person p4("ɳɮ", 400);

	// ���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	// �鿴������Ԫ�ش�С 
	cout << "���д�СΪ��" << q.size() << endl;

	// �鿴��ͷ�Ͷ�β��������
	while (!q.empty())
	{
		// �鿴��ͷ
		cout << "��ͷԪ��-----������" << q.front().m_Name << " ���䣺" << q.front().m_Age << endl;

		// �鿴��β
		cout << "��βԪ��-----������" << q.back().m_Name << " ���䣺" << q.back().m_Age << endl;

		// ����
		q.pop();
	}

	cout << "���д�СΪ��" << q.size() << endl;

}

int main()
{
	test1();
	return 0;
}
/*�ܽ᣺- ���   --- push
- ����   --- pop
- ���ض�ͷԪ��   --- front
- ���ض�βԪ��   --- back
- �ж϶��Ƿ�Ϊ��   --- empty
- ���ض��д�С   --- size
*/