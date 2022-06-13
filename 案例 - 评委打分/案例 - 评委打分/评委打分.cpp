// 3.4 ��ί���
// ���������������ѡ��ABCDE��10����ί�ֱ�����ѡ�ִ�֣�ȥ����߷֣�ȥ����ͷ֣���ȡƽ����
/*
1. ��������ѡ�֣��ŵ�vector��
2. ����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
3. sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
4. deque��������һ�飬�ۼ��ܷ�
5. ��ȡƽ����
*/
#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<algorithm>
#include<ctime>

using namespace std;
// ����һ��ѡ�� ��
class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
public:
	string m_Name;
	int m_Score;
};

void CreatePlayer(vector<Person>& v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ�֣�";
		name += nameseed[i];

		// Ĭ�Ϸ�����ʱȡ0��
		int score = 0;
		Person p(name, score);
		// ��������Person����p���뵽������
		v.push_back(p);
	}
}

void GetScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			// ������Χ��60~100֮��
			int score = rand() % (41) + 60;
			d.push_back(score);
		}

		//// ����һ��d�������Ƿ񽫷�������
		//cout << "ѡ�֣� " << it->m_Name << " ��֣� " << endl;
		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		//{
		//	cout << *dit << " ";
		//}
		//cout << endl;

		// ʹ��sort�㷨Ҫ����ͷ�ļ�algorithm
		sort(d.begin(), d.end());

		// ȥ����߷ֺ���ͷ�
		d.pop_back();
		d.pop_front();

		// ��ȥ����߷ֺ���ͷֵķ�����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		// ��ƽ��ֵ
		int avg = sum / (d.size());

		// ��ÿ���˶�ƽ���ָ�ֵ��v��
		(*it).m_Score = avg;
	}
}

void ShowScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "����Ϊ��" << (*it).m_Name << "  ����Ϊ��" << (*it).m_Score << endl;
	}
}

void test1()
{
	// �������������
	srand((unsigned int)time(NULL));

	vector<Person> v;
	CreatePlayer(v);
	//// ���Դ�ӡһ��v�е�����
	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "����Ϊ��" << (*it).m_Name << "  ����Ϊ��" << (*it).m_Score << endl;
	//}

	// ����λѡ�ֱַ���
	GetScore(v);
	
	// ��ӡ���һ��ÿλѡ�ֵ����շ���
	ShowScore(v);

	//��ˣ���Ҫ����[m, n]��Χ�ڵ������num�����ã�
	//int num = rand() % (n - m + 1) + m;

	//cout << rand()%(41) + 60 << endl;
}

int main()
{
	test1();
	return 0;
}
// �ܽ᣺��ˣ���Ҫ����[m, n]��Χ�ڵ������num�����ã�
//       int num = rand() % (n - m + 1) + m;
//       ѡȡ��ͬ�������������ݣ�������ߴ����Ч��