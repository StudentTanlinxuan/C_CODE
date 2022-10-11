#include<iostream>

using namespace std;

class Weekday
{
private:
	string m_Day;
	int m_Select;

public:
	void SetDay()
	{
		cout << "请输入一个数字，0表示星期日，1表示星期一，类推，6表示星期六" << endl;
		cin >> m_Select;
		switch (m_Select)
		{
		case 0:
			this->m_Day = "星期日";
			break;
		case 1:
			this->m_Day = "星期一";
			break;
		case 2:
			this->m_Day = "星期二";
			break;
		case 3:
			this->m_Day = "星期三";
			break;
		case 4:
			this->m_Day = "星期四";
			break;
		case 5:
			this->m_Day = "星期五";
			break;
		case 6:
			this->m_Day = "星期六";
			break;
		default:
			break;
		}
	}

	// 前进一天
	void IncDay()
	{
		switch (--m_Select)
		{
		case 0:
			this->m_Day = "星期日";
			break;
		case 1:
			this->m_Day = "星期一";
			break;
		case 2:
			this->m_Day = "星期二";
			break;
		case 3:
			this->m_Day = "星期三";
			break;
		case 4:
			this->m_Day = "星期四";
			break;
		case 5:
			this->m_Day = "星期五";
			break;
		case 6:
			this->m_Day = "星期六";
			break;
		default:
			break;
		}
	}


	// 打印当前星期几
	void NowDay()
	{
		cout << this->m_Day << endl;
	}
};

int main()
{
	Weekday wk;
	wk.SetDay();
	wk.NowDay();
	wk.IncDay();
	wk.IncDay();
	wk.IncDay();
	wk.NowDay();
	return 0;
}