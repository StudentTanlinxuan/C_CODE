#include<iostream>
#include<string>

using namespace std;
// 4.7.2 ��̬����һ - �����
// �����������ֱ����ö�̬��������ͨд����ʵ����������������ļ�������
// ��̬���ŵ㣺1.������֯�ṹ����  2.�ɶ���ǿ  3.����ǰ�ںͺ��ڵ���չ�Լ�ά��

// ��ͨʵ��
class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
	}
	// �������չ�µĹ��ܣ���Ҫ�޸�Դ��
	// ����ʵ�����У��ᳫ ����ԭ��
	// ����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
public:
	int m_Num1;// ������1
	int m_Num2;// ������2
};
void test1()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
	
	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;

	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;

}

// ���ö�̬��ʵ�ּ�����
// ��̬�ĺô���
// 1. ��֯�ṹǿ
// 2. �ɶ���ǿ
// 3. ����ǰ�ںͺ�����չ�Լ�ά���Ը�

// ʵ�ּ�����������
class AbstractCalaulator
{
public:
	virtual int getResult()
	{
		return 0;
	}
public:
	int m_Num1;
	int m_Num2;
};
// �ӷ���������
class AddCalaulator :public AbstractCalaulator
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
// ������������
class SubCalaulator :public AbstractCalaulator // subtraction ����
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
// �˷���������
class MulCalaulator :public AbstractCalaulator 
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};
void test2()
{
	// ��̬��ʹ�ã������ָ���������ָ���������
	// �ӷ�����
	AbstractCalaulator* abs = new AddCalaulator;
	abs->m_Num1 = 100;
	abs->m_Num2 = 100;
	cout << abs->m_Num1 << " + " << abs->m_Num2 << " = " << abs->getResult() << endl;
	delete abs;

	// ��������
	abs = new SubCalaulator;
	abs->m_Num1 = 100;
	abs->m_Num2 = 100;
	cout << abs->m_Num1 << " - " << abs->m_Num2 << " = " << abs->getResult() << endl;
	delete abs;

	// �˷�����
	abs = new MulCalaulator;
	abs->m_Num1 = 100;
	abs->m_Num2 = 100;
	cout << abs->m_Num1 << " * " << abs->m_Num2 << " = " << abs->getResult() << endl;
	delete abs;

}
int main()
{
	//test1();
	test2();
	return 0;
}
// �ܽ᣺C++�����ᳫ���ö�̬��Ƴ���ܹ�����Ϊ��̬�ŵ�ܶ�