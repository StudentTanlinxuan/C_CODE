//#include<iostream>
//
//using namespace std;
//
//class MyTime
//{
//private:
//	int m_Hours; // ʱ
//	int m_Minute; // ��
//	int m_Second; // ��
//
//public:
//	// ����ʱ��
//	void SetTime()
//	{
//		cout << "������ʱ���֣���" << endl;
//		cin >> m_Hours >> m_Minute >> m_Second;
//	}
//	// �Զ�ʮ��Сʱ����ʾʱ��
//	void Print_24()
//	{
//		cout << m_Hours << ":" << m_Minute << ":" << m_Second << endl;
//	}
//	// ��ʮ��Сʱ����ʾʱ��
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