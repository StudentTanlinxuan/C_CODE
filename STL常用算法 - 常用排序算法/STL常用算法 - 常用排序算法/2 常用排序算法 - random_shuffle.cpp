///* 5.3.2 random_shuffle 
//* ���ã�ϴ��  ָ����Χ�е�Ԫ�ؽ��������������
//* ����ԭ�ͣ�
//* random_shuffle(iterator beg, iterator end);
//* ָ����Χ��Ԫ�ؽ��������������
//* beg  ��ʼ������
//* end  ����������
//*/
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<ctime>
//
//using namespace std;
//
//void Myprint(int val)
//{
//	cout << val << " ";
//}
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
//	// ������������
//	srand((unsigned int)time(NULL));
//
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	for_each(v.begin(), v.end(), Myprint);
//	cout << endl;
//
//	// ����ϴ�� �㷨 ����˳��
//	random_shuffle(v.begin(), v.end());
//	// ���������������������ӵĻ���ÿ�δ��ҵĴ���һ��
//
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//}
//
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺random_shufferϴ���㷨�Ƚ�ʵ�ã�������ʹ��ʱע��Ҫ�������������