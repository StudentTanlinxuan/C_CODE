#include<iostream>
#include"circle.h"
#include"point.h"
using namespace std;
// shift + tab��������
// ��ϰ����2 -- ��(point)��Բ(circle)�Ĺ�ϵ
// ���һ������
//class Point
//{
//public:
//	// ����x��
//	void SetX(int x)
//	{
//		m_X = x;
//	}
//	// ��ȡx��
//	int GetX()
//	{
//		return m_X;
//	}
//	// ����y��
//	void SetY(int y)
//	{
//		m_Y = y;
//	}
//	// ��ȡy��
//	int GetY()
//	{
//		return m_Y;
//	}
//private:
//	// x��
//	int m_X;
//	// y��
//	int m_Y;
//
//};
//// ���һ��Բ��
//class Circle
//{
//public:
//	// ���ð뾶
//	void SetR(int r)
//	{
//		m_R = r;
//	}
//	// ��ȡ�뾶
//	int GetR()
//	{
//		return m_R;
//	}
//	// ����Բ��
//	void SetCentre(Point &centre)
//	{
//		m_Centre = centre;
//	}
//	// ��ȡԲ��
//	Point GetCentre()
//	{
//		return m_Centre;
//	}
//private:
//	// Բ�İ뾶
//	int m_R;
//	// Բ������
//	// �����п�������һ������Ϊ����ĳ�Ա
//	Point m_Centre;
//};
// �Ƚϵ���Բ�Ĺ�ϵ
void isInCircle(Circle &c, Point &p)
{
	int tmp = (c.GetCentre().GetX() - p.GetX()) * (c.GetCentre().GetX() - p.GetX()) 
		+ (c.GetCentre().GetY() - p.GetY()) * (c.GetCentre().GetY() - p.GetY());
	int R = c.GetR() * c.GetR();
	if (tmp == R)
	{
		cout << "����Բ��" << endl;
	}
	else if (tmp > R)
	{
		cout << "����԰��" << endl;
	}
	else
	{
		cout << "����԰��" << endl;
	}
}
int main()
{
	// ʵ����һ��Բ
	Circle c;
	// ���ð뾶
	c.SetR(5);
	Point centre;
	centre.SetX(5);
	centre.SetY(0);
	// ����Բ��
	c.SetCentre(centre);

	// ʵ����һ����
	Point p;
	p.SetX(5);
	p.SetY(5);

	// �ж�Բ���Ĺ�ϵ
	isInCircle(c, p);
	return 0;
}