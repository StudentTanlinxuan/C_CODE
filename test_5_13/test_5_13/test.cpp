#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;
// 4.5.2 �������������
// ���ã���������Զ�����������

//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//	// ���ó�Ա���� �������������
//	
//	//void operator<<(Person& p)// ������д�Ļ������õ�ʱ�������������
//	//// ���������Ա����p1.operator<<(p2),��Ȼ����������Ҫ��
//	//{
//	//}
//
//	//void operator<<(ostream& cout)// ����д�Ļ�������ʱ�����p1 << cout����ȻҲ������Ҫ�󣬵�������д�����������������
//	//{
//	//	cout << "m_A = " << this->m_A << endl;
//	//	cout << "m_B = " << this->m_B << endl;
//	//}
//	
//	// �������ǲ������ó�Ա���������������������Ϊ�޷�ʵ��cout�����
//private:
//	int m_A;
//
//	int m_B;
//};
//// ֻ������ȫ�ֺ����������������
//ostream& operator<<(ostream& cout, Person& p) // cout������Ϊostrean(��׼�����)������ֻ����һ�������Բ�������������
//// ����operator<<(cout, p) �򻯣�cout << p
//{
//	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
//	return cout; // ���ȫ�ֺ�������cout����˳����ģ���Ϊ���õ������õĴ��η�ʽ�����ܸĵ�ɶ��ָ�����cout����ڴ�ռ�
//}
//void test1()
//{
//	Person p1(10,10);
//	//p1.m_A = 10;
//	//p1.m_B = 10;
//
//	//p1.operator<<(cout); // �򻯣�p1 << cout;
//	//p1 << cout;
//
//	cout << p1 << " hello world" << endl;// ��ʽ���
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺��������������Ԫ����ʵ������Զ�����������

// 4.5.3 �������������
// ���ã�ͨ�������������ʵ���Լ�����������

// ����һ���Լ�������
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger& myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}
	// ǰ��++���������
	MyInteger& operator++()
	// �������ʹ�����ý��з��أ���Ϊʹ��ֵ��ʽ���з��صĻ���������⡣
	// �������������һֱ��ͬһ�����ݽ��е��������ʹ����ֵ��ʽ���ط��ص���һ���´�������
	{
		// �Ƚ���++�����
		m_Num++;
		// �ٽ�������з���
		return *this;
	}
	// ����++���������
	MyInteger operator++(int)// �������int����ռλ����,��������ǰ��++�ͺ���++
	// ��Ȼ����������Ϊ��75�������Ա����ͬ��
	// �������ʹ��ֵ���صķ�ʽ�����ʹ��ַ���ػ���ַǷ�����
	{
		// �Ƚ��м�¼��ʱ���
		MyInteger temp = *this;
		// �ٽ��е���
		m_Nums++;
		// ��󽫼�¼�������
		return temp;
	}
private:
	int m_Num;
};
// ȫ�ֺ���ʵ���������������
ostream& operator<<(ostream& cout, MyInteger& myint)
{
	cout << "m_Num = " << myint.m_Num << endl;
	return cout;
}
void test1()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;

}
void test2()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	//test1();
	test2();
	//int a = 0;
	////cout << ++a << endl;
	//cout << ++(++a) << endl;
	//cout << a << endl;// ֤����++�������a�ĵ���һֱ����ͬһ��a
	return 0;
}
// �ܽ᣺ǰ��++�������ã�����++����ֵ
