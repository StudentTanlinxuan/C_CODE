//// 3.7.5 list���������ɾ��
//// ���ã���list���������ݽ��в����ɾ��
//// ����ԭ�ͣ�
///*
//* push_back(elem);//������β������һ��Ԫ��
//* pop_back();//ɾ�����������һ��Ԫ��
//* push_front(elem);//��������ͷ����һ��Ԫ��
//* pop_front();//��������ͷ�Ƴ���һ��Ԫ��
//* insert(pos,elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
//* insert(pos,n,elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
//* insert(pos,beg,end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//* clear();//�Ƴ���������������
//* erase(beg,end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//* erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//* remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�
//*/
//
//#include<iostream>
//#include<list>
//
//using namespace std;
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test1()
//{
//	list<int> L;
//
//	// push_backβ��
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	// push_frontͷ��
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	// ��ӡ
//	// 300 200 100 10 20 30
//	printList(L);
//
//	// pop_backβɾ
//	// 300 200 100 10 20 
//	L.pop_back();
//	printList(L);
//
//	// pop_frontͷɾ
//	// 200 100 10 20
//	L.pop_front();
//	printList(L);
//
//	// insert����
//	list<int>::iterator it = L.begin();
//	//list<int>::iterator it2 = L.begin();
//	//it2 = L.insert((++it),1000); // it2��λ�þ��ǲ������1000��λ��
//	L.insert((++it),1000);
//	// 200 1000 100 10 20
//	// cout << *it2 << endl;
//	printList(L);
//
//	// eraseɾ��
//	it = L.begin();
//	L.erase(++it);
//	// 200 100 10 20
//	printList(L);
//
//	// remove�Ƴ�  
//	L.push_back(1000);
//	L.push_back(1000);
//	L.push_back(1000);
//	L.push_back(1000);
//	printList(L);
//	L.remove(1000); // ������������1000�����ݶ�ɾ��
//	printList(L);
//
//	// clear���
//	L.clear();
//	printList(L);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺
//// β�� -- push_back();
//// ͷ�� -- push_front();
//// βɾ -- pop_back();
//// ͷɾ -- pop_front();
//// ���� -- insert
//// ɾ�� -- erase
//// �Ƴ� -- remove
//// ��� -- clear