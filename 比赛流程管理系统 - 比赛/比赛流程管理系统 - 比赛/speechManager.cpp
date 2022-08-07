#include"speechManager.h"

// ��ӡ�˵�
void SpeechManager::show_menu()
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
	// ����exit����ִ���˳�
}

// ��ʼ������
void SpeechManager::initSprrch()
{
	// ��֤����Ϊ��
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();
	// ��ʼ����������
	this->m_Index = 1;
	// ��ʼ����¼����
	this->m_Record.clear();
}

// ����12λѡ��
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
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
	speechGame(this->v2);
	// 3. ��ʾ���ս��

	// 4. �������
	saveScore();
	// ���ñ���
	// ��ʼ������
	this->initSprrch();
	// ����ѡ��
	this->createSpeaker();
	// ��ȡ�����¼
	this->loadRecord();

	cout << "����������" << endl;
	system("pause");
	system("cls");
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
	if (this->m_Index == 1)
	{
		multimap<Speaker, int, ScoreSort> temp;
		for (int i = 0; i < v1.size() / 2; i++)
		{
			Speaker s;
			map<int, Speaker>::iterator pos = this->m_Speaker.find((v1[i]));
			s.m_Name = (*pos).second.m_Name;
			double avg = getScore();
			s.m_Score[(this->m_Index) - 1] = avg;
			temp.insert(make_pair(s, v1[i]));
			(*pos).second.m_Score[(this->m_Index) - 1] = avg;
		}

		//for (map<int, Speaker>::const_iterator it = m_Speaker.begin(); it != m_Speaker.end(); it++)
		//{
		//	cout << "���Ϊ��" << (*it).first << "����" << (*it).second.m_Name << "��һ�ֳɼ�Ϊ��" << (*it).second.m_Score[0] << "�ڶ��ֳɼ�Ϊ��" << (*it).second.m_Score[1] << endl;
		//}

		cout << "��һС��������Σ�" << endl;
		for (multimap<Speaker, int, ScoreSort>::const_iterator it = temp.begin(); it != temp.end(); it++)
		{
			cout << "���Ϊ��" << (*it).second << "����" << (*it).first.m_Name << " �ɼ�Ϊ��" << (*it).first.m_Score[(this->m_Index) - 1] << endl;
		}

		multimap<Speaker, int, ScoreSort> temp2;
		for (int i = v1.size() / 2; i < v1.size(); i++)
		{
			Speaker s;
			map<int, Speaker>::iterator pos = this->m_Speaker.find((v1[i]));
			s.m_Name = (*pos).second.m_Name;
			double avg = getScore();
			s.m_Score[(this->m_Index) - 1] = avg;
			//cout << s.m_Score[0] << endl;
			temp2.insert(make_pair(s, v1[i]));
			(*pos).second.m_Score[(this->m_Index) - 1] = avg;
		}

		cout << "�ڶ�С��������Σ�" << endl;
		for (multimap<Speaker, int, ScoreSort>::const_iterator it = temp2.begin(); it != temp2.end(); it++)
		{
			cout << "���Ϊ��" << (*it).second << "����" << (*it).first.m_Name << " �ɼ�Ϊ��" << (*it).first.m_Score[(this->m_Index) - 1] << endl;
		}
		cout << "------------- ��" << this->m_Index << "�ֱ������------------------- " << endl;
		
		//for (map<int, Speaker>::const_iterator it = m_Speaker.begin(); it != m_Speaker.end(); it++)
		//{
		//	cout << "���Ϊ��" << (*it).first << "����" << (*it).second.m_Name << "��һ�ֳɼ�Ϊ��" << (*it).second.m_Score[0] << "�ڶ��ֳɼ�Ϊ��" << (*it).second.m_Score[1] << endl;
		//}
		
		system("pause");
		cout << "-----------���������----------------" << endl;

		show_result(temp);
		show_result(temp2);
	}
	else
	{
		multimap<Speaker, int, ScoreSort2> temp;
		for (int i = 0; i < v1.size() / 2; i++)
		{
			Speaker s;
			map<int, Speaker>::iterator pos = this->m_Speaker.find((v1[i]));
			s.m_Name = (*pos).second.m_Name;
			double avg = getScore();
			s.m_Score[(this->m_Index) - 1] = avg;
			//cout << s.m_Score[0] << endl;
			temp.insert(make_pair(s, v1[i]));
			(*pos).second.m_Score[(this->m_Index) - 1] = avg;
		}

		cout << "��һС��������Σ�" << endl;
		for (multimap<Speaker, int, ScoreSort2>::const_iterator it = temp.begin(); it != temp.end(); it++)
		{
			cout << "���Ϊ��" << (*it).second << "����" << (*it).first.m_Name << " �ɼ�Ϊ��" << (*it).first.m_Score[(this->m_Index) - 1] << endl;
		}

		multimap<Speaker, int, ScoreSort2> temp2;
		for (int i = v1.size() / 2; i < v1.size(); i++)
		{
			Speaker s;
			map<int, Speaker>::iterator pos = this->m_Speaker.find((v1[i]));
			s.m_Name = (*pos).second.m_Name;
			double avg = getScore();
			s.m_Score[(this->m_Index) - 1] = avg;
			//cout << s.m_Score[0] << endl;
			temp2.insert(make_pair(s, v1[i]));
			(*pos).second.m_Score[(this->m_Index) - 1] = avg;
		}

		cout << "�ڶ�С��������Σ�" << endl;
		for (multimap<Speaker, int, ScoreSort2>::const_iterator it = temp2.begin(); it != temp2.end(); it++)
		{
			cout << "���Ϊ��" << (*it).second << "����" << (*it).first.m_Name << " �ɼ�Ϊ��" << (*it).first.m_Score[(this->m_Index) - 1] << endl;
		}
		cout << "------------- ��" << this->m_Index << "�ֱ������------------------- " << endl;
		
		//for (map<int, Speaker>::const_iterator it = m_Speaker.begin(); it != m_Speaker.end(); it++)
		//{
		//	cout << "���Ϊ��" << (*it).first << "����" << (*it).second.m_Name << "��һ�ֳɼ�Ϊ��" << (*it).second.m_Score[0] << "�ڶ��ֳɼ�Ϊ��" << (*it).second.m_Score[1] << endl;
		//}
		
		system("pause");
		cout << "-----------���������----------------" << endl;
		show_result2(temp, temp2);
	}
}

// �����ʾ
void SpeechManager::show_result(multimap<Speaker, int, ScoreSort> temp)
{
	multimap<Speaker, int, ScoreSort> m;
	multimap<Speaker, int, ScoreSort> m2;
	m2 = temp;
	multimap<Speaker, int, ScoreSort>::iterator it = m2.begin();
	int i = 3;
	while (i--)
	{
		it++;
	}
	m2.erase(it, m2.end());

	m = m2;


	for (multimap<Speaker, int, ScoreSort>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		this->v2.push_back((*it).second);
		cout << "���Ϊ��" << (*it).second << "����" << (*it).first.m_Name << " �ɼ�Ϊ��" << (*it).first.m_Score[(this->m_Index) - 1] << endl;
	}
	system("pause");
	system("cls");
}

// �����ʾ
void SpeechManager::show_result2(multimap<Speaker, int, ScoreSort2> temp, multimap<Speaker, int, ScoreSort2> temp2)
{

	this->mVictory.insert(temp.begin(), temp.end());

	this->mVictory.insert(temp2.begin(), temp2.end());

	int count = 0;
	for (multimap<Speaker, int, ScoreSort2>::const_iterator it = this->mVictory.begin(); it != this->mVictory.end() && count < 3; it++, count++)
	{
		this->vVictory.push_back((*it).second);
		cout << "���Ϊ��" << (*it).second << "����" << (*it).first.m_Name << " �ɼ�Ϊ��" << (*it).first.m_Score[(this->m_Index) - 1] << endl;
	}
	system("pause");
	system("cls");
}

// ������
void SpeechManager::saveScore()
{
	// ����ͷ�ļ�
// #include<fstream>

// ����������
	ofstream ofs;

	// ���ļ�
	ofs.open("speech.csv", ios::out);

	// д�ļ�

	int count = 0;
	for (multimap<Speaker, int, ScoreSort2>::const_iterator it = this->mVictory.begin(); it != this->mVictory.end() && count < 3; it++, count++)
	{
		ofs << (*it).second << "," << (*it).first.m_Score[1] << "," ;
	}
	ofs << endl;

	// �ر��ļ�
	ofs.close();

	cout << "�����ļ��ɹ�" << endl;

	// �м�¼�ˣ��ļ���Ϊ��
	this->fileIsEmpty = false;
}

//��ȡ��¼
void SpeechManager::loadRecord()
{
	// ���ļ�

	// 1. ����ͷ�ļ�
	// #include<fstream>

	// 2. ����������
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

// ��ʾ����÷�
void SpeechManager::showRecord()
{
	if (this->fileIsEmpty)
	{
		cout << " �ļ������ڻ��¼Ϊ��! " << endl;
	}
	/*cout << this->m_Record.size() << endl;

	cout << this->m_Record[0][0] << endl;
	cout << this->m_Record[0][1] << endl;
	cout << this->m_Record[1][0] << endl;
	cout << this->m_Record[1][1] << endl;
	cout << this->m_Record[2][0] << endl;
	cout << this->m_Record[2][1] << endl;*/
	//cout << this->m_Record[0][2] << endl;
	//cout << this->m_Record[0][3] << endl;
	//cout << this->m_Record[0][4] << endl;
	//cout << this->m_Record[0][5] << endl;

	//for (map<int, vector<string>>::iterator it = this->m_Record.begin(); it != this->m_Record.end(); it++)
	//{
	//	cout << (*it).first << " " << (*it).second.at(1) << " ";
	//}

	//for (int i = 0; i < this->m_Record.size() - 2; i++)
	//{
	//	cout << "��" << i + 1 << "�� " <<
	//		"�ھ���ţ�" << this->m_Record[i][0] << " �÷֣�" << this->m_Record[i][1] << " "
	//		"�Ǿ���ţ�" << this->m_Record[i + 1][0] << " �÷֣�" << this->m_Record[i + 1][1] << " "
	//		"������ţ�" << this->m_Record[i + 2][0] << " �÷֣�" << this->m_Record[i + 2][1] << endl;
	//}

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

// ��ռ�¼
void SpeechManager::clearRecord()
{
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//��ģʽ ios::trunc �������ɾ���ļ������´���
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();

		//��ʼ������
		this->initSprrch();

		//����ѡ��
		this->createSpeaker();

		//��ȡ�����¼
		this->loadRecord();


		cout << "��ճɹ���" << endl;
	}

	system("pause");
	system("cls");
}
