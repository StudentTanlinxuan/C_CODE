#include"speechManager.h"


void test1()
{
	SpeechManager SM;

	  // ���Դ���
	for (map<int, Speaker>::const_iterator it = SM.m_Speaker.begin(); it != SM.m_Speaker.end(); it++)
	{
		cout << "���Ϊ��" << (*it).first << "����" << (*it).second.m_Name << "��һ�ֳɼ�Ϊ��" << (*it).second.m_Score[0] << "�ڶ��ֳɼ�Ϊ��" << (*it).second.m_Score[1] << endl;
	}
	SM.startSpeech();

	// ���Դ���
	for (map<int, Speaker>::const_iterator it = SM.m_Speaker.begin(); it != SM.m_Speaker.end(); it++)
	{
		cout << "���Ϊ��" << (*it).first << "����" << (*it).second.m_Name << "��һ�ֳɼ�Ϊ��" << (*it).second.m_Score[0] << "�ڶ��ֳɼ�Ϊ��" << (*it).second.m_Score[1] << endl;
	}
}

int main()
{
	//srand((unsigned int)time(NULL));
	//test1();
	SpeechManager SM;
	//SM.startSpeech();

	//  // ���Դ���
	//for (map<int, Speaker>::const_iterator it = SM.m_Speaker.begin(); it != SM.m_Speaker.end(); it++)
	//{
	//	cout << "���Ϊ��" << (*it).first << "����" << (*it).second.m_Name << "��һ�ֳɼ�Ϊ��" << (*it).second.m_Score[0] << "�ڶ��ֳɼ�Ϊ��" << (*it).second.m_Score[1] << endl;
	//}
	int input = 0;
	while (1)
	{
		SM.show_menu();
		cout << "���������ѡ��" << endl;
		cin >> input;

		switch (input)
		{
		case 1:		// ��ʼ�ݽ�����
			SM.startSpeech();
			break;
		case 2:		// �鿴�����¼
			SM.showRecord();
			break;
		case 3:		// ��ձ�����¼
			SM.clearRecord();
			break;
		case 0:		// �˳���������
			SM.exitsystem();
			break;
		default:
			cout << "�����������������" << endl;
			break;
		}
	}
	// ÿһ��switch��֧�ж����������Ĳ��� system("pause");
	return 0;
}