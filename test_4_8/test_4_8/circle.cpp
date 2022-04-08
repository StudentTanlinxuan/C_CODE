#include"circle.h"
// 设计一个圆类
// 设置半径
// 在函数前面加Circle::表示此函数属于Circle类中成员函数
void Circle::SetR(int r)
{
	m_R = r;
}
// 获取半径
int Circle::GetR()
{
	return m_R;
}
// 设置圆心
void Circle::SetCentre(Point& centre)
{
	m_Centre = centre;
}
// 获取圆心
Point Circle::GetCentre()
{
	return m_Centre;
}
