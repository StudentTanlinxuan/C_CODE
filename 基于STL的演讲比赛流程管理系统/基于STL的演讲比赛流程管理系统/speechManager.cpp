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
