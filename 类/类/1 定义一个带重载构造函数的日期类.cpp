//#include<iostream>
//
//using namespace std;
//
//
//// ����һ�������ع��캯����������
//class Date
//{
//private:
//	int m_Year; // ��
//	int m_Month; // ��
//	int m_Day; // ��
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
//	// ��ʾ����
//	void ShowDate()
//	{
//		cout << m_Year << "-" << m_Month << "-" << m_Day << endl;
//	}
//	// ��ֵ
//	void Init()
//	{
//		cout << "����������������" << endl;
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