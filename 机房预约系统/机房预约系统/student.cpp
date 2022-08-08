#include"student.h"

// 默认构造
Student::Student()
{

}

// 有参构造(学号，姓名，密码)
Student::Student(int id, string name, string pwd)
{

}

// 菜单展示
void Student::operMenu()
{
	int select = 0;
	do
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

		cout << "请输入你的选择>:" << endl;
		cin >> select;
		switch (select)
		{
		case 1:
			// 申请预约
			break;
		case 2:
			// 查看我的预约
			break;
		case 3:
			// 查看所有预约
			break;
		case 4:
			// 取消预约
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

// 申请预约
void Student::applyOrder()
{

}

// 查看我的预约
void Student::showMyOrder()
{

}

// 查看所有预约
void Student::showAllOrder()
{

}

// 取消预约
void Student::cancelOrder()
{

}

