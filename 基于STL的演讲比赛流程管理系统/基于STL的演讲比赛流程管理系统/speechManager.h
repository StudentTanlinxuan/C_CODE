#pragma once
#include<iostream>
#include<vector>
#include<map>
#include"Speaker.h"

using namespace std;
// 创建一个管理类
/* 功能描述：
* 提供菜单界面与用户交互
* 对演讲比赛流程进行控制
* 与文件的读写交互
*/

class SpeechManager
{
public:
	// 构造函数
	SpeechManager()
	{
		this->initSprrch();
		this->createSpeaker();
	}

	// 菜单
	void show_mnue();

	// 退出程序
	void exitsystem();

	// 初始化数据
	void initSprrch();

	// 初始化创建12位选手
	void createSpeaker();

	// 析构函数
	~SpeechManager()
	{

	}

public:
	// 比赛选手 容器 12人
	vector<int> v1;

	// 第一轮晋级 容器 6人	
	vector<int> v2;

	// 胜利前三名容器 3人
	vector<int> vVector;

	// 存放编号 以及对应的 具体选手 容器
	map<int, Speaker> m_Speaker;

	// 比赛轮数
	int m_Index;
};