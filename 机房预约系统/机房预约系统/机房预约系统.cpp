#include<iostream>
#include"student.h"
#include"teacher.h"
#include"manager.h"

using namespace std;

int main()
{
	Student s;
	Teacher t;
	Manager m;
	int select = 0;
	do
	{
		cout << "================= 欢迎来到小谈机房预约系统 ===================" << endl;

		cout << "\t\t ---------------------------------- \n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          1. 学生代表             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          2. 老    师             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          3. 管 理 员             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t|          0. 退    出             |\n";
		cout << "\t\t|                                  |\n";
		cout << "\t\t ---------------------------------- \n";

		cout << "请输入你的选择>:" << endl;
		cin >> select;
		switch (select)
		{
		case 1:
			// 学生代表
			//s.m_Name = "李四";
			//s.operMenu();
			break;
		case 2:
			// 老师
			//t.m_Name = "老王";
			//t.operMenu();
			break;
		case 3:
			// 管理员
			//m.m_Name = "admin";
			//m.operMenu();
			break;
		case 0:
			// 退出
			cout << "欢迎下次使用！" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入错误，请重新输入！" << endl;
			system("pause");
			system("cls");
			break;
		}
	} while (select);
	// 这个循环可以使用do while(select)，也可以使用while死循环

	system("pause");

	return 0;
}