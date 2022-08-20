#include"student.h"
#include<fstream>
#include"globalFile.h"
#include"orderFile.h"

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
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++)
	{
		if (atoi(of.m_orderData[i]["stuId"].c_str()) == this->m_Id)
		{
			cout << "ԤԼ���ڣ���" << of.m_orderData[i]["data"];
			cout << " ʱ�Σ�" << (of.m_orderData[i]["interval"] == "1" ? "����" : "����");
			cout << " ������" << of.m_orderData[i]["roomId"];
			string status = "״̬��"; // 0 ȡ����ԤԼ  1 �����  2 ��ԤԼ  -1 ԤԼʧ��
			if (of.m_orderData[i]["status"] == "1")
			{
				status += "�����";
			}
			else if (of.m_orderData[i]["status"] == "2")
			{
				status += "��ԤԼ";
			}
			else if (of.m_orderData[i]["status"] == "-1")
			{
				status += "���δͨ����ԤԼʧ��";
			}
			else
			{
				status += "ԤԼ��ȡ��";
			}
			cout << status << endl;
		}
	}
	system("pause");
	system("cls");
}

// �鿴����ԤԼ
void Student::showAllOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++)
	{
		cout << i + 1 << ",";
		cout << "ԤԼ���ڣ���" << of.m_orderData[i]["data"];
		cout << " ʱ�Σ�" << (of.m_orderData[i]["interval"] == "1" ? "����" : "����");
		cout << " ������" << of.m_orderData[i]["roomId"];
		string status = "״̬��"; // 0 ȡ����ԤԼ  1 �����  2 ��ԤԼ  -1 ԤԼʧ��
		if (of.m_orderData[i]["status"] == "1")
		{
			status += "�����";
		}
		else if (of.m_orderData[i]["status"] == "2")
		{
			status += "��ԤԼ";
		}
		else if (of.m_orderData[i]["status"] == "-1")
		{
			status += "���δͨ����ԤԼʧ��";
		}
		else
		{
			status += "ԤԼ��ȡ��";
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}

// ȡ��ԤԼ
void Student::cancelOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "����л�ԤԼ�ɹ��ļ�¼����ȡ����������ȡ���ļ�¼" << endl;

	vector<int> v;
	int index = 1;

	for (int i = 0; i < of.m_Size; i++)
	{
		if (atoi(of.m_orderData[i]["stuId"].c_str()) == this->m_Id)
		{
			if (of.m_orderData[i]["status"] == "1" || of.m_orderData[i]["status"] == "2")
			{
				cout << index++ << "��";
				v.push_back(i);
				cout << "ԤԼ���ڣ���" << of.m_orderData[i]["data"];
				cout << " ʱ�Σ�" << (of.m_orderData[i]["interval"] == "1" ? "����" : "����");
				cout << " ������" << of.m_orderData[i]["roomId"];
				string status = "״̬��"; // 0 ȡ����ԤԼ  1 �����  2 ��ԤԼ  -1 ԤԼʧ��
				if (of.m_orderData[i]["status"] == "1")
				{
					status += "�����";
				}
				else if (of.m_orderData[i]["status"] == "2")
				{
					status += "��ԤԼ";
				}
				else if (of.m_orderData[i]["status"] == "-1")
				{
					status += "���δͨ����ԤԼʧ��";
				}
				else
				{
					status += "ԤԼ��ȡ��";
				}
				cout << status << endl;
			}
		}
	}

	cout << "������Ҫȡ���ļ�¼��0������" << endl;
	int select = 0;
	while (true)
	{
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				break;
			}
			else
			{
				cout << "��¼����λ�ã�" << v[select - 1] << endl;
				of.m_orderData[v[select - 1]]["status"] = "0";
				of.updataOrder(); // ����ԤԼ
				cout << "��ȡ��ԤԼ" << endl;
				break;
			}
		}
		cout << "�����������������" << endl;
	}
	system("pause");
	system("cls");
}

