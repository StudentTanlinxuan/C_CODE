#include"workerManager.h"

// workerManager�๹�캯����ʵ��
workerManager::workerManager()
{

}

// workerManager������������ʵ��
workerManager::~workerManager()
{

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
	system("pause");
	exit(0);// ���ô˺���ֱ���˳�����
}

// ����ְ��
void workerManager::addEmployee()
{
	string name;
	int id;
	int did;

	cout << "������Ҫ����Ա��������" << endl;
	cin >> name;
	cout << "������Ҫ����Ա���ı��" << endl;
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
	

}

// ��ʾְ����Ϣ
void workerManager::showEmployee()
{
	
}
