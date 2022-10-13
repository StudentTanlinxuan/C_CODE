#include<iostream>
#include<iomanip>

using namespace std;

// 设计多功能的MyTime类
class MyTime
{
	int m_Hour;
	int m_Minute;
	int m_Second;
public:
	MyTime()
	{
		m_Hour = 0;
		m_Minute = 0;
		m_Second = 0;
	}
	MyTime(int hour, int minute, int second)
	{
		if (hour > 24 || hour < 0)
		{
			cout << "小时设置有误" << endl;
			return;
		}
		else
		{
			m_Hour = hour;
			if (minute > 60 || minute < 0)
			{
				cout << "分钟设置有误" << endl;
				return;
			}
			else
			{
				m_Minute = minute;
				if (second > 60 || second < 0)
				{
					cout << "秒数设置有误" << endl;
					return;
				}
				else
				{
					m_Second = second;
				}
			}
		}
	}
	// 设定时间
	void SetTime(int hour, int minute, int second)
	{
		if (hour > 24 || hour < 0)
		{
			cout << "小时设置有误" << endl;
			return;
		}
		else
		{
			m_Hour = hour;
			if (minute > 60 || minute < 0)
			{
				cout << "分钟设置有误" << endl;
				return;
			}
			else
			{
				m_Minute = minute;
				if (second > 60 || second < 0)
				{
					cout << "秒数设置有误" << endl;
					return;
				}
				else
				{
					m_Second = second;
				}
			}
		}
	}
	// 以二十四小时制显示
	void ShowTime_24()
	{
		cout << setw(2) << setfill('0') << m_Hour << " : " << m_Minute << " : " << m_Second << endl;
	}
	// setw(位数)    setfill(指定字符)      注意：需要包含头文件#include<iomanip>
	
	// 以十二小时制显示
	void ShowTime_12()
	{
		if (m_Hour < 12)
		{
			cout << setw(2) << setfill('0') << m_Hour << " : " << m_Minute << " : " << m_Second << " AM" << endl;
		}
		else
		{
			cout << setw(2) << setfill('0') << m_Hour - 12 << " : " << m_Minute << " : " << m_Second << " PM" << endl;
		}
	}
	// 加时间
	void AddTime(int hour, int minute, int second)
	{
		m_Hour = m_Hour + hour;
		if (m_Hour > 24)
		{
			cout << "小时设置有误" << endl;
			return;
		}
		else
		{
			m_Minute = m_Minute + minute;
			if (m_Minute > 60)
			{
				m_Minute = m_Minute - 60;
				m_Hour += 1;
			}
			m_Second = m_Second + second;
			if (m_Second > 60)
			{
				m_Second = m_Second - 60;
				m_Minute += 1;
			}
		}
	}
	// 减时间
	void DropTime(int hour, int minute, int second)
	{
		m_Hour = m_Hour - hour;
		if (m_Hour < 0)
		{
			cout << "小时设置有误" << endl;
			return;
		}
		else
		{
			m_Minute = m_Minute - minute;
			if (m_Minute < 0)
			{
				m_Minute = 60 + m_Minute;
				m_Hour -= 1;
			}
			m_Second = m_Second - second;
			if (m_Second < 0)
			{
				m_Second = 60 + m_Second;
				m_Minute -= 1;
			}
		}
	}
};

int main()
{
	MyTime t1;
	MyTime t2(8, 10, 30);
	t1.ShowTime_12();
	t1.ShowTime_24();
	t2.ShowTime_12();
	t2.ShowTime_24();
	t1.SetTime(11, 30, 30);
	t1.ShowTime_12();
	t1.ShowTime_24();
	t1.AddTime(5, 35, 20);
	t2.DropTime(5, 15, 20);
	t1.ShowTime_12();
	t1.ShowTime_24();
	t2.ShowTime_12();
	t2.ShowTime_24();
	return 0;
}