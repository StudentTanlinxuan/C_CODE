///* 5.4.2 replace
//* ���ã���������ָ����Χ�ڵľ�Ԫ���޸�Ϊ��Ԫ��
//* ����ԭ�ͣ�
//* replace(iterator beg, iterator end, oldvalue, newvalue);
//* �������ڵľ�Ԫ�ػ�����Ԫ��
//* beg		��ʼ������
//* end		����������
//* oldvalue  ��Ԫ��
//* newvalue  ��Ԫ��
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
//void test1()
//{
//	vector<int> v;
//
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(10);
//	v.push_back(20);
//
//	cout << "�滻ǰ��" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
//	// �������� 20 �滻Ϊ 2000
//	replace(v.begin(), v.end(), 20, 2000);
//	cout << "�滻��" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺replace���滻��������������������Ԫ��