// 3.1.9 string �ִ�
// ���ã����ַ����л�ȡ��Ҫ���ִ�
// ����ԭ�ͣ�string substr(int pos = 0, int n = npos)const;// ������posλ�ÿ�ʼ��n���ַ���ɵ��ַ���

#include<iostream>
#include<string>

using namespace std;

void test1()
{
	string str = "abcdefg";
	string subStr = str.substr(1, 3);

	cout << "str = " << str << endl;
	cout << "subStr = " << subStr << endl;

}
// ʵ�ò���
void test2()
{
	string email = "tanlinxuan@sina.com";

	// �������ַ�л�ȡ �û�����Ϣ

	// �ҵ�@��λ��
	int pos = email.find("@");// 10
	cout << pos << endl;

	// ��email�н�ȡ�û���Ϣ
	string usrName = email.substr(0, pos);// ������⣺���ĸ�λ�ÿ�ʼ��ȡ���ٸ����ҷ��ؽ�ȡ�����ַ���
	cout << usrName << endl;
}

int main()
{
	//test1();
	test2();
	return 0;
}
// �ܽ᣺�����������Ӵ����ܣ�������ʵ�ʿ����л�ȡ����Ч����Ϣ