///*4.3.3 ��ϵ�º���
//* ���ã�ʵ�ֹ�ϵ�Ա�
//* **�º���ԭ�ͣ�**
//* template<class T> bool equal_to<T>                //����
//* template<class T> bool not_equal_to<T>           //������
//* template<class T> bool greater<T>                //����
//* template<class T> bool greater_equal<T>          //���ڵ���
//* template<class T> bool less<T>                   //С��
//* template<class T> bool less_equal<T>             //С�ڵ���
//*/
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//
//using namespace std;
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void test1()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	// ����
//	// sort(v.begin(), v.end(), MyCompare());
//	// greater<int>() �ڽ���������
//	sort(v.begin(), v.end(), greater<int>());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺��ϵ�º�������õľ���greater<>����