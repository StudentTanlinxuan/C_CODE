#pragma once// 防止头文件重复包含
#include<iostream>// 标准的输入输出流对象
#include"employee.h"
#include"Manager.h"
#include"Boss.h"
#include<fstream>
#define FILENAME "enpFile.txt"

using namespace std;// 使用标准命名空间

// 管理类负责的功能：
// 1. 与用户进行沟通的菜单
// 2. 对职工进行增删改查操作
// 3. 与文件的读写交互
// 创建管理类
class workerManager
{
public:
	// 构造函数
	workerManager();

	// 菜单
	void Show_Menu();

	// 退出系统
	void exitSystem();

	// 增加职工
	void Add_Emp();
	
	// 显示职工
	void showEmployee();

	// 保存到文件
	void save();

	// 析构函数
	~workerManager();
public:
	// 记录文件中的人数个数
	int m_EmpNum;
	// 员工数组的指针
	Worker** m_EmpArray;
	// 标志文件是否为空
	bool m_FileIsEmpty;
};
