#include"speechManager.h"


void test1()
{
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
		SM.show_mnue();
		cout << "���������ѡ��" << endl;
		cin >> input;

		switch (input)
		{
		case 1:		// ��ʼ�ݽ�����
			SM.startSpeech();
			system("pause");
			break;
		case 2:		// �鿴�����¼
			SM.showRecord();
			system("pause");
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
}

int main()
{
	srand((unsigned int)time(NULL));
	test1();
	return 0;
}