#include<iostream>

using namespace std;
typedef int ElemType;

int main()
{
	// һά����
	ElemType arr[20];

	cout << arr << endl;// ��ʾ������׵�ַ
	cout << arr + 1 << endl;// ��ʾ�����׵�ַ����һ��Ԫ�صĵ�ַ
	cout << arr + 2 << endl;// ��ʾ�����׵�ַ����һ������һ��Ԫ�صĵ�ַ
	cout << &arr << endl;// ��ʾ����ĵ�ַ
	// ��ά����
	// һ����������ǲ��������ȴ洢�ķ�ʽ�洢��ά���飬����matlab��fortran���������ȴ洢��ʽ�洢
	// �����ά����arr[m][n]��ʼ��ַΪLOC
	// 1> �����ȣ�a[i][j]�ĵ�ַΪ��(i * n + j)*sizeof(ElemType)
	// 2> �����ȣ�a[i][j]�ĵ�ַΪ��(j * m + i)*sizeof(ElemType)
 	return 0;
}