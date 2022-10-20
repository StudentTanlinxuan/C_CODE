#include<iostream>

using namespace std;

class Matrix // 矩阵
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
		m_Marr = new int* [m_Row];//动态创建二维数组
		for (i = 0; i < m_Row; i++)
			m_Marr[i] = new int[m_Col];//动态创建每一行上的每一列

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
// 类中创建二维数组要用到类中的成员变量，只能采取在堆栈上开辟空间，先创建一个指针数组，每个对象为每行数组的首地址，每个首地址指向一个数组
// 拷贝构造函数调用时机  1. 使用一个创建完毕的对象来初始化一个新对象  
//                       2. 值传递的方式给函数参数传值
//                       3. 以值方式返回局部对象
// 注意：如果有成员属性在堆区开辟空间的，一定要自己提供拷贝构造函数(深拷贝)，防止浅拷贝带来的问题