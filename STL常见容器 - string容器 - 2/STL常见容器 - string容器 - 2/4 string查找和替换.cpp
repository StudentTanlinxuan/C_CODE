//// 3.1.5 string���Һ��滻
//// ���ң�����ָ���ַ����Ƿ����
//// �滻����ָ��λ���滻�ַ���
//// ����ԭ�ͣ�
//// int find(const string& str, int pos = 0)const;// ����str��һ�γ��ֵ�λ�ã���pos��ʼ����
//// int find(const char* s, int pos = 0)const;// ����s��һ�γ��ֵ�λ�ã���pos��ʼ����
//// int find(const char* s, int pos, int n)const;// ��pos��λ�ÿ�ʼ����s��ǰn���ַ���һ�γ��ֵ�λ��
//// int find(const char c, int pos = 0)const;// �����ַ�c��һ�γ��ֵ�λ�ã���pos��ʼ����
//// int rfind(const string& str, int pos = npos)const;// ����str���һ�γ��ֵ�λ�ã���pos��ʼ����
//// int rfind(const char* s, int pos = 0)const;// ����s���һ�γ��ֵ�λ�ã���pos��ʼ����
//// int rfind(const char* s, int pos, int n)const;// ��posλ�ÿ�ʼ����s��ǰn���ַ����һ�γ��ֵ�λ��
//// int rfind(const char c, int pos = 0)const;// �����ַ�c���һ�γ��ֵ�λ�ã���pos��ʼ����
//// string& replace(int pos, int n, const string& str);// �滻��posλ�ÿ�ʼn���ַ�Ϊ�ַ���str
//// string& replace(int pos, int n, const char* s);// �滻posλ�ÿ�ʼn���ַ�Ϊ�ַ���s
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//// ����
//void test1()
//{
//	// find
//	string str1 = "abcdefcd";
//	int pos = str1.find("cd");// 2  ��Ϊ��Ϊ��һ��λ��Ϊ0
//	//int pos = str1.find("cf");// -1 ����ڸ��ַ������Ҳ����ִ��򷵻�-1
//	if (pos == -1)
//	{
//		cout << "δ�ҵ��ַ���" << endl;
//	}
//	else
//	{
//		cout << "�ҵ����ַ�����pos = " << pos << endl;
//	}
//	// rfind
//	pos = str1.rfind("cf");
//	// rfind��find����
//	// find�Ӵ������Ҳ�   rfind���������  ���Ƕ��Ǵ�������������λ��
//	cout << "pos = " << pos << endl;
//}
//// �滻
//void test2()
//{
//	string str = "abcdefg";
//	// ��1��λ���� 3���ַ� �滻��"1111"
//	str.replace(1, 3, "1111");
//	cout << "str = " << str << endl;
//}
//int main()
//{
//	test1();
//	//test2();
//	return 0;
//}
//// �ܽ᣺1. rfind�Ǵ��������  find�Ǵ������Ҳ�   ����λ�ö��Ǵ���������
////       2. find��rfind�ҵ��ַ����󷵻ز��ҵĵ�һ���ַ���λ�ã�û���ҵ�����-1
////       3. replace���滻ʱ��Ҫָ�����ĸ�λ���𣬶��ٸ��ַ����滻��ʲô�����ַ��� 