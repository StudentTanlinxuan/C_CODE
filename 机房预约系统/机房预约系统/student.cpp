#include"student.h"

// Ĭ�Ϲ���
Student::Student()
{

}

// �вι���(ѧ�ţ�����������)
Student::Student(int id, string name, string pwd)
{

}

// �˵�չʾ
void Student::operMenu()
{
	int select = 0;
	do
	{
		cout << "��ӭѧ������" << this->m_Name << "��¼!" << endl;

		cout << "\t\t ---------------------------------- \n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          1. ����ԤԼ             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          2. �鿴�ҵ�ԤԼ         |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          3. �鿴����ԤԼ         |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          4. ȡ��ԤԼ             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          0. ע����¼             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t ---------------------------------- \n";

		cout << "���������ѡ��>:" << endl;
		cin >> select;
		switch (select)
		{
		case 1:
			// ����ԤԼ
			break;
		case 2:
			// �鿴�ҵ�ԤԼ
			break;
		case 3:
			// �鿴����ԤԼ
			break;
		case 4:
			// ȡ��ԤԼ
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

// ����ԤԼ
void Student::applyOrder()
{

}

// �鿴�ҵ�ԤԼ
void Student::showMyOrder()
{

}

// �鿴����ԤԼ
void Student::showAllOrder()
{

}

// ȡ��ԤԼ
void Student::cancelOrder()
{

}

