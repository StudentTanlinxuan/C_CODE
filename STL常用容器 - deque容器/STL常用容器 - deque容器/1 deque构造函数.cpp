//// 3.3.2 deque���캯��
//// ���ã�deque��������
//// ����ԭ�ͣ�
//// deque<T> deqT; // Ĭ�Ϲ�����ʽ
//// deque(beg, end); // ���캯����[beg,end)����֮���Ԫ�ؿ���������
//// deque(n, elem); // ���캯����n��elem����������
//// deque(const deque& deq); // �������캯��  ��deq����������
//#include<iostream>
//#include<deque>
//
//using namespace std;
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;  �������ּ���const���Σ�������ҲҪ�޸�Ϊconst_iterator������ �Ϳ���ʹ�����е����ݲ������޸���
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//
//	printDeque(d1);
//
//	deque<int> d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int> d3(10, 100);
//	printDeque(d3);
//
//	deque<int> d4(d3);
//	printDeque(d4);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺deque������vector�����Ĺ��췽ʽ����һ�£����ʹ�ü���