//#include<iostream>
//
//using namespace std;
//
//double Pl = 3.14159;
//
//// 基类 形状类
//class Shape
//{
//public:
//	virtual void PrintName() = 0;
//	virtual void PrintArea() = 0;
//	virtual double GetArea() = 0;
//};
//// 圆
//class Circle :public Shape
//{
//public:
//	double m_Radius; // 半径
//public:
//	Circle(double radius)
//	{
//		m_Radius = radius;
//	}
//	void PrintName()
//	{
//		cout << "圆：" << "半径：" << m_Radius << ",";
//	}
//	void PrintArea()
//	{
//		cout << "面积：" << Pl * m_Radius * m_Radius << endl;
//	}
//	double GetArea()
//	{
//		return Pl * m_Radius * m_Radius;
//	}
//};
//// 正方形
//class Square :public Shape
//{
//public:
//	double m_Length; // 边长
//public:
//	Square(double length)
//	{
//		m_Length = length;
//	}
//	void PrintName()
//	{
//		cout << "正方形：" << "边长：" << m_Length << ",";
//	}
//	void PrintArea()
//	{
//		cout << "面积：" << m_Length * m_Length << endl;
//	}
//	double GetArea()
//	{
//		return m_Length * m_Length;
//	}
//};
//// 长方形
//class Rectangle :public Shape
//{
//public:
//	double m_Long; // 长
//	double m_Wide; // 宽
//public:
//	Rectangle(double long1, double wide)
//	{
//		m_Wide = wide;
//		m_Long = long1;
//	}
//	//void SetWide(double wide)
//	//{
//	//	m_Wide = wide;
//	//}
//	void PrintName()
//	{
//		cout << "长方形：" << "长：" << m_Long << ",";
//		cout << "宽：" << m_Wide << ",";
//	}
//	void PrintArea()
//	{
//		cout << "面积：" << m_Long * m_Wide << endl;
//	}
//	double GetArea()
//	{
//		return m_Long * m_Wide;
//	}
//};
//// 梯形
//class Trapezoid :public Shape
//{
//public:
//	double m_UpBottom; // 上底
//	double m_DownBottom; // 下底
//	double m_High; // 高
//public:
//	Trapezoid(double upbottom, double downbottom, double high)
//	{
//		m_DownBottom = downbottom;
//		m_High = high;
//		m_UpBottom = upbottom;
//	}
//	//void SetDownBottom(double downbottom)
//	//{
//	//	m_DownBottom = downbottom;
//	//}
//	//void SetHigh(double high)
//	//{
//	//	m_High = high;
//	//}
//	void PrintName()
//	{
//		cout << "梯形：" << "上底：" << m_UpBottom << ",";
//		cout << "下底：" << m_DownBottom << ",";
//		cout << "高：" << m_High << ",";
//	}
//	void PrintArea()
//	{
//		cout << "面积：" << (m_UpBottom + m_DownBottom) * m_High * 1 / 2 << endl;
//	}
//	double GetArea()
//	{
//		return (m_UpBottom + m_DownBottom) * m_High * 1 / 2;
//	}
//};
//// 三角形
//class Triangle :public Shape
//{
//public:
//	double m_Bottom; // 底
//	double m_High; // 高
//public:
//	Triangle(double bottom, double high)
//	{
//		m_High = high;
//		m_Bottom = bottom;
//	}
//	//void SetHigh(double high)
//	//{
//	//	m_High = high;
//	//}
//	void PrintName()
//	{
//		cout << "三角形：" << "底：" << m_Bottom << ",";
//		cout << "高：" << m_High << ",";
//	}
//	void PrintArea()
//	{
//		cout << "面积：" << m_Bottom * m_High * 1 / 2 << endl;
//
//	}
//	double GetArea()
//	{
//		return m_Bottom * m_High * 1 / 2;
//	}
//};
//int main()
//{
//	Shape** sarr = new Shape*[5];
//	//Circle c;
//	//c.SetRadius(10);
//	sarr[0] = new Circle(10);
//	sarr[0]->PrintName();
//	sarr[0]->PrintArea();
//	//Square s;
//	//s.SetLength(5);
//	sarr[1] = new Square(5);
//	sarr[1]->PrintName();
//	sarr[1]->PrintArea();
//
//	sarr[2] = new Rectangle(2, 4);
//	sarr[2]->PrintName();
//	sarr[2]->PrintArea();
//
//	sarr[3] = new Trapezoid(1, 2, 3);
//	sarr[3]->PrintName();
//	sarr[3]->PrintArea();
//
//	sarr[4] = new Triangle(4, 3);
//	sarr[4]->PrintName();
//	sarr[4]->PrintArea();
//	double Area = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		Area += sarr[i]->GetArea();
//	}
//	cout << "总面积：" << Area << endl;
//
//	// 释放空间
//	for (int i = 0; i < 5; i++)
//	{
//		delete[] sarr[i];
//	}
//	delete[] sarr;
//	/*Rectangle r;
//	r.SetLong(2);
//	r.SetWide(4);
//	r.PrintName();
//	r.PrintArea();
//	Trapezoid t;
//	t.SetUpBottom(1);
//	t.SetDownBottom(2);
//	t.SetHigh(3);
//	t.PrintName();
//	t.PrintArea();
//	Triangle tr;
//	tr.SetBottom(4);
//	tr.SetHigh(3);
//	tr.PrintName();
//	tr.PrintArea();*/
//	return 0;
//}