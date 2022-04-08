#include<iostream>
#include"circle.h"
#include"point.h"
using namespace std;
// shift + tab可以缩进
// 练习案例2 -- 点(point)和圆(circle)的关系
// 设计一个点类
//class Point
//{
//public:
//	// 设置x轴
//	void SetX(int x)
//	{
//		m_X = x;
//	}
//	// 获取x轴
//	int GetX()
//	{
//		return m_X;
//	}
//	// 设置y轴
//	void SetY(int y)
//	{
//		m_Y = y;
//	}
//	// 获取y轴
//	int GetY()
//	{
//		return m_Y;
//	}
//private:
//	// x轴
//	int m_X;
//	// y轴
//	int m_Y;
//
//};
//// 设计一个圆类
//class Circle
//{
//public:
//	// 设置半径
//	void SetR(int r)
//	{
//		m_R = r;
//	}
//	// 获取半径
//	int GetR()
//	{
//		return m_R;
//	}
//	// 设置圆心
//	void SetCentre(Point &centre)
//	{
//		m_Centre = centre;
//	}
//	// 获取圆心
//	Point GetCentre()
//	{
//		return m_Centre;
//	}
//private:
//	// 圆的半径
//	int m_R;
//	// 圆心坐标
//	// 在类中可以让另一个类作为本类的成员
//	Point m_Centre;
//};
// 比较点与圆的关系
void isInCircle(Circle &c, Point &p)
{
	int tmp = (c.GetCentre().GetX() - p.GetX()) * (c.GetCentre().GetX() - p.GetX()) 
		+ (c.GetCentre().GetY() - p.GetY()) * (c.GetCentre().GetY() - p.GetY());
	int R = c.GetR() * c.GetR();
	if (tmp == R)
	{
		cout << "点在圆上" << endl;
	}
	else if (tmp > R)
	{
		cout << "点在园外" << endl;
	}
	else
	{
		cout << "点在园内" << endl;
	}
}
int main()
{
	// 实例化一个圆
	Circle c;
	// 设置半径
	c.SetR(5);
	Point centre;
	centre.SetX(5);
	centre.SetY(0);
	// 设置圆心
	c.SetCentre(centre);

	// 实例化一个点
	Point p;
	p.SetX(5);
	p.SetY(5);

	// 判断圆与点的关系
	isInCircle(c, p);
	return 0;
}