//// 3.1.3 string��ֵ����
//// ��ֵ�ĺ���ԭ�ͣ�
//// string& operator=(const char* s);// ��char*���͵��ַ�����ֵ����ǰ���ַ���
//// string& operator=(const string& s);// ���ַ���s��ֵ����ǰ�ַ���
//// string& operator=(const char c);// ���ַ�c��ֵ����ǰ�ַ���
//// string& assign(const char* s);// ��char*���͵��ַ�����ֵ����ǰ���ַ���
//// string& assign(const char* s, int n);// ��char*���͵��ַ�����ǰn���ַ���ֵ����ǰ�ַ���
//// string& assign(const string& s);// ���ַ���s��ֵ����ǰ�ַ���
//// string& assign(int n, char c);// ��n���ַ�c��ֵ����ǰ�ַ���
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void test1()
//{
//	string str1;
//	str1 = "hello world";
//	cout << "str1 = " << str1 << endl;
//
//	string str2;
//	str2 = str1;
//	cout << "str2 = " << str2 << endl;
//
//	string str3;
//	str3 = 'd';
//	cout << "str3 = " << str3 << endl;
//
//	string str4;
//	str4.assign("hello C++");
//	cout << "str4 = " << str4 << endl;
//
//	string str5;
//	str5.assign("what", 3);
//	cout << "str5 = " << str5 << endl;
//
//	string str6;
//	str6.assign(str5);
//	cout << "str6 = " << str6 << endl;
//
//	string str7;
//	str7.assign(10,'r');
//	cout << "str7 = " << str7 << endl;
//
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺string��ֵ��ʽ�ܶ࣬operator���ַ�ʽ�ǱȽ�ʵ�õ�