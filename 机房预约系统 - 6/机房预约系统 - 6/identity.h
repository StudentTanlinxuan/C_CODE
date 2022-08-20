#pragma once // 防止头文件重复包含
#include<iostream>

using namespace std;

// 身份抽象基类  只需有头文件即可，不用.cpp文件
class Identity
{
public:
	// 操作菜单
	virtual void operMenu() = 0; // 纯虚函数
public:
	string m_Name; // 用户名
	string m_Pwd; // 密码
};