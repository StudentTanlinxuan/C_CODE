#include<iostream>

using namespace std;
//// ��������������
//// ����������
//// ֵ����
//void mySwap1(int a, int b)
//{
//	int temp = a;
//	a = b; 
//	b = temp;
//}
//// ַ����
//void mySwap2(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//// ���ô���
//void mySwap3(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//mySwap1(a,b);// ֵ���ݣ��ββ�������ʵ��
//	//mySwap2(&a, &b);// ַ���ݣ��βλ�����ʵ��
//	mySwap3(a, b);// ���ô���Ҳ�����β�����ʵ��
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return EXIT_SUCCESS;
//}

//// �����������ķ���ֵ
//// 1.��Ҫ���ؾֲ�����������
//int& test1()
//{
//	int a = 10;
//	return a;
//}
//// 2.�����ĵ��ÿ�����Ϊ��ֵ
//int& test2()
//{
//	static int a = 10; 
//	// ��һ��static����a�����ȫ������ȫ�����ϵ������ڳ���������ɲ���ϵͳ�ͷ�
//	return a;
//}
//int main()
//{
//	//int& ret = test1();
//	//cout << "ret = " << ret << endl;// ����
//	// ��Ϊa��һ���ֲ����������ջ��������ִ������ͷŵ����ٴβ������ڷǷ�����
//
//	int& ret2 = test2();
//	cout << "ret2 = " << ret2 << endl;
//	cout << "ret2 = " << ret2 << endl;
//	test2() = 100;// ��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
//	cout << "ret2 = " << ret2 << endl;
//	cout << "ret2 = " << ret2 << endl;
//
//	return 0;
//}

// ���õı��� -- ����һ��ָ�볣��
// ����һ������ʼ�����Ͳ��ܷ����ı�
// ���������ã���ת��Ϊ int* const ref = &a; 
void func(int& ref)
{
	ref = 100;// ret�����ã�ת��Ϊ*ref = 100;
}
int main()
{
	int a = 10;
	// ���Զ�ת��Ϊint* const ref = &a;ref��ָ������ݲ����޸�
	int& ref = a;
	ref = 20;// �ڲ�����ref�����ã��Զ��������ת��Ϊ*ref = 20;

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func(a);
	return 0;
}