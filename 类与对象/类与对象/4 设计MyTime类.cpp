//#include<iostream>
//
//using namespace std;
//
//class MyTime
//{
//private:
//	int m_Hours; // 时
//	int m_Minute; // 分
//	int m_Second; // 秒
//
//public:
//	// 设置时间
//	void SetTime()
//	{
//		cout << "请输入时，分，秒" << endl;
//		cin >> m_Hours >> m_Minute >> m_Second;
//	}
//	// 以二十四小时制显示时间
//	void Print_24()
//	{
//		cout << m_Hours << ":" << m_Minute << ":" << m_Second << endl;
//	}
//	// 以十二小时制显示时间
//	void Print_12()
//	{
//		if (m_Hours > 12)
//		{
//			cout << m_Hours - 12 << ":" << m_Minute << ":" << m_Second << " PM" << endl;
//		}
//		else
//		{
//			cout << m_Hours << ":" << m_Minute << ":" << m_Second << " AM" << endl;
//		}
//	}
//};
//
//
//int main()
//{
//	MyTime mt1;
//	mt1.SetTime();
//	mt1.Print_12();
//	mt1.Print_24();
//	return 0;
//}