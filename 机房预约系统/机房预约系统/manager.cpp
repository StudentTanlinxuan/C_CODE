#include"manager.h"

// 默认构造
Manager::Manager()
{

}

// 有参构造(管理员姓名，密码)
Manager::Manager(string name, string pwd)
{

}

// 选择菜单
void Manager::operMenu()
{
	int select = 0;
	while(true)
	{
		cout << "欢迎管理员：" << this->m_Name << "登录!" << endl;

		cout << "\t\t ---------------------------------- \n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          1. 添加账号             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          2. 查看账号             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          3. 查看机房             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          4. 清空预约             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          0. 注销登录             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t ---------------------------------- \n";

		cout << "请输入你的选择>:" << endl;
		cin >> select;
		switch (select)
		{
		case 1:
			// 添加账号
			break;
		case 2:
			// 查看账号
			break;
		case 3:
			// 查看机房
			break;
		case 4:
			// 清空预约
			break;
		case 0:
			// 注销登录
			cout << "注销成功！" << endl;
			system("pause");
			return;
			break;
		default:
			cout << "输入错误，请重新输入！" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");

}

// 添加账号
void Manager::addPerson()
{

}

// 查看账号
void Manager::showPerson()
{

}

// 查看机房信息
void Manager::showComputer()
{

}

// 清空预约记录
void Manager::cleanFile()
{

}