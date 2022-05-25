#include"workerManager.h"

// workerManager类构造函数的实现
workerManager::workerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);// 以输入流的方式打开文件 - 读文件

	// 文件不存在的情况
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}

	// 文件存在但数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL;
		ifs.close();
		return;
	}
}

// workerManager类析构函数的实现
workerManager::~workerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
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
	exit(0);// 调用此函数直接退出程序
}

// 增加职工
void workerManager::Add_Emp()
{
	cout << "请输入要添加员工数量" << endl;
	int addNum;// 保存用户的输入数量
	cin >> addNum;

	if (addNum > 0)
	{
		// 计算数组中的新大小
		int newsize = this->m_EmpNum + addNum;

		// 开辟新空间
		Worker** newSpace = new Worker * [newsize];

		// 将原空间下的数据放新空间中
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		// 批量添加新数据
		for (int i = 0; i < addNum; i++)
		{
			string name;
			int id;
			int did;

			cout << "请输入第" << i + 1 << "个员工的姓名" << endl;
			cin >> name;
			cout << "请输入第" << i + 1 << "个员工的编号" << endl;
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
			// 将创建职工信息，保存到数组中
			newSpace[this->m_EmpNum + i] = worker;
		}

		// 释放原来的空间
		delete[] this->m_EmpArray;

		// 更新新空间指向
		this->m_EmpArray = newSpace;

		// 更新数组中的个数
		this->m_EmpNum = newsize;

		// 成功添加后 保存到文件
		this->save();

		// 提示信息
		cout << "成功添加" << addNum << "个员工信息" << endl;
		
		// 更新职工不为空
		this->m_FileIsEmpty = false;
	}
	else
	{
		cout << "输入错误，请重新输入" << endl;
	}
	// 按任意键后清屏并回到上级目录
	system("pause");
	system("cls");
}

// 保存到文件
void workerManager::save()
{
	// 创建一个流对象
	ofstream ofs;

	// 打开文件
	ofs.open(FILENAME, ios::out);// 用输出的方式写文件 -- 写文件

	// 将每个人的数据写入文件
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Deptid << " "
			<< endl;
	}

	// 关闭文件
	ofs.close();
}

// 显示职工信息
void workerManager::showEmployee()
{
	
}
