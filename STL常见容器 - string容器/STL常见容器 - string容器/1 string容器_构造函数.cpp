//// 3.1.2 string����_���캯��
//// ���캯��ԭ�ͣ�
//// string();  // �൱���޲ι���  ����һ�����ַ���
//// string(const char* s);  // �൱���вι���  ʹ���ַ�s�����ʼ��
//// string(const string& str);  // �൱�ڿ�������  ʹ��һ��string�������һ��string�����ʼ��
//// string(int n, char c);  // ʹ��n���ַ�c��ʼ��
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void test1()
//{
//	// �൱���޲ι���
//	string s1;
//
//	// �൱���вι���
//	const char* s = "hello worder";
//	string s2(s);
//	cout << "s2 = " << s2 << endl;
//
//	// �൱�ڿ�������
//	string s3(s2);
//	cout << "s3 = " << s3 << endl;
//
//	// ʹ��n���ַ���ʼ��
//	string s4(10, 's');
//	cout << "s4 = " << s4 << endl;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺string�Ķ��ֹ��췽ʽû�пɱ��ԣ����ʹ�ü���