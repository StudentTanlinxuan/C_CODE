#include"circle.h"
// ���һ��Բ��
// ���ð뾶
// �ں���ǰ���Circle::��ʾ�˺�������Circle���г�Ա����
void Circle::SetR(int r)
{
	m_R = r;
}
// ��ȡ�뾶
int Circle::GetR()
{
	return m_R;
}
// ����Բ��
void Circle::SetCentre(Point& centre)
{
	m_Centre = centre;
}
// ��ȡԲ��
Point Circle::GetCentre()
{
	return m_Centre;
}
