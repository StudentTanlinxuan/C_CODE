#include"workerManager.h"

// workerManager类构造函数的实现
workerManager::workerManager()
{

}

// workerManager类析构函数的实现
workerManager::~workerManager()
{

}

// 菜单的实现
void workerManager::Show_Menu()
{
	cout << "*****************************************" << endl;
	cout << "*****    欢迎使用职工管理系统！！   *****" << endl;
	cout << "*********   0. 退出管理程序  ************" << endl;
	cout << "*********   1. 增加职工信息  ************" << endl;
	cout << "*********   2. 显示职工信息  ************" << endl;
	cout << "*********   3. 删除离职员工  ************" << endl;
	cout << "*********   4. 修改职工信息  ************" << endl;
	cout << "*********   5. 查找职工信息  ************" << endl;
	cout << "*********   6. 按照编号排序  ************" << endl;
	cout << "*********   7. 清空所有文档  ************" << endl;
	cout << "*****************************************" << endl;
	cout << endl;
}

// 退出系统的实现
void workerManager::exitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);// 调用此函数直接退出程序
}

// 增加职工
void workerManager::addEmployee()
{
	string name;
	int id;
	int did;

	cout << "请输入要增加员工的姓名" << endl;
	cin >> name;
	cout << "请输入要增加员工的编号" << endl;
	cin >> id;
	cout << "请选择要增加员工的部门编号：1. 员工  2. 经理  3. 老板" << endl;
	cin >> did;
	Worker* worker = NULL;
	switch (did)
	{
	case 1:
		worker = new Employee(name, id, 1);
		cout << "增加成功" << endl;
		break;
	case 2:
		worker = new Manager(name, id, 2);
		cout << "增加成功" << endl;
		break;
	case 3:
		worker = new Boss(name, id, 3);
		cout << "增加成功" << endl;
		break;
	default:
		cout << "输入错误，请重新输入" << endl;
		break;
	}
	

}

// 显示职工信息
void workerManager::showEmployee()
{
	
}
