//// 3.1.8 string����ɾ��
//// ���ã���string�ַ������в����ɾ���ַ�����
//// ����ԭ�ͣ�
//// string& insert(int pos, const char* s);// �����ַ���
//// string& insert(int pos, const string& s);// �����ַ���
//// string& insert(int pos, int n, char c);// ��ָ����λ�ò���n���ַ�c
//// string& erase(int pos, int n = npos);// ɾ����posλ�ÿ�ʼ��n���ַ�
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void test1()
//{
//	string str1 = "hello";
//	string str2 = "world";
//	const char* str3 = "C++";
//
//	// ����
//	str1.insert(5,str3);
//	cout << "str1 = " << str1 << endl;
//
//	str1.insert(5, 3, 'C');
//	cout << "str1 = " << str1 << endl;
//
//	// ɾ��
//	str1.erase(5, 3);
//	cout << "str1 = " << str1 << endl;
//
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺�����ɾ�����±궼�Ǵ�0��ʼ��