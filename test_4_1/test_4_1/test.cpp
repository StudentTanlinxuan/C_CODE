#include<iostream>

using namespace std;

//// ����������
//// ʹ�ó����������βΣ���ֹ�����
//void ShowValue(const int &a)// ����const���䲻���޸�a��ֵ
//{
//	//a = 1000;
//	cout << "a = " << a << endl;
//}
//int main()
//{
//	int a = 10;
//	//const int& ref = 10;// ���ñ�������һ��Ϸ����ڴ�
//	// ����const�������Ὣ���޸ĳɣ�int temp = 10;const int &ref = temp;
//	//ref = 20; // ����const�󣬱��ֻ�������������޸�
//	ShowValue(a);
//	cout << "a = " << a << endl;
//	/*int b = 20;
//	const int* pa = &a;
//	cout << pa << endl;
//	*pa = 20;
//	cout << a << endl;
//	pa = &b;
//	cout << pa << endl;*/
//	return 0;
//}

//// ����Ĭ�ϲ���
//// ������ú���ʱ���������ݣ��Ǿ��ô�������ݣ����û�д�����ʹ��Ĭ�ϵ�
//// �﷨������ֵ���� ��������(�β� = Ĭ��ֵ){������}
//int func(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//// ע�����1.���������һ���βο�ʼ��Ĭ��ֵ����ô������βο�ʼ�������Ҷ�������Ĭ��ֵ
////// ������
////int func2(int a, int b = 10, int c)
////{
////	return a + b + c;
////}
//// 2.���������ͺ���ʵ�������е��β�ֻ����һ���β���Ĭ��ֵ
//// �������������������ʵ����û�У���֮
//int func2(int a = 10, int b = 20);
//int func2(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int ret = func(10,30);
//	cout << ret << endl;
//	cout << func2(10, 20) << endl;
//	return 0;
//}

//// ����ռλ����
//// ��c++�к����β�λ�ÿ�����ռλ������������ռλ���ڵ���ʱ�����������
//// �﷨������ֵ���� ������ (��������){������};
//// ռλ������������Ĭ�ϲ���
//void func(int a, int)
//{
//	cout << "this is func" << endl;
//}
//int main()
//{
//	func(10, 10);// �ڵ���ռλ����ʱ�����
//	return 0;
//}

//// ��������
//// ���ã���ͬ�ĺ����������ظ�ʹ�ã���߸�����
//// �������ص�����������
//// 1����ͬһ����������
//// 2������������ͬ
//// 3��������ͬ�ĺ������ĺ����������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
//// ���Ǻ����ķ���ֵ������Ϊ
//void func()
//{
//	cout << "func �ĵ���" << endl;
//}
//void func(int a)
//{
//	cout << "func(int a) �ĵ���" << endl;
//}
//void func(double a)
//{
//	cout << "func(double a) �ĵ���" << endl;
//}
//void func(int a, double b)
//{
//	cout << "func(int a, double b)�ĵ���" << endl;
//}
//void func(double a, int b)
//{
//	cout << "func(double a, int b)�ĵ���" << endl;
//}
//// ע����������ķ���ֵ������Ϊ�������ص�����
////int func(double a, int b)// �޷����ؽ�������ֵ���ֵĺ���
////{
////	cout << "func(double a, int b)�ĵ���" << endl;
////}
//int main()
//{
//	func();
//	func(10);
//	func(3.14);
//	func(10,3.14);
//	func(3.14,10);
//	return 0;
//}

// �������ص�ע������
// 1.������Ϊ�������ص�����
void func(int &a)// int &a = 10; �﷨���Ϸ�
{
	cout << "func(int &a)�ĵ���" << endl;
}
void func(const int& a)// const int &a = 10; �﷨�Ϸ�
// ��Ϊ�������ᴴ��һ����ʱ�������10����ʹaָ���ǿ��ڴ�
{
	cout << "func(const int &a)�ĵ���" << endl;
}
// 2.������������Ĭ�ϲ��� 
void func2(int a , int b = 10)
{
	cout << "func(int a, int b)�ĵ���" << endl;
}
void func2(int a)
{
	cout << "func(int a)�ĵ���" << endl;
}
int main()
{
	//int a = 10;
	//func(a);// ��ʱ�����func(int &a)
	//// Ҫ�����func(const int &a)
	//func(10);

	//func2(10);// ��������������Ĭ�ϲ���������ֶ����Ծͻ���ִ���
	// ע�⣺��ʹ��ʱ������������ķ���
	return 0;
}