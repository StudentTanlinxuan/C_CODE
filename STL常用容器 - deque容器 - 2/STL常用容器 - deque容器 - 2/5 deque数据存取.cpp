//// 3.3.6 deque���ݴ�ȡ
//// ���ã���deque���������ݽ��д�ȡ����
//// ����ԭ�ͣ�
//// at(int idex); // ��������idex��ָ������
//// operator[]; // ��������idex��ָ������ 
//// front(); // ���������е�һ��������Ԫ��
//// back(); // �������������һ��������Ԫ��
//
//#include<iostream>
//#include<deque>
//
//using namespace std;
//
//void test1()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//
//	d1.push_front(100);
//	d1.push_front(200);
//	d1.push_front(300);
//
//	// ͨ��[]��ʽ����Ԫ��
//	// 300 200 100 10 20 30
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1[i] << " ";
//	}
//	cout << endl;
//
//	// ͨ��at��ʽ����Ԫ��
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "d1�ĵ�һ��Ԫ��Ϊ��" << d1.front() << endl;
//	cout << "d1�����һ��Ԫ��Ϊ��" << d1.back() << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺����ʹ�õ�������ʽ����������Ԫ�أ�[]��at��ʽҲ����
////		 front(); // ���������е�һ��Ԫ��
////		 back(); // �������������һ��Ԫ��
//// 