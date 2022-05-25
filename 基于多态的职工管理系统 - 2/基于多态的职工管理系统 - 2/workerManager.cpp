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

// ��ʾְ����Ϣ
void workerManager::showEmployee()
{
	
}
