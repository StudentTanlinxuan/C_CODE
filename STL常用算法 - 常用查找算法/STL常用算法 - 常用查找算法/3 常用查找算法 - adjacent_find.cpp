///*5.2.3 adjacent_find
//* ���ã����������ظ���Ԫ��
//* ����ԭ�ͣ�
//* adjacent(iterator beg, iterator end);
//* ���������ظ�Ԫ�أ���������Ԫ�ص�һ��λ�õĵ����� û���ҵ����ؽ���������
//* beg ��ʼ������
//* end ����������
//*/
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//void test1()
//{
//	// ���������ظ�Ԫ��
//	vector<int> v;
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(1);
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(3);
//
//	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
//	if (pos == v.end())
//	{ 
//		cout << "û���ҵ������ظ�Ԫ��" << endl;
//	}
//	else
//	{
//		cout << "�ҵ������ظ�Ԫ�أ�" << *pos << endl;
//	}
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺����������ʵ����������ظ�Ԫ�أ��ǵ�STL�е�adjacent_find�㷨