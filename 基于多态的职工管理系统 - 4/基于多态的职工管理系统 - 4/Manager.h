#pragma once
#include<iostream>
#include<string>
#include"worker.h"

using namespace std;
// 创建一个经理类
class Manager : public Worker
{
public:
	// 重写父类中的纯虚函数

	// 显示个人信息
	virtual void showInfo();

	// 获取岗位名称
	virtual string getDeptName();

	// 构造函数
	Manager(string name, int id, int did);
};
