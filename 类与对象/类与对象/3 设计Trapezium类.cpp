//#include<iostream>
//
//using namespace std;
//
//// ���Trapezium�����Σ���
//class Trapezium
//{
//private:
//	// ���ð˸����ͱ�����ʾ�ĸ��������ֵ
//	int m_LeftUpX;
//	int m_LeftUpY;
//	int m_RightUpX;
//	int m_RightUpY;
//	int m_LeftDownX;
//	int m_LeftDownY;
//	int m_RightDownX;
//	int m_RightDownY;
//
//public:
//	// ��ʼ������
//	void Initial()
//	{
//		m_LeftUpX = 0;
//		m_LeftUpY = 0; 
//		m_LeftDownX = 0;
//		m_LeftDownY = 0;
//		m_RightUpX = 0;
//		m_RightUpY = 0;
//		m_RightDownX = 0;
//		m_RightDownY = 0;
//	}
//
//	// ��ȡ����ֵ
//	void GetPosition()
//	{
//		cout << "���������������������������ĸ��������" << endl;
//		cin >> m_LeftUpX >> m_LeftUpY >> m_RightUpX >> m_RightUpY >>
//			m_LeftDownX >> m_LeftDownY >> m_RightDownX >> m_RightDownY;
//
//	}
//
//	// �������
//	int Area()
//	{
//		return ((this->m_RightUpX - this->m_LeftUpX) + 
//			(this->m_RightDownX - this->m_LeftDownX)) * 
//			(this->m_LeftUpY - this->m_LeftDownY) * 1/2;
//	}
//};
//
//int main()
//{
//	Trapezium t1;
//	t1.Initial();
//	t1.GetPosition();
//	cout << t1.Area() << endl;
//	return 0;
//}