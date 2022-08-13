#include"manager.h"
#include"globalFile.h"
#include<fstream>

// Ĭ�Ϲ���
Manager::Manager()
{

}

// �вι���(����Ա����������)
Manager::Manager(string name, string pwd)
{
	this->m_Name = name;
	this->m_Pwd = pwd;

	// ��ʼ������
	this->initVector();
}

// ѡ��˵�
void Manager::operMenu()
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

}

// ȥ��
bool Manager::checkRepeat(int id, int type)
{
	if (type == 1)
	{
		for (vector<Student>::iterator it = this->vStu.begin(); it != this->vStu.end(); it++)
		{
			if (id == (*it).m_Id)
			{
				return true;
			}
		}
	}
	else if (type == 2)
	{
		for (vector<Teacher>::iterator it = this->vTea.begin(); it != this->vTea.end(); it++)
		{
			if (id == (*it).m_EmpId)
			{
				return true;
			}
		}
	}
	return false;
}

// ����˺�
void Manager::addPerson()
{
	int select = 0;
	cout << "����������˺ŵ�����:>" << endl;
	cout << "1. ѧ���˺�" << endl;
	cout << "2. ��ʦ�˺�" << endl;
	cin >> select;

	int id = 0;
	string name;
	string pwd;
	string filename;
	string  tip;

	if (select == 1)
	{
		filename = STUDENT_FILE;
		tip = "������ѧ��:>";
	}
	else if (select == 2)
	{
		filename = TEACHER_FILE;
		tip = "������ְ�����:>";
	}

	ofstream ofs;
	ofs.open(filename, ios::out | ios::app);
	while (true)
	{
		cout << tip << endl;
		cin >> id;
		int i = 0;
		if (select == 1)
		{
			for (i = 0; i < this->vStu.size(); i++)
			{
				if (id == this->vStu[i].m_Id)
				{
					cout << "ѧ���ظ������������룡" << endl;
					break;
				}
			}
			if (i == this->vStu.size())
			{
				break;
			}

		}
		else if (select == 2)
		{
			for (i = 0; i < this->vTea.size(); i++)
			{
				if (id == this->vTea[i].m_EmpId)
				{
					cout << "ְ������ظ������������룡" << endl;
					break;
				}
			}
			if (i == this->vTea.size())
			{
				break;
			}
		}
	}

	//// �˲���ȥ�ز���Ҳ���Է�װ�ɺ���
	//// ��װ�ɺ�������������
	//while (true)
	//{
	//	cout << tip << endl;

	//	cin >> id;

	//	bool ret = checkRepeat(id, select);

	//	if (ret)
	//	{
	//		cout << "����������������룡" << endl;
	//	}
	//	else
	//	{
	//		break;
	//	}
	//}


	cout << "�������û���:>" << endl;
	cin >> name;
	cout << "����������:>" << endl;
	cin >> pwd;

	ofs << id  << " " << name << " " << pwd << endl;

	cout << "��ӳɹ���" << endl;

	system("pause");
	system("cls");
	ofs.close();

	//if (select == 1)
	//{
	//	Student s;
	//	s.m_Id = id;
	//	s.m_Name = name;
	//	s.m_Pwd = pwd;
	//	this->vStu.push_back(s);
	//}
	//else if (select == 2)
	//{
	//	Teacher t;
	//	t.m_EmpId = id;
	//	t.m_Name = name;
	//	t.m_Pwd = pwd;
	//	this->vTea.push_back(t);
	//}
	
	// ����ֱ��ʹ�ó�ʼ���������
	this->initVector();
}

// �鿴�˺�
void Manager::showPerson()
{
	cout << "��ѡ��鿴���ݣ�" << endl;
	int select = 0;
	cout << "1. �鿴����ѧ��" << endl;
	cout << "2. �鿴������ʦ" << endl;
	cin >> select;

	if (select == 1)
	{
		cout << "����ѧ����Ϣ���£�" << endl;
		for (vector<Student>::iterator it = this->vStu.begin(); it != this->vStu.end(); it++)
		{
			cout << "ѧ�ţ�" << it->m_Id << " ������" << it->m_Name << " ���룺" << it->m_Pwd << endl;
		}
		system("pause");
		system("cls");
	}
	else if (select == 2)
	{
		cout << "������ʦ��Ϣ���£�" << endl;
		for (vector<Teacher>::iterator it = this->vTea.begin(); it != this->vTea.end(); it++)
		{
			cout << "��ʦ��ţ�" << it->m_EmpId << " ������" << it->m_Name << " ���룺" << it->m_Pwd << endl;
		}
		system("pause");
		system("cls");
	}
}

// �鿴������Ϣ
void Manager::showComputer()
{

}

// ���ԤԼ��¼
void Manager::cleanFile()
{

}

// ��ʼ������
void Manager::initVector()
{
	// ��ȡѧ���ļ��е���Ϣ
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}
	this->vStu.clear();

	Student s;
	while (ifs >> s.m_Id && ifs >> s.m_Name && ifs >> s.m_Pwd)
	{
		this->vStu.push_back(s);
	}
	cout << "��ǰѧ������Ϊ��" << this->vStu.size() << endl;
	ifs.close(); // ѧ����ʼ��

	// ��ȡ��ʦ�ļ��е���Ϣ
	ifs.open(TEACHER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}
	this->vTea.clear();

	Teacher t;
	while (ifs >> t.m_EmpId && ifs >> t.m_Name && ifs >> t.m_Pwd)
	{
		this->vTea.push_back(t);
	}
	cout << "��ǰ��ʦ����Ϊ��" << this->vTea.size() << endl;
	ifs.close();
}