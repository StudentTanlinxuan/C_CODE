#pragma once
#include<iostream>
using namespace std;
class Point
{
public:
	// ����x��
	void SetX(int x);
		// ��ȡx��
	int GetX();
		// ����y��
	void SetY(int y);
		// ��ȡy��
	int GetY();
private:
	// x��
	int m_X;
	// y��
	int m_Y;

};