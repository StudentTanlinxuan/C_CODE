///* 5.4.3 replace_if
//* ���ã���������ָ����Χ�����������ľ�Ԫ���滻Ϊ��Ԫ��
//* ����ԭ�ͣ�
//* replace_if(iterator beg, iterator end, _Pred, newvalue);
//* �������滻Ԫ�أ������������滻��ָ��Ԫ��
//* beg			��ʼ������
//* end			����������
//* _Pred			ν��
//* newvalue		�滻����Ԫ��
//*/
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//class Greater30
//{
//public:
//	bool operator()(int val)
//	{
//		return val >= 30;
//	}
//};
//
//void test1()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(30);
//	v.push_back(10);
//
//	cout << "�滻ǰ��" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
//	// �������е�Ԫ�� ���ڵ��� 30 ��Ԫ���滻�� 3000
//	replace_if(v.begin(), v.end(), Greater30(), 3000);
//	cout << "�滻��" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺replace_if�������滻���������÷º������ɸѡ���������