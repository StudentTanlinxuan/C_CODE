///* 4.2 ν��
//* 4.2.1 ν�ʻ�������
//* ������ز������͵ķº�����Ϊν��
//*		���operator()����һ����������ô����һԪν��
//*		���operator()����������������ô������Ԫν��
//*/
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test1()
//{
//	vector<int> v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	// �����������Ƿ��д��������
//	// GreaterFive() ������������
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//
//	if (it == v.end())
//	{
//		cout << "û�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ�����5������Ϊ��" << *it << endl;
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺����ֻ��һ����ν�ʣ���ΪһԪν��