#include"teacher.h"

// 默认构造
Teacher::Teacher()
{

}

// 有参构造(职工编号，姓名，密码)
Teacher::Teacher(int empId, string name, string pwd)
{

}

// 菜单展示
void Teacher::operMenu()
{
	int select = 0;
	do
	{
		cout << "欢迎教师：" << this->m_Name << "登录!" << endl;

		cout << "\t\t ---------------------------------- \n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          1. 查看所有预约         |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          2. 审核预约             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          0. 注销登录             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t ---------------------------------- \n";

		cout << "请输入你的选择>:" << endl;
		cin >> select;
		switch (select)
		{
		case 1:
			// 查看所有预约
			break;
		case 2:
			// 审核预约
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
	} while (select);
	system("pause");

}

// 查看所有预约
void Teacher::showAllOrder()
{

}

// 审核预约
void Teacher::vallidOrder()
{
	
}