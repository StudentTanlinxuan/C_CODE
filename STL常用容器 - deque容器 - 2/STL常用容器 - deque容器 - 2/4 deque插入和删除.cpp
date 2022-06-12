//// 3.3.5 deque�����ɾ��
//// ���ã���deque�����в����ɾ������
//// ����ԭ�ͣ�
//// ���˲��������
//// push_back(elem); // ������β������һ������
//// push_front(elem); // ������ͷ������һ������
//// pop_back(); // ������β��ɾ��һ������
//// pop_front(); // ������ͷ��ɾ��һ������
//// ָ��λ�ò�����
//// insert(pos, elem); // ��posλ�ô�����elem
//// insert(pos, n, elem); // ��posλ�ô�����n��elem
//// insert(pos, beg, end); // ��posλ�ô��������в���[beg,end)��������е�����
//// clear(); // ��������е�����
//// erase(beg, end); // ɾ��[beg,end)֮�������
//// erase(pos); // ɾ��posλ�ô�������
//
//#include<iostream>
//#include<deque>
//
//using namespace std;
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//// ���˲�������
//void test1()
//{
//	deque<int> d1;
//
//	// β��
//	d1.push_back(10);
//	d1.push_back(20);
//	
//	// ͷ��
//	d1.push_front(100);
//	d1.push_front(200);
//	// 200 100 10 20
//	printDeque(d1);
//
//	// βɾ
//	d1.pop_back();
//	// 200 100 10 
//	printDeque(d1);
//
//	// ͷɾ
//	d1.pop_front();
//	// 100 10
//	printDeque(d1);
//}
//
//// ָ��λ�ò�������
//void test2()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//
//	printDeque(d1);
//	// ��ĳ��λ�ò���һ����
//	d1.insert(d1.begin(), 11);
//	printDeque(d1);
//	// ��ĳ��λ�ò���n��elem
//	d1.insert(d1.begin(), 2, 22);
//	printDeque(d1);
//
//	deque<int> d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//	// ��ĳ��λ�ò���һ������
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	printDeque(d1);
//}
//
//// ָ��λ��ɾ��
//void test3()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	// 200 100 10 20
//	printDeque(d1);
//
//	// ������׼��һ��������,����ʹ������ƫ����ָ������λ�õ�����
//	deque<int>::iterator it = d1.end();
//	d1.erase(--it);
//	// 200 100 10 
//	printDeque(d1);
//
//	// �����䷽ʽɾ��
//	//d1.erase(d1.begin(), d1.end());
//	// ���
//	d1.clear();
//	printDeque(d1);
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}
//// �ܽ᣺�����ɾ���ṩ��λ�ö��ǵ������������ṩ����ֵ������1��2��3��
////			push_back();	β��
////			push_front();	ͷ��
////			pop_back();		βɾ
////			pop_front();	ͷɾ
