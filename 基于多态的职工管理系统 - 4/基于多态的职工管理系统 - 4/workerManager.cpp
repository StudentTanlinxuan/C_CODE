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

	// 文件存在且保存职工信息
	// 首先先要获取记录的职工信息数量
	int num = this->get_EmpNum();
	cout << "职工个数为" << num << endl;
	// 更新成员属性
	this->m_EmpNum = num;

	this->m_EmpArray = new Worker * [this->m_EmpNum];

	// 初始化职工
	init_Emp();

	//// 测试代码
	//for (int i = 0; i < this->m_EmpNum; i++)
	//{
	//	cout << "职工编号" << this->m_EmpArray[i]->m_Id
	//		<< "\t职工姓名" << this->m_EmpArray[i]->m_Name
	//		<< "\t部门编号" << this->m_EmpArray[i]->m_Deptid << endl;
	//}
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

// 获取职工数量
int workerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	int did;
	string name;

	int num = 0;
	while (ifs >> name && ifs >> id && ifs >> did)
	{
		// 记录人数
		num++;
	}
	ifs.close();

	return num;
}

// 初始化职工
void workerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	
	int id;
	int did;
	string name;
	
	int index = 0;
	while (ifs >> name && ifs >> id && ifs >> did)
	{
		Worker* worker = NULL;
		// 根据不同部门创建不同对象
		if (did == 1)
		{
			worker = new Employee(name, id, did);
		}
		else if (did == 2)
		{
			worker = new Manager(name, id, did);
		}
		else
		{
			worker = new Boss(name, id, did);
		}

		this->m_EmpArray[index] = worker;
		index++;
	}
}

// 显示职工信息
void workerManager::show_Emp()
{
	// 判断文件是否为空或者文件不存在
	if (this->m_FileIsEmpty)
	{
		cout << "文件为空或者文件不存在" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			// 展示数组中每个员工的信息
			this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

// 判断职工是否存在
int workerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	return index;
}

// 删除职工
void workerManager::Del_Emp()
{
	// 判断文件是否为空或者文件不存在
	if (this->m_FileIsEmpty)
	{
		cout << "文件为空或者文件不存在" << endl;
		system("pause");
		system("cls");// 清屏
	}
	else
	{
		int id;
		cout << "请输入要删除职工的编号" << endl;
		cin >> id;
		int ret = IsExist(id);
		if (ret == -1)
		{
			cout << "删除失败，该职工不存在或输入错误！" << endl;
		}
		else
		{
			// 删除职工，直接将该职工在数组中的位置由后一个职工来顶替即可
			for (int i = ret; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			// 职工数量减一
			this->m_EmpNum--;
			// 删除完将数据保存至文件
			this->save();
			// 提示删除成功
			cout << "删除成功" << endl;
		}
	}
	system("pause");
	system("cls");
}

// 修改职工
void workerManager::Mod_Emp()
{
	// 判断文件是否为空或者文件不存在
	if (this->m_FileIsEmpty)
	{
		cout << "文件为空或者文件不存在" << endl;
		system("pause");
		system("cls");// 清屏
	}
	else
	{
		cout << "请输入要修改职工的编号" << endl;
		int id;
		cin >> id;
		int ret = IsExist(id);
		if (ret == -1)
		{
			cout << "修改失败，该职工不存在或输入错误！" << endl;
		}
		else
		{
			string newname;
			int newid;
			int newdid;
			cout << "请输入新职工姓名" << endl;
			cin >> newname;
			cout << "请输入新职工编号" << endl;
			cin >> newid;
			cout << "请选择要修改的新职工职称：1. 职工  2. 经理  3. 老板" << endl;
			cin >> newdid;
			Worker* worker = NULL;
			switch (newdid)
			{
			case 1:
				worker = new Employee(newname, newid, 1);
				break;
			case 2:
				worker = new Manager(newname, newid, 2);
				break;
			case 3:
				worker = new Boss(newname, newid, 3);
				break;
			default:
				cout << "输入错误，请重新输入" << endl;
				break;
			}
			// 更新数据至原位置
			this->m_EmpArray[ret] = worker;
			// 保存到文件
			this->save();
			// 提示一下
			cout << "修改成功" << endl;
		}
	}
	system("pause");
	system("cls");// 清屏
}

// 查找
void workerManager::Find_Emp()
{
	// 判断文件是否为空或者文件不存在
	if (this->m_FileIsEmpty)
	{
		cout << "文件为空或者文件不存在" << endl;
		system("pause");
		system("cls");// 清屏
	}
	else
	{
		int select = 0;
		cout << "请输入以那种方式来查询？1. 职工姓名  2.职工编号" << endl;
		cin >> select;
		if (select == 2)
		{
			cout << "请输入要查找职工的编号" << endl;
			int id;
			cin >> id;
			int ret = IsExist(id);
			if (ret == -1)
			{
				cout << "查找失败，该职工不存在或输入错误！" << endl;
			}
			else
			{
				this->m_EmpArray[ret]->showInfo();
			}
		}
		else if (select == 1)
		{
			cout << "请输入要查找职工的姓名" << endl;
			string name;
			cin >> name;

			// 设置一个标志
			bool flag = false;

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					this->m_EmpArray[i]->showInfo();
					flag = true;
				}
			}
			if (flag == false)
			{
				cout << "查找失败，该职工不存在或输入错误！" << endl;
			}
		}
		else
		{
			cout << "输入错误" << endl;
		}
	}
	system("pause");
	system("cls");// 清屏
}

// 排序
void workerManager::Sort_Emp()
{
	// 判断文件是否为空或者文件不存在
	if (this->m_FileIsEmpty)
	{
		cout << "文件为空或者文件不存在" << endl;
		system("pause");
		system("cls");// 清屏
	}

	int select;
	cout << "请选择要排序的方式？" << endl;
	cout << "1. 按职工编号升序排序" << endl;
	cout << "2. 按职工编号降序排序" << endl;
	cin >> select;
	if (select == 1)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (this->m_EmpArray[i]->m_Id > this->m_EmpArray[j]->m_Id)
				{
					Worker* id = this->m_EmpArray[j];
					this->m_EmpArray[j] = this->m_EmpArray[i];
					this->m_EmpArray[i] = id;
				}
			}
		}
	}
	else if (select == 2)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (this->m_EmpArray[i]->m_Id < this->m_EmpArray[j]->m_Id)
				{
					Worker* id = this->m_EmpArray[j];
					this->m_EmpArray[j] = this->m_EmpArray[i];
					this->m_EmpArray[i] = id;
				}
			}
		}
	}
	else
	{
		cout << "输入错误" << endl;
	}
	cout << "排序成功，排序结果如下" << endl;
	// 保存到文件中
	this->save();
	this->show_Emp();

	// 此处不能加清屏操作，会出现问题
}

// 清空文档
void workerManager::Clean_File()
{
	cout << "请确认是否清空文档？" << endl;
	cout << "1. 确定" << endl;
	cout << "2. 取消" << endl;
	int select;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs;
		// 打开模式 ios::trunc 如果存在删除文件则重新创建
		ofs.open(FILENAME, ios::trunc);
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					delete this->m_EmpArray[i];
				}
			}
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
		}
		cout << "清空成功" << endl;
	}
	else if (select == 2)
	{
		cout << "取消清空" << endl;
	}
	else
	{
		cout << "选择错误" << endl;
	}
	system("pause");
	system("cls");
}