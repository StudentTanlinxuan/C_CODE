#pragma once
#include<iostream>

using namespace std;

// 创建一个选手类
// 选手类中的属性主要有：选手姓名和分数
class Speaker
{
public:
	string m_Name; // 姓名
	double m_Score[2]; // 分数  最多有两轮成绩
};