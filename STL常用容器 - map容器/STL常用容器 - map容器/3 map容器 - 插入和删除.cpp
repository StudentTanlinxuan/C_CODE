/*3.9.4 map�����ɾ��
* ���ã�map�������в������ݺ�ɾ������
* ����ԭ�ͣ�
* insert(elem); // �������в�������
* clear(); // �������
* erase(pos); //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
* erase(beg,end); //ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
* erase(key); //ɾ��������ֵΪkey��Ԫ�ء�
*/

#include<iostream>
#include<map>

using namespace std;

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test1()
{
	map<int, int> m;
	
	// ����
	// ��һ��
	m.insert(pair<int, int>(1, 10));
	// �ڶ���
	m.insert(make_pair(2, 20));
	// ������
	m.insert(map<int, int>::value_type(3, 30));// map�����������µ�ֵ����(key,value)
	// ������
	m[4] = 40;

	// []��������룬ԭ�����д��һ��������û�е�keyֵ�����Զ�������һ��key = �����ֵ��value = 0 ��һ�Զ���
	// ��; ��������key���ʵ�value
	cout << m[4] << endl;
	printMap(m);

	// ɾ��
	m.erase(m.begin());
	printMap(m);

	m.erase(3); // ����key��ֵɾ��
	printMap(m);

	// ���
	//m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);

}

int main()
{
	test1();
	return 0;
}
// �ܽ᣺map���뷽ʽ�ܶ࣬��סһ������
//       erase() -- ɾ��       clear() -- ���   insert() -- ����