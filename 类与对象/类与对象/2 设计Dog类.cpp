//#include<iostream>
//
//using namespace std;
//
//// ���Dog��
//class Dog
//{
//private:
//	string m_Name; // ����
//	int m_Age; // ����
//	char m_Sex; // �Ա� male ��  female Ů
//	float m_Weight; // ����
//
//public:
//	// ��ʼ������
//	void setdata()
//	{
//		cout << "����������Dog�����������䣬�Ա�����" << endl;
//		cin >> m_Name >> m_Age >> m_Sex >> m_Weight;
//	}
//	
//	string GetName()
//	{
//		return this->m_Name;
//	}
//
//	int GetAge()
//	{
//		return this->m_Age;
//	}
//
//	char GetSex()
//	{
//		return this->m_Sex;
//	}
//
//	float GetWeight()
//	{
//		return this->m_Weight;
//	}
//
//};
//
//int main()
//{
//	Dog d1;
//	d1.setdata();
//	cout << "It is my dog." << endl;
//	cout << "Its name is " << d1.GetName() << endl;
//	cout << "It is "<< d1.GetAge() << " years old. " << endl;
//	char ret = d1.GetSex();
//	if (ret == 'm')
//	{
//		cout << "It is male." << endl;
//	}
//	else
//	{
//		cout << "It is female." << endl;
//	}
//
//	cout << "It is  "<< d1.GetWeight() << " kg. " << endl;
//
//	return 0;
//}