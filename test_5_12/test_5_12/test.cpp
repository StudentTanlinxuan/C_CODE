#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;
// 4.4 ��Ԫ
// �ڳ����У���Щ˽������Ҳ�������������һЩ������������з��ʣ�����Ҫ�õ���Ԫ�ļ���
// ��Ԫ��Ŀ�ľ�����һ�����������������һ������˽�г�Ա
// ��Ԫ�Ĺؼ��֣�firend
// ��Ԫ������ʵ��
// ȫ�ֺ�������Ԫ
// ������Ԫ
// ��Ա��������Ԫ

//// 4.4.1 ȫ�ֺ�������Ԫ
//// ��������
//class Building
//{
//	// GoodGayȫ�ֺ�����Building�ĺ����ѣ����Է���Building���е�˽�г�Ա
//	friend void GoodGay(Building* building);
//public:
//	Building()
//	{
//		SittingRoom = "����";
//		BedRoom = "����";
//	}
//public:
//	string SittingRoom;// ����
//
//private:
//	string BedRoom;// ����
//};
//// ȫ�ֺ���
//void GoodGay(Building* building)
//{
//	cout << "�û���ȫ�ֺ��� ���ڷ���: " << building->SittingRoom << endl;
//
//	cout << "�û���ȫ�ֺ��� ���ڷ���: " << building->BedRoom << endl;
//
//}
//void test1()
//{
//	Building building;
//	GoodGay(&building);
//}
//int main()
//{
//	test1();
//	return 0;
//}

//// 4.4.2 ������Ԫ
//class Buliding;
//class GoodGay
//{
//public:
//	GoodGay();
//
//	void visit();// �ιۺ��� ����Building���е�����
//public:
//	Buliding* buliding;
//};
//
//class Buliding
//{
//	// GoodGay�Ǳ����һ�������ѣ����Է��ʱ����е�˽�г�Ա
//	friend class GoodGay;
//public:
//	Buliding();
//public:
//	string m_SittingRoom;
//
//private:
//	string m_BedRoom;
//};
//
//Buliding::Buliding()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//GoodGay::GoodGay()
//{
//	// ����һ�����������
//	buliding = new Buliding;
//}
//
//void GoodGay::visit()
//{
//	cout << "�û��������ڷ��ʣ�" << buliding->m_SittingRoom << endl;
//	cout << "�û��������ڷ��ʣ�" << buliding->m_BedRoom << endl;
//}
//
//void test1()
//{
//	GoodGay goodgay;
//	goodgay.visit();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//// 4.4.3 ��Ա��������Ԫ
//class Buliding;
//class GoodGay
//{
//public:
//	GoodGay();
//
//	void visit();// ��visit��Ա�������Է���Buliding���е�˽������
//	void visit2();// ��visit��Ա���������Է���Buliding���е�˽������
//public:
//	Buliding* buliding;
//};
//
//class Buliding
//{
//	// ���߱�������GoodGay������е�visit�����Ա�����Ǳ���ĺ����ѣ����Է��ʱ����˽�г�Ա
//	friend void GoodGay::visit();
//public:
//	Buliding();
//
//public:
//	string m_SittingRoom; // ����
//
//private:
//	string m_BedRoom; // ����
//};
//
//Buliding::Buliding()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//GoodGay::GoodGay()
//{
//	buliding = new Buliding;
//}
//
//void GoodGay::visit()
//{
//	cout << "visit ���ڷ��ʣ�" << buliding->m_SittingRoom << endl;
//	cout << "visit ���ڷ��ʣ�" << buliding->m_BedRoom << endl;
//}
//void GoodGay::visit2()
//{
//	cout << "visit2 ���ڷ��ʣ�" << buliding->m_SittingRoom << endl;
//	//cout << "visit2 ���ڷ��ʣ�" << buliding->m_BedRoom << endl;
//}
//void test1()
//{
//	GoodGay gg;
//	gg.visit();
//	gg.visit2();
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

// 4.5 ���������
// ��������أ����Ѿ��е���������½��ж��壬���丳����һ�ֹ��ܣ�����Ӧ��ͬ����������

// 4.5.1 �Ӻ����������
// ���ã�ʵ�������Զ����������ͽ����������

class Person
{
public:
	// 1.ʹ�ó�Ա��������+�����������
	/*Person operator+(Person& p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/

public:
	int m_A;
	int m_B;
};
// 2.ʹ��ȫ�ֺ�������+�����������
Person operator+(Person& p1, Person& p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}
// �������صİ汾
Person operator+(Person& p1, int num)
{
	Person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}
void test1()
{
	Person p1;
	Person p2;
	p1.m_A = 10;
	p1.m_B = 10;
	p2.m_A = 10;
	p2.m_B = 10;
	// ��Ա������+�Ž������صı��ʵ���
	//Person p3 = p1.operator+(p2);
	// ȫ�ֺ�����+�Ž������صı��ʵ���
	Person p3 = operator+(p1, p2);
	//Person p3 = p1 + p2;
	// ���������Ҳ���Է�����������
	Person p4 = p1 + 100;// �൱�� Person + int

	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;

	cout << "p4.m_A = " << p4.m_A << endl;
	cout << "p4.m_B = " << p4.m_B << endl;
}

int main()
{
	test1();
	return 0;
}

// �ܽ᣺1. ���ǲ��ܶ����õ��������͵ı��ʽ��������ǲ��ɷ����ı��
//       2. �����������������

// ���ܽ��������⣺1.ֻ�ܶ��Զ�����������ͽ������أ����ܶ��Ѿ��е��������͵��������������(���粻�ܶ�int,float,double�������������)
//					 2.���ܽ�д�� operator+����ڲ�ʵ������Person���