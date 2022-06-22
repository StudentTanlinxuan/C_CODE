/*4.3.4 �߼��º���
* ���ã�ʵ���߼�����
* **����ԭ�ͣ�**
* template<class T> bool logical_and<T>                //�߼���
* template<class T> bool logical_or<T>                //�߼���
* template<class T> bool logical_not<T>              //�߼���
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

void test1()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	// �߼��� ��v�е����ݰ�����v2�У���ִ��ȡ������
	vector<bool> v2;
	v2.resize(v.size()); // ����Ҫ����ָ��v2��������С����Ȼ�Ų���ȥ����

	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	test1();
	return 0;
}