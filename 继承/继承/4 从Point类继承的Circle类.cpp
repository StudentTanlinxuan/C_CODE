#include<iostream>

using namespace std;

double Pl = 3.14;
// point ����
class Point
{
public:
	int x, y; //���x��y���� 
public: 
	//Point(int = 0, int = 0); // ���캯�� 
//	  void SetPoint(int, int); // �������� 
//	  int GetX() { return x; } // ȡx���� 
//	  int GetY() { return y; } // ȡy���� 
//	  void Print(); //����������
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
// circle ������
class Circle :public Point
{
public:
	double m_Radius; // radius �뾶
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