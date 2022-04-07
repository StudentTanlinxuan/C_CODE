#include<iostream>
#include<string>
using namespace std;

// 成员属性设置成私有
// 优点1：将成员属性设置成私有，我们可以自己控制它的读写权限
// 优点2：对于写权限，我们可以检测数据的有效性
//// 设置一个人类
//class person
//{
//public:
//	// 设置姓名  可读可写
//	void SetName(string name)
//	{
//		m_Name = name;
//	}
//	// 获取姓名  可读可写
//	string GetName()
//	{
//		return m_Name;
//	}
//	// 获取年龄  可读可写
//	int GetAge()
//	{
//		//m_Age = 0;// 将年龄初始化为0岁
//		return m_Age;
//	}
//	// 设置年龄  可读可写  范围为0 - 150
//	void SetAge(int age)
//	{
//		if (age < 0 || age > 150)
//		{
//			m_Age = 0;
//			cout << "年龄不符！" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	// 设置情人  只写
//	void SetLover(string lover)
//	{
//		m_lover = lover;
//	}
//private:// 私有权限
//	// 姓名  可读可写
//	string m_Name;
//	// 年龄  可读
//	int m_Age;
//	// 情人  可写
//	string m_lover;
//};
//int main()
//{
//	person p;
//	p.SetName("张三");
//	cout << "姓名为： " << p.GetName() << endl;
//	p.SetAge(18);
//	cout << "年龄为： " << p.GetAge() << endl;
//
//	// 设置张三情人为苍井
//	p.SetLover("苍井");// 只写属性，不可以读取
//	//cout << "情人为： " << p.m_lover << endl;
//	return 0;
//}

// 设计立方体类
// 1.设计立方体类(Cube)
// 2.设计属性
// 3.求出立方体的面积和体积
// 4.分别用全局函数和成员函数判断两个立方体是否相等 -- 注意两个不同函数传入的参数个数不同
class cube// cube -- 立方体
{
private:
	int m_Depth;// 长
	int m_Width;// 宽
	int m_Heigh;// 高
public:
	// 设置立方体长
	void SetDepth(int depth)
	{
		m_Depth = depth;
	}
	// 获取立方体长
	int GetDepth()
	{
		return m_Depth;
	}
	// 设置立方体宽
	void SetWidth(int width)
	{
		m_Width = width;
	}
	// 获取立方体宽
	int GetWidth()
	{
		return m_Width;
	}
	// 设置立方体高
	void SetHeigh(int heigh)
	{
		m_Heigh = heigh;
	}
	// 获取立方体高
	int GetHeigh()
	{
		return m_Heigh;
	}
	// 获取立方体面积
	int CubeArea()
	{
		return 2 * (m_Depth * m_Width) + 2 * (m_Depth * m_Heigh) + 2 * (m_Heigh * m_Width);
	}
	// 获取立方体体积
	int CubeVolume()
	{
		return m_Depth * m_Width * m_Heigh;
	}
	// 利用成员函数判断立方体是否相等
	bool is_CubeIdenticalByClass(cube& c)
	{
		if (m_Depth == c.GetDepth()
			&& m_Width == c.GetWidth()
			&& m_Heigh == c.GetHeigh())
		{
			return true;
		}
		return false;
	}
};
// 利用全局函数判断两个立方体是否相等
bool is_CubeIdentical(cube& c1, cube& c2)
{
	if (c1.GetDepth() == c2.GetDepth()
		&& c1.GetWidth() == c2.GetWidth()
		&& c1.GetHeigh() == c2.GetHeigh())
	{
		return true;
	}
	return false;
}
int main()
{
	// 实例化一个立方体
	cube c1;
	c1.SetDepth(3);
	c1.SetWidth(4);
	c1.SetHeigh(5);
	cout << "立方体c1的面积为：" << c1.CubeArea() << endl;
	cout << "立方体c1的体积为：" << c1.CubeVolume() << endl;
	// 实例化第二个立方体
	cube c2;
	c2.SetDepth(3);
	c2.SetWidth(4);
	c2.SetHeigh(5);
	bool ret = c1.is_CubeIdenticalByClass(c2);
	if (ret)
	{
		cout << "成员函数： 两个立方体相等！" << endl;
	}
	else
	{
		cout << "成员函数： 两个立方体不等！" << endl;
	}
	ret = is_CubeIdentical(c1, c2);
	if (ret)
	{
		cout << "全局函数： 两个立方体相等！" << endl;
	}
	else
	{
		cout << "全局函数： 两个立方体不等！" << endl;
	}
	return EXIT_SUCCESS;
}