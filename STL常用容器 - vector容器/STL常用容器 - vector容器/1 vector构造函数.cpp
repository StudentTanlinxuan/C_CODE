//// 3.2.2 vector���캯��
//// ���ã�����vector����
//// ����ԭ�ͣ�vector<T> v;// ����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//// vector(v.begin(), v.end());// ��v[begin(),end())�����е�Ԫ�ؿ���������
//// vector(n, elem);// ���캯����n��elem����������
//// vector(const vector& vec);// �������캯��
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void vectorPrint(vector<int>& v)
//{
//	// ���õ�����vector<int>::iterator
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//}
//
//void test1()
//{
//	vector<int> v1;// Ĭ�Ϲ���  �޲ι���
//
//	for (int i = 0; i < 10; i++)
//	{
//		// ��v1��β��10��Ԫ��
//		v1.push_back(i);
//	}
//
//	// ��ӡһ��v1
//	vectorPrint(v1);
//
//	// �������䷽ʽ���й���
//	vector<int> v2(v1.begin(), v1.end());
//	vectorPrint(v2);
//
//	// n��elem��ʽ����
//	vector<int> v3(10, 100);// ����1������  ����2��elemֵ
//	vectorPrint(v3);
//
//	// ���ÿ������캯��
//	vector<int> v4(v3);
//	vectorPrint(v4);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺vector�Ķ��ֹ��췽ʽû�пɱ��ԣ�������ü���