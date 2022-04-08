#pragma once
#include<iostream>
using namespace std;
class Point
{
public:
	// 设置x轴
	void SetX(int x);
		// 获取x轴
	int GetX();
		// 设置y轴
	void SetY(int y);
		// 获取y轴
	int GetY();
private:
	// x轴
	int m_X;
	// y轴
	int m_Y;

};