//#include<iostream>
//#include<string>
//using namespace std;
//
//double Pl = 3.14;
//// point 基类
//class Point
//{
//public:
//	int m_X, m_Y; //点的x和y坐标 
//public: 
//	//Point(int = 0, int = 0); // 构造函数 
////	  void SetPoint(int, int); // 设置坐标 
////	  int GetX() { return x; } // 取x坐标 
////	  int GetY() { return y; } // 取y坐标 
////	  void Print(); //输出点的坐标
//	Point(int a, int b) 
//	{
//		SetPoint(a, b); 
//	}
//	void SetPoint(int a, int b) 
//	{ 
//		m_X = a; 
//		m_Y = b; 
//	}
//	void Print()
//	{
//		cout << "[" << m_X << ", " << m_Y << "]" << endl;
//	}
//};
//// circle 派生类
//class Circle :public Point
//{
//public:
//	double m_Radius; // radius 半径
//public: 
//	Circle(int x, int y, double r):Point(x, y)// 必须在子类中指定调用父类中的有参构造，不然会出现父类中成员在子类中使用出现随机值
//	{
//		Point(x, y);
//		SetRadius(r);
//	}
//	void SetRadius(double r)
//	{
//		m_Radius = r;
//	}
//	double GetRadius()
//	{
//		return m_Radius;
//	}
//	double Area()
//	{
//		return Pl * m_Radius * m_Radius;
//	}
//	void Print()
//	{
//		Point::Print();
//		cout << "Radius = " << m_Radius << endl;
//	}
//};
//
//int main()
//{
//	Point p(30,50);
//	cout << "Point p ";
//	p.Print();
//	Circle c(120, 80, 10);
//	cout << "Circle c Center = ";
//	c.Print();
//	cout << "The centre of circle c";
//	c.Point::Print();
//	cout << "The area of circle c " << c.Area() << endl;
//	return 0;
//}
//// 必须在子类中指定调用父类中的有参构造，不然会出现父类中成员在子类中使用出现随机值