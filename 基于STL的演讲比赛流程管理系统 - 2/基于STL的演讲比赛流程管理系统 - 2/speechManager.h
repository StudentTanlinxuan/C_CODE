#pragma once
#include<iostream>
#include<vector>
#include<map>
#include"Speaker.h"
#include<algorithm>
#include<deque>
#include<numeric>
#include<fstream>

using namespace std;
// 创建一个管理类
/* 功能描述：
* 提供菜单界面与用户交互
* 对演讲比赛流程进行控制
* 与文件的读写交互
*/

class ScoreSort
{
public:
	bool operator()(Speaker s1, Speaker s2) const
	{
		return s1.m_Score[0] > s2.m_Score[0];
	}
};

class ScoreSort2
{
public:
	bool operator()(Speaker s1, Speaker s2) const
	{
		return s1.m_Score[1] > s2.m_Score[1];
	}
};

class SpeechManager
{
public:
	// 构造函数
	SpeechManager()
	{
		this->initSprrch();
		this->createSpeaker();
		this->loadRecord();
	}

	// 菜单
	void show_mnue();

	// 退出程序
	void exitsystem();

	// 初始化数据
	void initSprrch();

	// 初始化创建12位选手
	void createSpeaker();

	// 开始比赛 - 比赛流程控制
	void startSpeech();

	// 抽签
	void speechDraw(vector<int> v);

	// 评委打分
	double getScore();

	// 比赛
	void speechGame(vector<int> v);

	// 结果显示
	void show_result(map<Speaker, int, ScoreSort> temp);

	//读取记录
	void loadRecord();

	//文件为空的标志
	bool fileIsEmpty;

	//往届记录
	map<int, vector<string>> m_Record;

	//显示往届得分
	void showRecord();

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