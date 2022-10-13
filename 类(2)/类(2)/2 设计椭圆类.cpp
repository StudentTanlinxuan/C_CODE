//#include<iostream>
//
//using namespace std;
//
//// 设计椭圆类
//double Pl = 3.14;
//class Ellipse // 椭圆
//{
//private:
//	// 圆心坐标
//	int m_X;
//	int m_Y;
//	// 长半轴
//	double m_Long_Axis;
//	// 短半轴
//	double m_Minor_Axis;
//
//public:
//	Ellipse(int x, int y, double long_axis, double minor_axis)
//	{
//		m_X = x;
//		m_Y = y;
//		m_Long_Axis = long_axis;
//		m_Minor_Axis = minor_axis;
//	}
//
//	// 计算面积
//	double Area()
//	{
//		return Pl * this->m_Long_Axis * this->m_Minor_Axis;
//	}
//};
//
//int main()
//{
//	Ellipse e1(1,1,1,2);
//	cout << "面积为：" << e1.Area() << endl;
//	return 0;
//}