//// ��Ԫν��
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class MyCompare
//{
//public:
//	bool operator()(int val1, int val2)
//	{
//		// ����Ӵ�С
//		return val1 > val2;
//	}
//};
//
//void test1()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//
//	sort(v.begin(), v.end());
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	// ���ú������󣬸ı��㷨���ԣ���Ϊ�������Ϊ�Ӵ�С
//	sort(v.begin(), v.end(), MyCompare());// MyCompare() ��������
//	cout << "----------------------" << endl;
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺����ֻ��������ν�ʣ���Ϊ��Ԫν��