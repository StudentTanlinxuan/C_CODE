/*3.10 ���� - Ա������
* #### 3.10.1 ��������
* ��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
* Ա����Ϣ��: ����  ������ɣ����ŷ�Ϊ���߻����������з�
* �����10��Ա�����䲿�ź͹���
* ͨ��multimap������Ϣ�Ĳ���  key(���ű��) value(Ա��)
* �ֲ�����ʾԱ����Ϣ

#### 3.10.2 ʵ�ֲ���
1. ����10��Ա�����ŵ�vector��
2. ����vector������ȡ��ÿ��Ա���������������
3. ����󣬽�Ա�����ű����Ϊkey������Ա����Ϊvalue�����뵽multimap������
4. �ֲ�����ʾԱ����Ϣ
*/


#include<iostream>
#include<string>
#include<vector>
#include<ctime>
#include<map>

using namespace std;

class Staff
{
public:
	Staff(string name, int sal, int dept)
	{
		this->m_Name = name;
		this->m_Sal = sal;
		this->m_Dept = dept;
	}
public:
	string m_Name;
	int m_Sal; // salary нˮ
	int m_Dept; // department ����
};
int main()
{
	srand((unsigned)time(NULL));

	// 1. ����10��Ա�����ŵ�vector��
	string name = "ABCDEFGHIJ";
	vector<Staff> v;
	for (int i = 0; i < 10; i++)
	{
		string s_name; 
		s_name += name[i];

		int s_sal = 0;
		int s_dept = 0;
		Staff s(s_name,s_sal,s_dept);
		v.push_back(s);
	}

	//// �����Ƿ�ʮ��Ա�����뵽����v��
	//for (vector<Staff>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "������" << it->m_Name << " ���ʣ�" << (*it).m_Sal << endl;
	//}

	
	// 2. ����vector������ȡ��ÿ��Ա���������������
	for (vector<Staff>::iterator it = v.begin(); it != v.end(); it++)
	{
		// ���ʷ�Χ4000 - 6000
		it->m_Sal = rand() % (6000 - 4000 + 1) + 4000;
		// ���ŷ�Ϊ���߻�(1)������(2)���з�(3)
		it->m_Dept = rand() % (3 - 1 + 1) + 1;
	}

	//cout << rand() % (6000 - 4000 + 1) + 4000 << endl;
	// n - m
	// rand() % (m - n + 1) + n
	
	// 3. ����󣬽�Ա�����ű����Ϊkey������Ա����Ϊvalue�����뵽multimap������
	multimap<int, string> m;

	for (int i = 0; i < v.size(); i++)
	{
		m.insert(make_pair(v[i].m_Dept, v[i].m_Name));
	}

	//for (multimap<int, string>::iterator it = m.begin(); it != m.end(); it++)
	//{
	//	cout << "key = " << it->first << " value = " << it->second << endl;
	//}
	
	// 4. �ֲ�����ʾԱ����Ϣ
	
	// ���ŷ�Ϊ���߻�(1)������(2)���з�(3)
	// �߻���
	cout << "�߻���" << endl;
	for (vector<Staff>::iterator it = v.begin(); it != v.end(); it++)
	{
		if (it->m_Dept == 1)
		cout << "������" << it->m_Name << " ���ʣ�" << (*it).m_Sal << endl;
	}
	cout << endl;
	// ������
	cout << "������" << endl;
	for (vector<Staff>::iterator it = v.begin(); it != v.end(); it++)
	{
		if (it->m_Dept == 2)
			cout << "������" << it->m_Name << " ���ʣ�" << (*it).m_Sal << endl;
	}
	cout << endl;
	// �з���
	cout << "�з���" << endl;
	for (vector<Staff>::iterator it = v.begin(); it != v.end(); it++)
	{
		if (it->m_Dept == 3)
			cout << "������" << it->m_Name << " ���ʣ�" << (*it).m_Sal << endl;
	}

	return 0;
}

//#include<iostream>
//using namespace std;
//#include <vector>
//#include <string>
//#include <map>
//#include <ctime>

/*
- ��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
- Ա����Ϣ��: ����  ������ɣ����ŷ�Ϊ���߻����������з�
- �����10��Ա�����䲿�ź͹���
- ͨ��multimap������Ϣ�Ĳ���  key(���ű��) value(Ա��)
- �ֲ�����ʾԱ����Ϣ
*/

//#define CEHUA  0
//#define MEISHU 1
//#define YANFA  2
//
//class Worker
//{
//public:
//	string m_Name;
//	int m_Salary;
//};
//
//void createWorker(vector<Worker>& v)
//{
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker worker;
//		worker.m_Name = "Ա��";
//		worker.m_Name += nameSeed[i];
//
//		worker.m_Salary = rand() % 10000 + 10000; // 10000 ~ 19999
//		//��Ա�����뵽������
//		v.push_back(worker);
//	}
//}
//
////Ա������
//void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//����������ű��
//		int deptId = rand() % 3; // 0 1 2 
//
//		//��Ա�����뵽������
//		//key���ű�ţ�value����Ա��
//		m.insert(make_pair(deptId, *it));
//	}
//}
//
//void showWorkerByGourp(multimap<int, Worker>& m)
//{
//	// 0  A  B  C   1  D  E   2  F G ...
//	cout << "�߻����ţ�" << endl;
//
//	multimap<int, Worker>::iterator pos = m.find(CEHUA);
//	int count = m.count(CEHUA); // ͳ�ƾ�������
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "������ " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
//	}
//
//	cout << "----------------------" << endl;
//	cout << "�������ţ� " << endl;
//	pos = m.find(MEISHU);
//	count = m.count(MEISHU); // ͳ�ƾ�������
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "������ " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
//	}
//
//	cout << "----------------------" << endl;
//	cout << "�з����ţ� " << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA); // ͳ�ƾ�������
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "������ " << pos->second.m_Name << " ���ʣ� " << pos->second.m_Salary << endl;
//	}
//
//}
//
//int main() {
//
//	srand((unsigned int)time(NULL));
//
//	//1������Ա��
//	vector<Worker>vWorker;
//	createWorker(vWorker);
//
//	//2��Ա������
//	multimap<int, Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//
//	//3��������ʾԱ��
//	showWorkerByGourp(mWorker);
//
//	////����
//	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
//	//{
//	//	cout << "������ " << it->m_Name << " ���ʣ� " << it->m_Salary << endl;
//	//}
//
//	system("pause");
//
//	return 0;
//}