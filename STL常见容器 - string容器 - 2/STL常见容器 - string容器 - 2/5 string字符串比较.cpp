//// 3.1.6 string�ַ����Ƚ�
//// ���ã��Ƚ������ַ���
//// �ȽϷ�ʽ���ַ����Ƚ��ǰ��ַ�ASCII����бȽ�
//// = ����0       > ����1        < ����-1
//// ����ԭ�ͣ�
//// int compare(const string& s)const;// ���ַ���s���бȽ�
//// int compare(const char* s)const;// ���ַ���s���бȽ�
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void test1()
//{
//	string str1 = "hello";
//	string str2 = "xello";// �ȽϷ�ʽ��ͨ��ASCII��ֵ������бȽ�
//
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1����str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1����str2" << endl;
//	}
//	else
//	{
//		cout << "str1С��str2" << endl;
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺�ַ����Ա���Ҫ���ڱȽ������ַ����Ƿ���ȣ��ж�˭��˭С�����岢���Ǻܴ�