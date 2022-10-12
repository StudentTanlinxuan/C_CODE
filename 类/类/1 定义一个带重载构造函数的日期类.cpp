//#include<iostream>
//
//using namespace std;
//
//
//// 定义一个带重载构造函数的日期类
//class Date
//{
//private:
//	int m_Year; // 年
//	int m_Month; // 月
//	int m_Day; // 日
//
//public:
//	Date(int year, int month, int day)
//	{
//		this->m_Year = year;
//		this->m_Month = month;
//		this->m_Day = day;
//	}
//	Date()
//	{
//
//	}
//	// 显示日期
//	void ShowDate()
//	{
//		cout << m_Year << "-" << m_Month << "-" << m_Day << endl;
//	}
//	// 赋值
//	void Init()
//	{
//		cout << "请依次输入年月日" << endl;
//		cin >> this->m_Year >> this->m_Month >> this->m_Day;
//	}
//};
//
//int main()
//{
//	Date d1(1900,1,1);
//	Date d2(2100, 12, 12);
//	d1.ShowDate();
//	d1.Init();
//	d2.ShowDate();
//	d1.ShowDate();
//	return 0;
//}