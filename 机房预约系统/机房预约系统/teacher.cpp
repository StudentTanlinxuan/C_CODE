#include"teacher.h"

// Ĭ�Ϲ���
Teacher::Teacher()
{

}

// �вι���(ְ����ţ�����������)
Teacher::Teacher(int empId, string name, string pwd)
{

}

// �˵�չʾ
void Teacher::operMenu()
{
	int select = 0;
	do
	{
		cout << "��ӭ��ʦ��" << this->m_Name << "��¼!" << endl;

		cout << "\t\t ---------------------------------- \n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          1. �鿴����ԤԼ         |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          2. ���ԤԼ             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          0. ע����¼             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t ---------------------------------- \n";

		cout << "���������ѡ��>:" << endl;
		cin >> select;
		switch (select)
		{
		case 1:
			// �鿴����ԤԼ
			break;
		case 2:
			// ���ԤԼ
			break;
		case 0:
			// ע����¼
			cout << "ע���ɹ���" << endl;
			system("pause");
			return;
			break;
		default:
			cout << "����������������룡" << endl;
			system("pause");
			system("cls");
			break;
		}
	} while (select);
	system("pause");

}

// �鿴����ԤԼ
void Teacher::showAllOrder()
{

}

// ���ԤԼ
void Teacher::vallidOrder()
{
	
}