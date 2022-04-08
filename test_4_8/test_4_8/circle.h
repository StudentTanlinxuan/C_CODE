#pragma once
#include<iostream>
#include"point.h"
using namespace std;
// 设计一个圆类
class Circle
{
public:
	// 设置半径
	void SetR(int r);
	// 获取半径
	int GetR();
	// 设置圆心
	void SetCentre(Point& centre);
	// 获取圆心
	Point GetCentre();
private:
	// 圆的半径
	int m_R;
	// 圆心坐标
	// 在类中可以让另一个类作为本类的成员
	Point m_Centre;
};