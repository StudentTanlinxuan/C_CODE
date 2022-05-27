#include"workerManager.h"

// workerManager�๹�캯����ʵ��
workerManager::workerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);// ���������ķ�ʽ���ļ� - ���ļ�

	// �ļ������ڵ����
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}

	// �ļ����ڵ�����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ��" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}

	// �ļ������ұ���ְ����Ϣ
	// ������Ҫ��ȡ��¼��ְ����Ϣ����
	int num = this->get_EmpNum();
	cout << "ְ������Ϊ" << num << endl;
	// ���³�Ա����
	this->m_EmpNum = num;

	this->m_EmpArray = new Worker * [this->m_EmpNum];

	// ��ʼ��ְ��
	init_Emp();

	//// ���Դ���
	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//	cout << "ְ�����" << this->m_EmpArray[i]->m_Id
	//		<< "\tְ������" << this->m_EmpArray[i]->m_Name
	//		<< "\t���ű��" << this->m_EmpArray[i]->m_Deptid << endl;
	//}
}

// workerManager������������ʵ��
workerManager::~workerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

// �˵���ʵ��
void workerManager::Show_Menu()
{
	cout << "*****************************************" << endl;
	cout << "*****    ��ӭʹ��ְ������ϵͳ����   *****" << endl;
	cout << "*********   0. �˳��������  ************" << endl;
	cout << "*********   1. ����ְ����Ϣ  ************" << endl;
	cout << "*********   2. ��ʾְ����Ϣ  ************" << endl;
	cout << "*********   3. ɾ����ְԱ��  ************" << endl;
	cout << "*********   4. �޸�ְ����Ϣ  ************" << endl;
	cout << "*********   5. ����ְ����Ϣ  ************" << endl;
	cout << "*********   6. ���ձ������  ************" << endl;
	cout << "*********   7. ��������ĵ�  ************" << endl;
	cout << "*****************************************" << endl;
	cout << endl;
}

// �˳�ϵͳ��ʵ��
void workerManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	exit(0);// ���ô˺���ֱ���˳�����
}

// ����ְ��
void workerManager::Add_Emp()
{
	cout << "������Ҫ���Ա������" << endl;
	int addNum;// �����û�����������
	cin >> addNum;

	if (addNum > 0)
	{
		// ���������е��´�С
		int newsize = this->m_EmpNum + addNum;

		// �����¿ռ�
		Worker** newSpace = new Worker * [newsize];

		// ��ԭ�ռ��µ����ݷ��¿ռ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		// �������������
		for (int i = 0; i < addNum; i++)
		{
			string name;
			int id;
			int did;

			cout << "�������" << i + 1 << "��Ա��������" << endl;
			cin >> name;
			cout << "�������" << i + 1 << "��Ա���ı��" << endl;
			cin >> id;
			cout << "��ѡ��Ҫ����Ա���Ĳ��ű�ţ�1. Ա��  2. ����  3. �ϰ�" << endl;
			cin >> did;

			Worker* worker = NULL;
			switch (did)
			{
			case 1:
				worker = new Employee(name, id, 1);
				cout << "���ӳɹ�" << endl;
				break;
			case 2:
				worker = new Manager(name, id, 2);
				cout << "���ӳɹ�" << endl;
				break;
			case 3:
				worker = new Boss(name, id, 3);
				cout << "���ӳɹ�" << endl;
				break;
			default:
				cout << "�����������������" << endl;
				break;
			}
			// ������ְ����Ϣ�����浽������
			newSpace[this->m_EmpNum + i] = worker;
		}

		// �ͷ�ԭ���Ŀռ�
		delete[] this->m_EmpArray;

		// �����¿ռ�ָ��
		this->m_EmpArray = newSpace;

		// ���������еĸ���
		this->m_EmpNum = newsize;

		// �ɹ���Ӻ� ���浽�ļ�
		this->save();

		// ��ʾ��Ϣ
		cout << "�ɹ����" << addNum << "��Ա����Ϣ" << endl;
		
		// ����ְ����Ϊ��
		this->m_FileIsEmpty = false;
	}
	else
	{
		cout << "�����������������" << endl;
	}
	// ����������������ص��ϼ�Ŀ¼
	system("pause");
	system("cls");
}

// ���浽�ļ�
void workerManager::save()
{
	// ����һ��������
	ofstream ofs;

	// ���ļ�
	ofs.open(FILENAME, ios::out);// ������ķ�ʽд�ļ� -- д�ļ�

	// ��ÿ���˵�����д���ļ�
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Deptid << " "
			<< endl;
	}

	// �ر��ļ�
	ofs.close();
}

// ��ȡְ������
int workerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	int did;
	string name;

	int num = 0;
	while (ifs >> name && ifs >> id && ifs >> did)
	{
		// ��¼����
		num++;
	}
	ifs.close();

	return num;
}

// ��ʼ��ְ��
void workerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	
	int id;
	int did;
	string name;
	
	int index = 0;
	while (ifs >> name && ifs >> id && ifs >> did)
	{
		Worker* worker = NULL;
		// ���ݲ�ͬ���Ŵ�����ͬ����
		if (did == 1)
		{
			worker = new Employee(name, id, did);
		}
		else if (did == 2)
		{
			worker = new Manager(name, id, did);
		}
		else
		{
			worker = new Boss(name, id, did);
		}

		this->m_EmpArray[index] = worker;
		index++;
	}
}

// ��ʾְ����Ϣ
void workerManager::show_Emp()
{
	// �ж��ļ��Ƿ�Ϊ�ջ����ļ�������
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ����ļ�������" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			// չʾ������ÿ��Ա������Ϣ
			this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

// �ж�ְ���Ƿ����
int workerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	return index;
}

// ɾ��ְ��
void workerManager::Del_Emp()
{
	// �ж��ļ��Ƿ�Ϊ�ջ����ļ�������
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ����ļ�������" << endl;
		system("pause");
		system("cls");// ����
	}
	else
	{
		int id;
		cout << "������Ҫɾ��ְ���ı��" << endl;
		cin >> id;
		int ret = IsExist(id);
		if (ret == -1)
		{
			cout << "ɾ��ʧ�ܣ���ְ�������ڻ��������" << endl;
		}
		else
		{
			// ɾ��ְ����ֱ�ӽ���ְ���������е�λ���ɺ�һ��ְ�������漴��
			for (int i = ret; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			// ְ��������һ
			this->m_EmpNum--;
			// ɾ���꽫���ݱ������ļ�
			this->save();
			// ��ʾɾ���ɹ�
			cout << "ɾ���ɹ�" << endl;
		}
	}
	system("pause");
	system("cls");
}

// �޸�ְ��
void workerManager::Mod_Emp()
{
	// �ж��ļ��Ƿ�Ϊ�ջ����ļ�������
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ����ļ�������" << endl;
		system("pause");
		system("cls");// ����
	}
	else
	{
		cout << "������Ҫ�޸�ְ���ı��" << endl;
		int id;
		cin >> id;
		int ret = IsExist(id);
		if (ret == -1)
		{
			cout << "�޸�ʧ�ܣ���ְ�������ڻ��������" << endl;
		}
		else
		{
			string newname;
			int newid;
			int newdid;
			cout << "��������ְ������" << endl;
			cin >> newname;
			cout << "��������ְ�����" << endl;
			cin >> newid;
			cout << "��ѡ��Ҫ�޸ĵ���ְ��ְ�ƣ�1. ְ��  2. ����  3. �ϰ�" << endl;
			cin >> newdid;
			Worker* worker = NULL;
			switch (newdid)
			{
			case 1:
				worker = new Employee(newname, newid, 1);
				break;
			case 2:
				worker = new Manager(newname, newid, 2);
				break;
			case 3:
				worker = new Boss(newname, newid, 3);
				break;
			default:
				cout << "�����������������" << endl;
				break;
			}
			// ����������ԭλ��
			this->m_EmpArray[ret] = worker;
			// ���浽�ļ�
			this->save();
			// ��ʾһ��
			cout << "�޸ĳɹ�" << endl;
		}
	}
	system("pause");
	system("cls");// ����
}

// ����
void workerManager::Find_Emp()
{
	// �ж��ļ��Ƿ�Ϊ�ջ����ļ�������
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ����ļ�������" << endl;
		system("pause");
		system("cls");// ����
	}
	else
	{
		int select = 0;
		cout << "�����������ַ�ʽ����ѯ��1. ְ������  2.ְ�����" << endl;
		cin >> select;
		if (select == 2)
		{
			cout << "������Ҫ����ְ���ı��" << endl;
			int id;
			cin >> id;
			int ret = IsExist(id);
			if (ret == -1)
			{
				cout << "����ʧ�ܣ���ְ�������ڻ��������" << endl;
			}
			else
			{
				this->m_EmpArray[ret]->showInfo();
			}
		}
		else if (select == 1)
		{
			cout << "������Ҫ����ְ��������" << endl;
			string name;
			cin >> name;

			// ����һ����־
			bool flag = false;

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					this->m_EmpArray[i]->showInfo();
					flag = true;
				}
			}
			if (flag == false)
			{
				cout << "����ʧ�ܣ���ְ�������ڻ��������" << endl;
			}
		}
		else
		{
			cout << "�������" << endl;
		}
	}
	system("pause");
	system("cls");// ����
}

// ����
void workerManager::Sort_Emp()
{
	// �ж��ļ��Ƿ�Ϊ�ջ����ļ�������
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ����ļ�������" << endl;
		system("pause");
		system("cls");// ����
	}

	int select;
	cout << "��ѡ��Ҫ����ķ�ʽ��" << endl;
	cout << "1. ��ְ�������������" << endl;
	cout << "2. ��ְ����Ž�������" << endl;
	cin >> select;
	if (select == 1)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (this->m_EmpArray[i]->m_Id > this->m_EmpArray[j]->m_Id)
				{
					Worker* id = this->m_EmpArray[j];
					this->m_EmpArray[j] = this->m_EmpArray[i];
					this->m_EmpArray[i] = id;
				}
			}
		}
	}
	else if (select == 2)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (this->m_EmpArray[i]->m_Id < this->m_EmpArray[j]->m_Id)
				{
					Worker* id = this->m_EmpArray[j];
					this->m_EmpArray[j] = this->m_EmpArray[i];
					this->m_EmpArray[i] = id;
				}
			}
		}
	}
	else
	{
		cout << "�������" << endl;
	}
	cout << "����ɹ�������������" << endl;
	// ���浽�ļ���
	this->save();
	this->show_Emp();

	// �˴����ܼ��������������������
}

// ����ĵ�
void workerManager::Clean_File()
{
	cout << "��ȷ���Ƿ�����ĵ���" << endl;
	cout << "1. ȷ��" << endl;
	cout << "2. ȡ��" << endl;
	int select;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs;
		// ��ģʽ ios::trunc �������ɾ���ļ������´���
		ofs.open(FILENAME, ios::trunc);
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					delete this->m_EmpArray[i];
				}
			}
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
		}
		cout << "��ճɹ�" << endl;
	}
	else if (select == 2)
	{
		cout << "ȡ�����" << endl;
	}
	else
	{
		cout << "ѡ�����" << endl;
	}
	system("pause");
	system("cls");
}