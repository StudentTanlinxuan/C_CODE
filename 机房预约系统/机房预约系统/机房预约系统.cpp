#include<iostream>
#include"student.h"
#include"teacher.h"
#include"manager.h"

using namespace std;

int main()
{
	Student s;
	Teacher t;
	Manager m;
	int select = 0;
	do
	{
		cout << "================= ��ӭ����С̸����ԤԼϵͳ ===================" << endl;

		cout << "\t\t ---------------------------------- \n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          1. ѧ������             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          2. ��    ʦ             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          3. �� �� Ա             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          0. ��    ��             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t ---------------------------------- \n";

		cout << "���������ѡ��>:" << endl;
		cin >> select;
		switch (select)
		{
		case 1:
			// ѧ������
			//s.m_Name = "����";
			//s.operMenu();
			break;
		case 2:
			// ��ʦ
			//t.m_Name = "����";
			//t.operMenu();
			break;
		case 3:
			// ����Ա
			//m.m_Name = "admin";
			//m.operMenu();
			break;
		case 0:
			// �˳�
			cout << "��ӭ�´�ʹ�ã�" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "����������������룡" << endl;
			system("pause");
			system("cls");
			break;
		}
	} while (select);
	// ���ѭ������ʹ��do while(select)��Ҳ����ʹ��while��ѭ��

	system("pause");

	return 0;
}