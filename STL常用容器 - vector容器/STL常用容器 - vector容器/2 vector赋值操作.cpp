//// 3.2.3 vector��ֵ����
//// ���ã���vector�������и�ֵ
//// ����ԭ�ͣ�vector& operator=(const vector& vec);// ����=������
//// assign(beg, end);// ��[begin,end)�����ڵ����ݿ�����ֵ������
//// assign(n, elem);// ��n��elem������ֵ������
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//// ��ӡvector�е�����
//void vectorPrint(vector<int>& v)
//{
//	// ���õ���������vector����
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	vector<int> v1;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vectorPrint(v1);
//
//	// ��ֵ operator=
//	vector<int> v2;
//	v2 = v1;
//	vectorPrint(v2);
//
//	// assign
//	vector<int> v3;
//	v3.assign(v1.begin(), v1.end());
//	vectorPrint(v3);
//	//n��elem ��ʽ��ֵ
//	vector<int> v4;
//	v4.assign(10, 3);
//	vectorPrint(v4);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺vector��ֵ��ʽ�Ƚϼ򵥣�ʹ��operator=��ʽ������assign��ʽ������