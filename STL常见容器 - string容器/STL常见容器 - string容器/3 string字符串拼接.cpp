// 3.1.4 string�ַ���ƴ��
// ʵ�����ַ���ĩβƴ���ַ���
// ����ԭ�ͣ�
// string& operator+=(const char* str);// ����+=������
// string& operator+=(const char c);// ����+=������
// string& operator+=(const string& str);// ����+=������
// string& append(const char* s);// ���ַ���s���ӵ���ǰ�ַ�����β
// string& append(const char* s, int n);// ���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
// string& append(const string& s);// ͬoperator+=(const string& str)
// string& append(const string& s, int pos, int n);// �ַ���s�дӵ�pos��λ�ÿ�ʼ��n���ַ����ӵ���ǰ�ַ�����β

#include<iostream>

using namespace std;
void test1()
{
	const char* str = "��";
	string str1;
	str1 += str;
	cout << "str1 = " << str1 << endl;

	const char str2 = 'w';
	str1 += str2;
	str1 += 'y';
	cout << "str1 = " << str1 << endl;

	string str3 = "NBA2K LOL";
	str1 += str3;
	cout << "str1 = " << str1 << endl;

	string str4;
	str4.append(str);
	cout << "str4 = " << str4 << endl;

	const char* str5 = "love ya";
	str4.append(str5, 4);
	cout << "str4 = " << str4 << endl;

	str4.append(str3);
	cout << "str4 = " << str4 << endl;

	str4.append(str3, 6, 4);// ����2 ���ĸ�λ�ÿ�ʼ��ȡ������3 ��ȡ���ַ�����
	cout << "str4 = " << str4 << endl;
}
int main()
{
	test1();
	return 0;
}
// �ܽ᣺�ַ���ƴ�ӵ����ذ汾�ܶ࣬��ѧ�׶μ�ס��������