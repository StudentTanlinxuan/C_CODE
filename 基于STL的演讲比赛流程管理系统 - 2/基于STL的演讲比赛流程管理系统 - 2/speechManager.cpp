#include"speechManager.h"

// ��ӡ�˵�
void SpeechManager::show_mnue()
{
	cout << "*****************************" << endl;
	cout << "***** ��ӭ�μ��ݽ����� ******" << endl;
	cout << "***** 1. ��ʼ�ݽ�����  ******" << endl;
	cout << "***** 2. �鿴�����¼  ******" << endl;
	cout << "***** 3. ��ձ�����¼  ******" << endl;
	cout << "***** 0. �˳���������  ******" << endl;
	cout << "*****************************" << endl;
}

// �˳�����
void SpeechManager::exitsystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

// ��ʼ������
void SpeechManager::initSprrch()
{
	// ��֤����Ϊ��
	this->v1.clear();
	this->v2.clear();
	this->vVector.clear();
	this->m_Speaker.clear();
	// ��ʼ����������
	this->m_Index = 1;
}

// ��ʼ������12λѡ��
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < 12; i++)
	{
		string name = "ѡ�֣�";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;

		for (int i = 0; i < 2; i++)
		{
			sp.m_Score[i] = 0;
		}

		// 12��ѡ�ֱ��
		this->v1.push_back(i + 10001);

		// ѡ�ֱ�� �Լ���Ӧѡ�� �����map������
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}

// ��ʼ���� - �������̿���

//class ScoreSort
//{
//public:
//	bool operator()(Speaker s1, Speaker s2) const
//	{
//		return s1.m_Score[0] > s2.m_Score[0];
//	}
//};

void SpeechManager::startSpeech()
{
	// ��һ�ֱ���
	this->m_Index = 1;
	// 1. ��ǩ
	speechDraw(this->v1);
	// 2. ����

	speechGame(this->v1);

	// 3. ��ʾ�������
	
	// �ڶ��ֱ���
	this->m_Index = 2;
	// 1. ��ǩ
	speechDraw(this->v2);
	// 2. ����
	
	cout << "-------------��" << this->m_Index << "�ֱ�����ʽ��ʼ------------------ - " << endl;
	map<Speaker, int, ScoreSort2> temp;
	for (int i = 0; i < this->v2.size(); i++)
	{
		Speaker s;
		map<int, Speaker>::iterator pos = this->m_Speaker.find((this->v2[i]));
		s.m_Name = (*pos).second.m_Name;
		double avg = getScore();
		s.m_Score[(this->m_Index) - 1] = avg;
		temp.insert(make_pair(s, this->v2[i]));
	}

	cout << "��һС��������Σ�" << endl;
	for (map<Speaker, int, ScoreSort2>::const_iterator it = temp.begin(); it != temp.end(); it++)
	{
		cout << "���Ϊ��" << (*it).second << "����" << (*it).first.m_Name << " �ɼ�Ϊ��" << (*it).first.m_Score[(this->m_Index) - 1] << endl;
	}
	system("pause");

	// 3. ��ʾ���ս��
	cout << "-----------���������----------------" << endl;
	map<Speaker, int, ScoreSort2> m;
	map<Speaker, int, ScoreSort2> m2;
	m2 = temp;
	map<Speaker, int, ScoreSort2>::iterator it = m2.begin();
	int i = 3;
	while (i--)
	{
		it++;
	}
	m2.erase(it, m2.end());

	m = m2;


	for (map<Speaker, int, ScoreSort2>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		this->vVector.push_back((*it).second);
		cout << "���Ϊ��" << (*it).second << "����" << (*it).first.m_Name << " �ɼ�Ϊ��" << (*it).first.m_Score[this->m_Index - 1] << endl;
	}
	// 4. �������
	
	// ����ͷ�ļ�

	// ����������
	ofstream ofs;

	// ���ļ�
	ofs.open("speech.csv", ios::out);

	// д�ļ�

	for (map<Speaker, int, ScoreSort2>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		ofs << (*it).second << "," << (*it).first.m_Score[1] << endl;
	}

	// �ر��ļ�
	ofs.close();

	cout << "�����ļ��ɹ�" << endl;
}

// ��ǩ
void SpeechManager::speechDraw(vector<int> v)
{
	// ��һ�ֱ�����12��ѡ������ֳ�����
	srand((unsigned int)time(NULL));
	//cout << rand() % (12 - 1 + 1) + 1 << endl;

	cout << " �ڡ�" << this->m_Index << "���ֱ���ѡ�����ڳ�ǩ" << endl;

	random_shuffle(v.begin(), v.end());
	// ʹ��random_shuffle����Ҫ�����������

	cout << "��ǩ���ݽ�˳�����£� " << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	system("pause");
}

// ��ί���
double SpeechManager::getScore()
{
	deque<int> dScore;
	// ��ί���
	for (int i = 0; i < 10; i++)
	{
		// ��ֵΪ600 ~ 1000
		double score = (rand() % (1000 - 600 + 1) + 600) / 10.f;
		//cout << score << endl;
		dScore.push_back(score);
	}
	// ����
	sort(dScore.begin(), dScore.end()); // Ĭ������

	// ȥ�� ��߷� ��ͷ�
	dScore.pop_back();
	dScore.pop_front();

	// ��ƽ����
	double sum = accumulate(dScore.begin(), dScore.end(), 0);
	// accmumlate������Ԫ���ۼ�֮��
	//cout << sum << endl;
	double avg = sum / 8;
	//cout << "avg = " << avg << endl;
	return avg;
}

// ����
void SpeechManager::speechGame(vector<int> v1)
{
	cout << "-------------��" << this->m_Index << "�ֱ�����ʽ��ʼ------------------ - " << endl;
	map<Speaker, int, ScoreSort> temp;
	for (int i = 0; i < v1.size() / 2; i++)
	{
		Speaker s;
		map<int, Speaker>::iterator pos = this->m_Speaker.find((v1[i]));
		s.m_Name = (*pos).second.m_Name;
		double avg = getScore();
		s.m_Score[(this->m_Index) - 1] = avg;
		//cout << s.m_Score[0] << endl;
		temp.insert(make_pair(s, v1[i]));
	}

	cout << "��һС��������Σ�" << endl;
	for (map<Speaker, int, ScoreSort>::const_iterator it = temp.begin(); it != temp.end(); it++)
	{
		cout << "���Ϊ��" << (*it).second << "����" << (*it).first.m_Name << " �ɼ�Ϊ��" << (*it).first.m_Score[(this->m_Index) - 1] << endl;
	}

	map<Speaker, int, ScoreSort> temp2;
	for (int i = v1.size() / 2; i < v1.size(); i++)
	{
		Speaker s;
		map<int, Speaker>::iterator pos = this->m_Speaker.find((v1[i]));
		s.m_Name = (*pos).second.m_Name;
		double avg = getScore();
		s.m_Score[(this->m_Index) - 1] = avg;
		//cout << s.m_Score[0] << endl;
		temp2.insert(make_pair(s, v1[i]));
	}

	cout << "�ڶ�С��������Σ�" << endl;
	for (map<Speaker, int, ScoreSort>::const_iterator it = temp2.begin(); it != temp2.end(); it++)
	{
		cout << "���Ϊ��" << (*it).second << "����" << (*it).first.m_Name << " �ɼ�Ϊ��" << (*it).first.m_Score[(this->m_Index) - 1] << endl;
	}
	cout << "------------- ��" << this->m_Index << "�ֱ������------------------ - " << endl;
	system("pause");

	cout << "-----------���������----------------" << endl;
	show_result(temp);
	show_result(temp2);
}

// �����ʾ
void SpeechManager::show_result(map<Speaker, int, ScoreSort> temp)
{
	map<Speaker, int, ScoreSort> m;
	map<Speaker, int, ScoreSort> m2;
	m2 = temp;
	map<Speaker, int, ScoreSort>::iterator it = m2.begin();
	int i = 3;
	while (i--)
	{
		it++;
	}
	m2.erase(it, m2.end());

	m = m2;


	for (map<Speaker, int, ScoreSort>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		this->v2.push_back((*it).second);
		cout << "���Ϊ��" << (*it).second << "����" << (*it).first.m_Name << " �ɼ�Ϊ��" << (*it).first.m_Score[0] << endl;
	}
}

//// �鿴�����¼
//void SpeechManager::find_record()
//{
//	map<int, Speaker> temp;
//	for (int i = 0; i < 3; i++)
//	{
//		Speaker s;
//		map<int, Speaker>::iterator pos = this->m_Speaker.find((this->v2[i]));
//		s.m_Name = (*pos).second.m_Name;
//		double avg = getScore();
//		s.m_Score[1] = avg;
//		temp.insert(make_pair(this->v2[i], s));
//		cout << "�ھ���" << (*pos).second.m_Name << "�ɼ���" << (*pos).second.m_Score[1] << endl;
//	}
//}


void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in); //���������� ��ȡ�ļ�

	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		cout << "�ļ������ڣ�" << endl;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ��!" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//�ļ���Ϊ��
	this->fileIsEmpty = false;

	ifs.putback(ch); //��ȡ�ĵ����ַ��Ż�ȥ

	string data;
	int index = 0;
	while (ifs >> data)
	{
		//cout << data << endl;
		vector<string>v;

		int pos = -1;
		int start = 0;

		while (true)
		{
			pos = data.find(",", start); //��0��ʼ���� ','
			if (pos == -1)
			{
				break; //�Ҳ���break����
			}
			string tmp = data.substr(start, pos - start); //�ҵ���,���зָ� ����1 ��ʼλ�ã�����2 ��ȡ����
			v.push_back(tmp);
			start = pos + 1;
		}

		this->m_Record.insert(make_pair(index, v));
		index++;
	}

	ifs.close();
}


void SpeechManager::showRecord()
{
	for (int i = 0; i < this->m_Record.size(); i++)
	{
		cout << "��" << i + 1 << "�� " <<
			"�ھ���ţ�" << this->m_Record[i][0] << " �÷֣�" << this->m_Record[i][1] << " "
			"�Ǿ���ţ�" << this->m_Record[i][2] << " �÷֣�" << this->m_Record[i][3] << " "
			"������ţ�" << this->m_Record[i][4] << " �÷֣�" << this->m_Record[i][5] << endl;
	}
	system("pause");
	system("cls");
}
