#include<iostream>

using namespace std;

class Matrix // ����
{
	int m_Row;
	int m_Col;
	// int** m_Marr = new int*[m_Row];
	int** m_Marr;
public:
	Matrix()
	{

	}
	Matrix(int row, int col, int arr[], int size)
	{
		m_Row = row;
		m_Col = col;
		m_Marr = new int* [m_Row];
		for (int i = 0; i < m_Row; i++)
		{
			m_Marr[i] = new int[m_Col];
			memset(m_Marr[i], 0, sizeof(int) * m_Col);
		}
		//for (int k = 0; k < m_Row; k++)
		//{
		//	m_Marr[k] = new int[m_Col];
		//	memset(m_Marr[k], 0, sizeof(int) * m_Col);
		//}
		int pos = 0;
		while (pos < size)
		{
			for (int i = 0; i < m_Row; i++)
			{
				for (int j = 0; j < m_Col; j++)
				{
					m_Marr[i][j] = arr[pos];
					pos++;
				}
			}
		}
	}
	Matrix(const Matrix& m)
	{
		int i, j;
		m_Row = m.m_Row;
		m_Col = m.m_Col;
		m_Marr = new int* [m_Row];//��̬������ά����
		for (i = 0; i < m_Row; i++)
			m_Marr[i] = new int[m_Col];//��̬����ÿһ���ϵ�ÿһ��

		if (m.m_Marr)
		{
			for (i = 0; i < m_Row; i++)
				for (j = 0; j < m_Col; j++)
					m_Marr[i][j] = m.m_Marr[i][j];
		}
	}
	Matrix operator+(Matrix m)
	{
		int arr1[] = { 0 };
		int size1 = sizeof(arr1) / sizeof(arr1[0]);
		Matrix temp(2,3,arr1, size1);
		for (int i = 0; i < m_Row; i++)
		{
			for (int j = 0; j < m_Col; j++)
			{
				temp.m_Marr[i][j] = this->m_Marr[i][j] + m.m_Marr[i][j];
			}
		}
		return temp;
	}
	Matrix& operator=(Matrix& m)
	{
		return *this;
	}
	void Print()
	{
		for (int i = 0; i < m_Row; i++)
		{
			for (int j = 0; j < m_Col; j++)
			{
				cout << m_Marr[i][j] << " ";
			}
			cout << endl;
		}
	}
	~Matrix()
	{
		for (int i = 0; i < m_Row; i++)
		{
			delete[] m_Marr[i];
		}
		delete[] m_Marr;
	}
};
int main()
{
	int arr1[] = { 1, 3, 2, 4, 2, 5};
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	Matrix m1(2, 3, arr1, size1);
	m1.Print();
	int arr2[] = { 2, 3, 4, 3, 2, 6 };
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	Matrix m2(2, 3, arr2, size2);
	m2.Print();
	Matrix m3 = m1 + m2;
	m3.Print();
	return 0;
}
// ���д�����ά����Ҫ�õ����еĳ�Ա������ֻ�ܲ�ȡ�ڶ�ջ�Ͽ��ٿռ䣬�ȴ���һ��ָ�����飬ÿ������Ϊÿ��������׵�ַ��ÿ���׵�ַָ��һ������
// �������캯������ʱ��  1. ʹ��һ��������ϵĶ�������ʼ��һ���¶���  
//                       2. ֵ���ݵķ�ʽ������������ֵ
//                       3. ��ֵ��ʽ���ؾֲ�����
// ע�⣺����г�Ա�����ڶ������ٿռ�ģ�һ��Ҫ�Լ��ṩ�������캯��(���)����ֹǳ��������������