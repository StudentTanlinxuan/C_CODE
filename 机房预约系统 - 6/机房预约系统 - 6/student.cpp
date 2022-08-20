#include"student.h"
#include<fstream>
#include"globalFile.h"
#include"orderFile.h"

// 默认构造
Student::Student()
{

}

// 有参构造(学号，姓名，密码)
Student::Student(int id, string name, string pwd)
{
	// 初始化属性
	this->m_Id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;

	// 获取机房信息
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	ComputerRoom c;
	while (ifs >> c.m_ComId && ifs >> c.m_MaxNum)
	{
		this->vCom.push_back(c);
	}
	cout << "当前机房个数：" << this->vCom.size() << endl;
	ifs.close();
}

// 菜单展示
void Student::operMenu()
{
	cout << "欢迎学生代表：" << this->m_Name << "登录!" << endl;

	cout << "\t\t ---------------------------------- \n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          1. 申请预约             |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          2. 查看我的预约         |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          3. 查看所有预约         |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          4. 取消预约             |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          0. 注销登录             |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t ---------------------------------- \n";
}

// 申请预约
void Student::applyOrder()
{
	cout << "机房开放时间为周一到周五！" << endl;
	cout << "请输入申请预约的时间：" << endl;
	cout << "1. 周一" << endl;
	cout << "2. 周二" << endl;
	cout << "3. 周三" << endl;
	cout << "4. 周四" << endl;
	cout << "5. 周五" << endl;

	int data = 0;
	while (true)
	{
		cin >> data;
		if (data >= 1 && data <= 5)
		{
			break;
		}
		cout << "输入错误，请重新输入！" << endl;
	}

	cout << "请输入申请预约时间段：" << endl;
	cout << "1. 上午" << endl;
	cout << "2. 下午" << endl;
	int interval = 0;
	while (true)
	{
		cin >> interval; // interval 间隔
		if (interval >= 1 && interval <= 2)
		{
			break;
		}
		cout << "输入错误，请重新输入！" << endl;
	}

	cout << "请选择机房：" << endl;
	cout << "1号机房容量为：20" << endl;
	cout << "2号机房容量为：50" << endl;
	cout << "3号机房容量为：100" << endl;
	int room = 0;
	while (true)
	{
		cin >> room;
		if (room >= 1 && room <= 3)
		{
			break;
		}
		cout << "输入错误，请重新输入！" << endl;
	}
	cout << "预约成功！审核中" << endl;

	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);
	if (!ofs.is_open())
	{
		cout << "文件不存在" << endl;
		ofs.close();
		return;
	}

	ofs << "data:" << data << " "; // 日期
	ofs << "interval:" << interval << " "; // 时间段
	ofs << "stuId:" << this->m_Id << " "; // 学生编号
	ofs << "stuName:" << this->m_Name << " "; // 学生姓名
	ofs << "roomId:" << room << " "; // 预约机房号
	ofs << "status:" << 1 << endl; // 预约状态

	ofs.close();
	system("pause");
	system("cls");
}

// 查看我的预约
void Student::showMyOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++)
	{
		if (atoi(of.m_orderData[i]["stuId"].c_str()) == this->m_Id)
		{
			cout << "预约日期：周" << of.m_orderData[i]["data"];
			cout << " 时段：" << (of.m_orderData[i]["interval"] == "1" ? "上午" : "下午");
			cout << " 机房：" << of.m_orderData[i]["roomId"];
			string status = "状态："; // 0 取消的预约  1 审核中  2 已预约  -1 预约失败
			if (of.m_orderData[i]["status"] == "1")
			{
				status += "审核中";
			}
			else if (of.m_orderData[i]["status"] == "2")
			{
				status += "已预约";
			}
			else if (of.m_orderData[i]["status"] == "-1")
			{
				status += "审核未通过，预约失败";
			}
			else
			{
				status += "预约已取消";
			}
			cout << status << endl;
		}
	}
	system("pause");
	system("cls");
}

// 查看所有预约
void Student::showAllOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++)
	{
		cout << i + 1 << ",";
		cout << "预约日期：周" << of.m_orderData[i]["data"];
		cout << " 时段：" << (of.m_orderData[i]["interval"] == "1" ? "上午" : "下午");
		cout << " 机房：" << of.m_orderData[i]["roomId"];
		string status = "状态："; // 0 取消的预约  1 审核中  2 已预约  -1 预约失败
		if (of.m_orderData[i]["status"] == "1")
		{
			status += "审核中";
		}
		else if (of.m_orderData[i]["status"] == "2")
		{
			status += "已预约";
		}
		else if (of.m_orderData[i]["status"] == "-1")
		{
			status += "审核未通过，预约失败";
		}
		else
		{
			status += "预约已取消";
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}

// 取消预约
void Student::cancelOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "审核中或预约成功的记录可以取消，请输入取消的记录" << endl;

	vector<int> v;
	int index = 1;

	for (int i = 0; i < of.m_Size; i++)
	{
		if (atoi(of.m_orderData[i]["stuId"].c_str()) == this->m_Id)
		{
			if (of.m_orderData[i]["status"] == "1" || of.m_orderData[i]["status"] == "2")
			{
				cout << index++ << "、";
				v.push_back(i);
				cout << "预约日期：周" << of.m_orderData[i]["data"];
				cout << " 时段：" << (of.m_orderData[i]["interval"] == "1" ? "上午" : "下午");
				cout << " 机房：" << of.m_orderData[i]["roomId"];
				string status = "状态："; // 0 取消的预约  1 审核中  2 已预约  -1 预约失败
				if (of.m_orderData[i]["status"] == "1")
				{
					status += "审核中";
				}
				else if (of.m_orderData[i]["status"] == "2")
				{
					status += "已预约";
				}
				else if (of.m_orderData[i]["status"] == "-1")
				{
					status += "审核未通过，预约失败";
				}
				else
				{
					status += "预约已取消";
				}
				cout << status << endl;
			}
		}
	}

	cout << "请输入要取消的记录，0代表返回" << endl;
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
				cout << "记录所在位置：" << v[select - 1] << endl;
				of.m_orderData[v[select - 1]]["status"] = "0";
				of.updataOrder(); // 更新预约
				cout << "已取消预约" << endl;
				break;
			}
		}
		cout << "输入错误，请重新输入" << endl;
	}
	system("pause");
	system("cls");
}

