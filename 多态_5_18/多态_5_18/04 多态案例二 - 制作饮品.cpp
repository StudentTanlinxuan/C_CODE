//#include<iostream>
//
//using namespace std;
//
//// ��̬������ - ������Ʒ
//class AbstractDurking
//{
//public:
//	// ��ˮ
//	virtual void Boil() = 0;
//
//	// ����
//	virtual void Brew() = 0;
//
//	// ���뱭��
//	virtual void PourInCup() = 0;
//
//	// ���븨��
//	virtual void PutSomething() = 0;
//
//	// ��������
//	void makeDurking()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//// ��������
//class Coffee :public AbstractDurking
//{
//public:
//	// ���������д�����еĴ��麯��
//	// ��ˮ
//	virtual void Boil()
//	{
//		cout << "��ũ��ɽȪ" << endl;
//	}
//
//	// ����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	// ���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	// ���븨��
//	virtual void PutSomething()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//// ������ˮ
//class Tea :public AbstractDurking
//{
//public:
//	// ���������д�����еĴ��麯��
//	// ��ˮ
//	virtual void Boil()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//
//	// ����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	// ���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	// ���븨��
//	virtual void PutSomething()
//	{
//		cout << "�������" << endl;
//	}
//};
//// ��������
//void dowork(AbstractDurking* abs)
//{
//	abs->makeDurking();
//	delete abs;
//}
//
//void test1()
//{
//	// ��������
//	dowork(new Coffee);
//	cout << "--------------------------" << endl;
//	// ������ˮ
//	dowork(new Tea);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
