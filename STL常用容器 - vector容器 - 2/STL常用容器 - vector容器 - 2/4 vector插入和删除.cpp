//// 3.2.5 vector�����ɾ��
//// ���ã���vector�������в����ɾ��
//// ����ԭ�ͣ�push_back(elem); // β������Ԫ��
//// pop_back(); // ɾ�����һ��Ԫ��
//// insert(const_iterator pos, ele); // ������ָ��λ�ò���pos����Ԫ��ele
//// insert(const_iterator pos, int count, ele); // ������ָ��λ��pos����count��Ԫ��ele
//// erase(const_iterator pos); // ɾ��������ָ���Ԫ��
//// erase(const_iterator start, const_iterator end);// ɾ����������start��end֮���Ԫ��
//// clear(); // ɾ������������Ԫ��
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//void printVector(vector<int>& v)
//{
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
//	// β������
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	// ����
//	printVector(v1);
//
//	// βɾ
//	v1.pop_back();
//	printVector(v1);
//
//	// ����  ��һ�������ǵ�����
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//	// ��������ذ汾  ��������ָ��λ�ò������ɸ���
//	v1.insert(v1.begin(), 3, 1000);
//	printVector(v1);
//
//	// ɾ��  ��һ������Ҳ�ǵ�����
//	v1.erase(v1.begin());
//	printVector(v1);
//	// ɾ�������ذ汾  ɾ������������֮�������
//	//v1.erase(v1.begin(), v1.end());
//	// �൱���ṩ��clear();  ���
//	v1.clear();
//	printVector(v1);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺push_back(); // β��
////		 pop_back(); // βɾ
////		 insert(); // ����(λ��Ϊ������)
////		 erase(); // ɾ��(λ��Ϊ������)
////		 clear(); // ���
//// 