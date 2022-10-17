#include<iostream>

using namespace std;

double Pl = 3.14;
// point 基类
class Point
{
public:
	int x, y; //点的x和y坐标 
public: 
	//Point(int = 0, int = 0); // 构造函数 
//	  void SetPoint(int, int); // 设置坐标 
//	  int GetX() { return x; } // 取x坐标 
//	  int GetY() { return y; } // 取y坐标 
//	  void Print(); //输出点的坐标
	Point()
	{

	}
	Point(int a, int b) 
	{
		SetPoint(a, b); 
	}
	void SetPoint(int a, int b) 
	{ 
		x = a; 
		y = b; 
	}
	void Print()
	{
		cout << "[" << x << ", " << y << "]";
	}
};
// circle 派生类
class Circle :public Point
{
public:
	double m_Radius; // radius 半径
public: 
	Circle(int x, int y, double r)
	{
		Point(x, y);
		SetRadius(r);
	}
	void SetRadius(double r)
	{
		m_Radius = r;
	}
	double GetRadius()
	{
		return m_Radius;
	}
	double Area()
	{
		return Pl * m_Radius * m_Radius;
	}
	void Print()
	{
		Point::Print();
		cout << "Radius = " << m_Radius << endl;
	}
};

int main()
{
	Point p(30,50);
	//p.SetPoint(30, 50);
	p.Print();
	Circle c(120, 80, 10);
	c.Print();
	cout << "The area of circle c " << c.Area() << endl;
	return 0;
}