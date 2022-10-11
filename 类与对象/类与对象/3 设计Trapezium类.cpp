//#include<iostream>
//
//using namespace std;
//
//// 设计Trapezium（梯形）类
//class Trapezium
//{
//private:
//	// 利用八个整型变量表示四个点的坐标值
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
//	// 初始化数据
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
//	// 读取坐标值
//	void GetPosition()
//	{
//		cout << "请依次输入左上左下右上右下四个点的坐标" << endl;
//		cin >> m_LeftUpX >> m_LeftUpY >> m_RightUpX >> m_RightUpY >>
//			m_LeftDownX >> m_LeftDownY >> m_RightDownX >> m_RightDownY;
//
//	}
//
//	// 计算面积
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