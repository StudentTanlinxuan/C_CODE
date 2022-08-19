#include<iostream>
#include"student.h"
#include"teacher.h"
#include"manager.h"
#include<fstream>
#include"globalFile.h" // global ȫ���

using namespace std;

void managerMenu(Identity*& manager)
{
	int select = 0;
	while (true)
	{
		Manager* man = (Manager*)manager;

		// ����Ա�˵�
		manager->operMenu();

		cout << "���������ѡ��>:" << endl;
		cin >> select;
		switch (select)
		{
		case 1:
			// ����˺�
			man->addPerson();
			break;
		case 2:
			// �鿴�˺�
			man->showPerson();
			break;
		case 3:
			// �鿴����
			man->showComputer();
			break;
		case 4:
			// ���ԤԼ
			man->cleanFile();
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

void studentMenu(Identity*& student)
{
	while (true)
	{
		// ѧ���˵�
		student->operMenu();
		Student* stu = (Student*)student;
		int select = 0;
		cout << "���������ѡ��" << endl;
		cin >> select;
		if (select == 1) //����ԤԼ
		{
			stu->applyOrder();
		}
		else if (select == 2) //�鿴����ԤԼ
		{
			stu->showMyOrder();
		}
		else if (select == 3) //�鿴����ԤԼ
		{
			stu->showAllOrder();
		}
		else if (select == 4) //ȡ��ԤԼ
		{
			stu->cancelOrder();
		}
		else
		{
			delete student;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

void LoginIn(string fileName, int type) // fileName - �������ļ���  type - ��¼�����(1����ѧ����2������ʦ��3�������Ա)
{
	Identity* person = NULL;

	ifstream ifs;
	ifs.open(fileName, ios::in); // ios::in ���ļ�����ʽ

	// �ļ�������
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	int id = 0;
	string name;
	string pwd;

	if (type == 1)// ѧ����½
	{
		cout << "���������ѧ��>:" << endl;
		cin >> id;
	}
	else if (type == 2)// ��ʦ��¼
	{
		cout << "���������ְ����>:" << endl;
		cin >> id;
	}
	
	cout << "�������û���>:" << endl;
	cin >> name;
	cout << "����������" << endl;
	cin >> pwd;

	if (type == 1)
	{
		// ѧ����֤
		int fId = 0;
		string fName;
		string fPwd;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			// cout << fId << fName << fPwd << endl;

			if (id == fId && name == fName && pwd == fPwd)
			{
				cout << "ѧ����֤��¼�ɹ�!" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				// ����ѧ���Ӳ˵�
				studentMenu(person);
				return;
			}
		}
	}
	else if (type == 2)
	{
		// ��ʦ��֤
		int fId = 0;
		string fName;
		string fPwd;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd)
			{
				cout << "��ʦ��֤��¼�ɹ�!" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);

				return;
			}
		}
	}
	else if (type == 3)
	{
		// ����Ա��֤
		string fName;
		string fPwd;

		while (ifs >> fName && ifs >> fPwd)
		{
			if (name == fName && pwd == fPwd)
			{
				cout << "��֤��¼�ɹ�!" << endl;
				// ��¼�ɹ���������������Ա����
				system("pause");
				system("cls");
				// ��������Ա����
				person = new Manager(name, pwd);
				// �������Ա�Ӳ˵�
				managerMenu(person);
				return;
			}
		}
	}

	cout << "��֤ʧ��" << endl;

	system("pause");
	system("cls");
	return;
}


int main()
{
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
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2:
			// ��ʦ
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3:
			// ����Ա
			LoginIn(ADMIN_FILE, 3);
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