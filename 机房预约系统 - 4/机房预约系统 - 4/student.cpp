#include"student.h"
#include<fstream>
#include"globalFile.h"

// Ĭ�Ϲ���
Student::Student()
{

}

// �вι���(ѧ�ţ�����������)
Student::Student(int id, string name, string pwd)
{
	// ��ʼ������
	this->m_Id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;

	// ��ȡ������Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	ComputerRoom c;
	while (ifs >> c.m_ComId && ifs >> c.m_MaxNum)
	{
		this->vCom.push_back(c);
	}
	cout << "��ǰ����������" << this->vCom.size() << endl;
	ifs.close();
}

// �˵�չʾ
void Student::operMenu()
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
}

// ����ԤԼ
void Student::applyOrder()
{
	cout << "��������ʱ��Ϊ��һ�����壡" << endl;
	cout << "����������ԤԼ��ʱ�䣺" << endl;
	cout << "1. ��һ" << endl;
	cout << "2. �ܶ�" << endl;
	cout << "3. ����" << endl;
	cout << "4. ����" << endl;
	cout << "5. ����" << endl;

	int data = 0;
	while (true)
	{
		cin >> data;
		if (data >= 1 && data <= 5)
		{
			break;
		}
		cout << "����������������룡" << endl;
	}

	cout << "����������ԤԼʱ��Σ�" << endl;
	cout << "1. ����" << endl;
	cout << "2. ����" << endl;
	int interval = 0;
	while (true)
	{
		cin >> interval; // interval ���
		if (interval >= 1 && interval <= 2)
		{
			break;
		}
		cout << "����������������룡" << endl;
	}

	cout << "��ѡ�������" << endl;
	cout << "1�Ż�������Ϊ��20" << endl;
	cout << "2�Ż�������Ϊ��50" << endl;
	cout << "3�Ż�������Ϊ��100" << endl;
	int room = 0;
	while (true)
	{
		cin >> room;
		if (room >= 1 && room <= 3)
		{
			break;
		}
		cout << "����������������룡" << endl;
	}
	cout << "ԤԼ�ɹ��������" << endl;

	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);
	if (!ofs.is_open())
	{
		cout << "�ļ�������" << endl;
		ofs.close();
		return;
	}

	ofs << "data:" << data << " "; // ����
	ofs << "interval:" << interval << " "; // ʱ���
	ofs << "stuId:" << this->m_Id << " "; // ѧ�����
	ofs << "stuName:" << this->m_Name << " "; // ѧ������
	ofs << "roomId:" << room << " "; // ԤԼ������
	ofs << "status:" << 1 << endl; // ԤԼ״̬

	ofs.close();
	system("pause");
	system("cls");
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

