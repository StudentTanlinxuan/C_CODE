//// 2.5 �����㷨��������ʼ
//// STL����õ�����Ϊvector��������������
//// 2.5.1 vector���������������
//// ������vector
//// �㷨��for_each
//// ��������vector<int>::iterator
//// ����������ָ����ʹ��
//#include<iostream>
//#include<vector>
//#include<algorithm>// ��׼�㷨��ͷ�ļ�
//
//using namespace std;
//void MyPrint(int val)
//{
//	cout << val << endl;
//}
//void test1()
//{
//	// ����һ��vector����������
//	vector<int> v;
//
//	// �������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//	//// ͨ�����������������е�����
//	//vector<int>::iterator itBegin = v.begin();// ��ʼ������ ָ�������е�һ��Ԫ��
//	//vector<int>::iterator itEnd = v.end();// ���������� ָ�����������һ��Ԫ�ص���һ��λ��
//
//	//// ��һ�ֱ�����ʽ
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	//// �ڶ��ֱ�����ʽ
//	//for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
//	//{
//	//	cout << *it << endl;
//	//}
//
//	// �����ֱ�����ʽ ����STL�ṩ�ı����㷨
//	for_each(v.begin(), v.end(), MyPrint);
//}
//int main()
//{
//	test1();
//	return 0;
//}

