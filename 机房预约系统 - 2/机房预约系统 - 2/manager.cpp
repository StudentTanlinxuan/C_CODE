#include"manager.h"

// Ĭ�Ϲ���
Manager::Manager()
{

}

// �вι���(����Ա����������)
Manager::Manager(string name, string pwd)
{

}

// ѡ��˵�
void Manager::operMenu()
{
	int select = 0;
	while(true)
	{
		cout << "��ӭ����Ա��" << this->m_Name << "��¼!" << endl;

		cout << "\t\t ---------------------------------- \n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          1. ����˺�             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          2. �鿴�˺�             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          3. �鿴����             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          4. ���ԤԼ             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          0. ע����¼             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t ---------------------------------- \n";

		cout << "���������ѡ��>:" << endl;
		cin >> select;
		switch (select)
		{
		case 1:
			// ����˺�
			break;
		case 2:
			// �鿴�˺�
			break;
		case 3:
			// �鿴����
			break;
		case 4:
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
	}
	system("pause");

}

// ����˺�
void Manager::addPerson()
{

}

// �鿴�˺�
void Manager::showPerson()
{

}

// �鿴������Ϣ
void Manager::showComputer()
{

}

// ���ԤԼ��¼
void Manager::cleanFile()
{

}