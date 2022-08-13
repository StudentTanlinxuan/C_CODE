#include"manager.h"
#include"globalFile.h"
#include<fstream>

// 默认构造
Manager::Manager()
{

}

// 有参构造(管理员姓名，密码)
Manager::Manager(string name, string pwd)
{
	this->m_Name = name;
	this->m_Pwd = pwd;

	// 初始化容器
	this->initVector();
}

// 选择菜单
void Manager::operMenu()
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

}

// 去重
bool Manager::checkRepeat(int id, int type)
{
	if (type == 1)
	{
		for (vector<Student>::iterator it = this->vStu.begin(); it != this->vStu.end(); it++)
		{
			if (id == (*it).m_Id)
			{
				return true;
			}
		}
	}
	else if (type == 2)
	{
		for (vector<Teacher>::iterator it = this->vTea.begin(); it != this->vTea.end(); it++)
		{
			if (id == (*it).m_EmpId)
			{
				return true;
			}
		}
	}
	return false;
}

// 添加账号
void Manager::addPerson()
{
	int select = 0;
	cout << "请输入添加账号的类型:>" << endl;
	cout << "1. 学生账号" << endl;
	cout << "2. 老师账号" << endl;
	cin >> select;

	int id = 0;
	string name;
	string pwd;
	string filename;
	string  tip;

	if (select == 1)
	{
		filename = STUDENT_FILE;
		tip = "请输入学号:>";
	}
	else if (select == 2)
	{
		filename = TEACHER_FILE;
		tip = "请输入职工编号:>";
	}

	ofstream ofs;
	ofs.open(filename, ios::out | ios::app);
	while (true)
	{
		cout << tip << endl;
		cin >> id;
		int i = 0;
		if (select == 1)
		{
			for (i = 0; i < this->vStu.size(); i++)
			{
				if (id == this->vStu[i].m_Id)
				{
					cout << "学号重复，请重新输入！" << endl;
					break;
				}
			}
			if (i == this->vStu.size())
			{
				break;
			}

		}
		else if (select == 2)
		{
			for (i = 0; i < this->vTea.size(); i++)
			{
				if (id == this->vTea[i].m_EmpId)
				{
					cout << "职工编号重复，请重新输入！" << endl;
					break;
				}
			}
			if (i == this->vTea.size())
			{
				break;
			}
		}
	}

	//// 此部分去重操作也可以封装成函数
	//// 封装成函数后这样调用
	//while (true)
	//{
	//	cout << tip << endl;

	//	cin >> id;

	//	bool ret = checkRepeat(id, select);

	//	if (ret)
	//	{
	//		cout << "输入错误，请重新输入！" << endl;
	//	}
	//	else
	//	{
	//		break;
	//	}
	//}


	cout << "请输入用户名:>" << endl;
	cin >> name;
	cout << "请输入密码:>" << endl;
	cin >> pwd;

	ofs << id  << " " << name << " " << pwd << endl;

	cout << "添加成功！" << endl;

	system("pause");
	system("cls");
	ofs.close();

	//if (select == 1)
	//{
	//	Student s;
	//	s.m_Id = id;
	//	s.m_Name = name;
	//	s.m_Pwd = pwd;
	//	this->vStu.push_back(s);
	//}
	//else if (select == 2)
	//{
	//	Teacher t;
	//	t.m_EmpId = id;
	//	t.m_Name = name;
	//	t.m_Pwd = pwd;
	//	this->vTea.push_back(t);
	//}
	
	// 可以直接使用初始化容器解决
	this->initVector();
}

// 查看账号
void Manager::showPerson()
{
	cout << "请选择查看内容：" << endl;
	int select = 0;
	cout << "1. 查看所有学生" << endl;
	cout << "2. 查看所有老师" << endl;
	cin >> select;

	if (select == 1)
	{
		cout << "所有学生信息如下：" << endl;
		for (vector<Student>::iterator it = this->vStu.begin(); it != this->vStu.end(); it++)
		{
			cout << "学号：" << it->m_Id << " 姓名：" << it->m_Name << " 密码：" << it->m_Pwd << endl;
		}
		system("pause");
		system("cls");
	}
	else if (select == 2)
	{
		cout << "所有老师信息如下：" << endl;
		for (vector<Teacher>::iterator it = this->vTea.begin(); it != this->vTea.end(); it++)
		{
			cout << "教师编号：" << it->m_EmpId << " 姓名：" << it->m_Name << " 密码：" << it->m_Pwd << endl;
		}
		system("pause");
		system("cls");
	}
}

// 查看机房信息
void Manager::showComputer()
{

}

// 清空预约记录
void Manager::cleanFile()
{

}

// 初始化容器
void Manager::initVector()
{
	// 读取学生文件中的信息
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}
	this->vStu.clear();

	Student s;
	while (ifs >> s.m_Id && ifs >> s.m_Name && ifs >> s.m_Pwd)
	{
		this->vStu.push_back(s);
	}
	cout << "当前学生数量为：" << this->vStu.size() << endl;
	ifs.close(); // 学生初始化

	// 读取老师文件中的信息
	ifs.open(TEACHER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}
	this->vTea.clear();

	Teacher t;
	while (ifs >> t.m_EmpId && ifs >> t.m_Name && ifs >> t.m_Pwd)
	{
		this->vTea.push_back(t);
	}
	cout << "当前教师数量为：" << this->vTea.size() << endl;
	ifs.close();
}