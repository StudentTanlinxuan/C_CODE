#pragma once
#include<iostream>
#include"point.h"
using namespace std;
// ���һ��Բ��
class Circle
{
public:
	// ���ð뾶
	void SetR(int r);
	// ��ȡ�뾶
	int GetR();
	// ����Բ��
	void SetCentre(Point& centre);
	// ��ȡԲ��
	Point GetCentre();
private:
	// Բ�İ뾶
	int m_R;
	// Բ������
	// �����п�������һ������Ϊ����ĳ�Ա
	Point m_Centre;
};