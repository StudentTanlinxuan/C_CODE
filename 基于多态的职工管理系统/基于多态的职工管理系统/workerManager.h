#pragma once// 防止头文件重复包含
#include<iostream>// 标准的输入输出流对象
#include"employee.h"
#include"Manager.h"
#include"Boss.h"

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
	void addEmployee();
	
	// 显示职工
	void showEmployee();

	// 析构函数
	~workerManager();
};
