///* 5.3 ���������㷨
//* �㷨��飺
//* sort  �������е�Ԫ�ؽ�������
//* random_shuffle  ϴ��  ָ����Χ�ڵ�Ԫ�������������
//* merge  ����Ԫ�غϲ������洢����һ��������
//* reverse  ��תָ����Χ��Ԫ��
//* 
//* 5.3.1 sort
//* ���ã���������Ԫ�ؽ�������
//* ����ԭ�ͣ�
//* sort(iterator beg, iterator end, _Pred);
//* beg ��ʼ������
//* end ����������
//* _Pred ν��  (��д�ɲ�д����дĬ������Ϊ��С����д�Ļ������Լ�д����������������)
//*/
//
//
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//
//using namespace std;
//
//void Myprint(int val)
//{
//	cout << val << " ";
//}
//
//void test1()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(50);
//
//	// ����sort��������
//	sort(v.begin(), v.end());
//	// ����for_each�����д�ӡ�����е�����
//	for_each(v.begin(), v.end(), Myprint);
//	cout << endl;
//
//	// �ı��������Ϊ ����
//	sort(v.begin(), v.end(), greater<int>());// greater<int> ()  �ڽ��ĺ�������
//	for_each(v.begin(), v.end(), Myprint);
//	cout << endl;
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺sort ����õ������㷨����Ҫ��������