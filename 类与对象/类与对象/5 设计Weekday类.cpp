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
		cout << "������һ�����֣�0��ʾ�����գ�1��ʾ����һ�����ƣ�6��ʾ������" << endl;
		cin >> m_Select;
		switch (m_Select)
		{
		case 0:
			this->m_Day = "������";
			break;
		case 1:
			this->m_Day = "����һ";
			break;
		case 2:
			this->m_Day = "���ڶ�";
			break;
		case 3:
			this->m_Day = "������";
			break;
		case 4:
			this->m_Day = "������";
			break;
		case 5:
			this->m_Day = "������";
			break;
		case 6:
			this->m_Day = "������";
			break;
		default:
			break;
		}
	}

	// ǰ��һ��
	void IncDay()
	{
		switch (--m_Select)
		{
		case 0:
			this->m_Day = "������";
			break;
		case 1:
			this->m_Day = "����һ";
			break;
		case 2:
			this->m_Day = "���ڶ�";
			break;
		case 3:
			this->m_Day = "������";
			break;
		case 4:
			this->m_Day = "������";
			break;
		case 5:
			this->m_Day = "������";
			break;
		case 6:
			this->m_Day = "������";
			break;
		default:
			break;
		}
	}


	// ��ӡ��ǰ���ڼ�
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