#include<iostream>
#include"student.h"
#include"teacher.h"
#include"manager.h"
#include<fstream>
#include"globalFile.h" // global 全球的

using namespace std;

void managerMenu(Identity*& manager)
{
	int select = 0;
	while (true)
	{
		Manager* man = (Manager*)manager;

		// 管理员菜单
		manager->operMenu();

		cout << "请输入你的选择>:" << endl;
		cin >> select;
		switch (select)
		{
		case 1:
			// 添加账号
			man->addPerson();
			break;
		case 2:
			// 查看账号
			man->showPerson();
			break;
		case 3:
			// 查看机房
			man->showComputer();
			break;
		case 4:
			// 清空预约
			man->cleanFile();
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

void studentMenu(Identity*& student)
{
	while (true)
	{
		// 学生菜单
		student->operMenu();
		Student* stu = (Student*)student;
		int select = 0;
		cout << "请输入你的选择：" << endl;
		cin >> select;
		if (select == 1) //申请预约
		{
			stu->applyOrder();
		}
		else if (select == 2) //查看自身预约
		{
			stu->showMyOrder();
		}
		else if (select == 3) //查看所有预约
		{
			stu->showAllOrder();
		}
		else if (select == 4) //取消预约
		{
			stu->cancelOrder();
		}
		else
		{
			delete student;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

void LoginIn(string fileName, int type) // fileName - 操作的文件名  type - 登录的身份(1代表学生，2代表老师，3代表管理员)
{
	Identity* person = NULL;

	ifstream ifs;
	ifs.open(fileName, ios::in); // ios::in 读文件的形式

	// 文件不存在
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	int id = 0;
	string name;
	string pwd;

	if (type == 1)// 学生登陆
	{
		cout << "请输入你的学号>:" << endl;
		cin >> id;
	}
	else if (type == 2)// 教师登录
	{
		cout << "请输入你的职工号>:" << endl;
		cin >> id;
	}
	
	cout << "请输入用户名>:" << endl;
	cin >> name;
	cout << "请输入密码" << endl;
	cin >> pwd;

	if (type == 1)
	{
		// 学生验证
		int fId = 0;
		string fName;
		string fPwd;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			// cout << fId << fName << fPwd << endl;

			if (id == fId && name == fName && pwd == fPwd)
			{
				cout << "学生验证登录成功!" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				// 进入学生子菜单
				studentMenu(person);
				return;
			}
		}
	}
	else if (type == 2)
	{
		// 老师验证
		int fId = 0;
		string fName;
		string fPwd;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd)
			{
				cout << "老师验证登录成功!" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);

				return;
			}
		}
	}
	else if (type == 3)
	{
		// 管理员验证
		string fName;
		string fPwd;

		while (ifs >> fName && ifs >> fPwd)
		{
			if (name == fName && pwd == fPwd)
			{
				cout << "验证登录成功!" << endl;
				// 登录成功后按任意键进入管理员界面
				system("pause");
				system("cls");
				// 创建管理员对象
				person = new Manager(name, pwd);
				// 进入管理员子菜单
				managerMenu(person);
				return;
			}
		}
	}

	cout << "验证失败" << endl;

	system("pause");
	system("cls");
	return;
}


int main()
{
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
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2:
			// 老师
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3:
			// 管理员
			LoginIn(ADMIN_FILE, 3);
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