#include"speechManager.h"

// 打印菜单
void SpeechManager::show_mnue()
{
	cout << "*****************************" << endl;
	cout << "***** 欢迎参加演讲比赛 ******" << endl;
	cout << "***** 1. 开始演讲比赛  ******" << endl;
	cout << "***** 2. 查看往届记录  ******" << endl;
	cout << "***** 3. 清空比赛记录  ******" << endl;
	cout << "***** 0. 退出比赛程序  ******" << endl;
	cout << "*****************************" << endl;
}

// 退出程序
void SpeechManager::exitsystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

// 初始化数据
void SpeechManager::initSprrch()
{
	// 保证容器为空
	this->v1.clear();
	this->v2.clear();
	this->vVector.clear();
	this->m_Speaker.clear();
	// 初始化比赛轮数
	this->m_Index = 1;
}

// 初始化创建12位选手
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < 12; i++)
	{
		string name = "选手：";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;

		for (int i = 0; i < 2; i++)
		{
			sp.m_Score[i] = 0;
		}

		// 12名选手编号
		this->v1.push_back(i + 10001);

		// 选手编号 以及对应选手 存放在map容器中
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}


}
