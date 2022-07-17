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

// 开始比赛 - 比赛流程控制

//class ScoreSort
//{
//public:
//	bool operator()(Speaker s1, Speaker s2) const
//	{
//		return s1.m_Score[0] > s2.m_Score[0];
//	}
//};

void SpeechManager::startSpeech()
{
	// 第一轮比赛
	this->m_Index = 1;
	// 1. 抽签
	speechDraw(this->v1);
	// 2. 比赛

	speechGame(this->v1);

	// 3. 显示晋级结果
	
	// 第二轮比赛
	this->m_Index = 2;
	// 1. 抽签
	speechDraw(this->v2);
	// 2. 比赛
	
	cout << "-------------第" << this->m_Index << "轮比赛正式开始------------------ - " << endl;
	map<Speaker, int, ScoreSort2> temp;
	for (int i = 0; i < this->v2.size(); i++)
	{
		Speaker s;
		map<int, Speaker>::iterator pos = this->m_Speaker.find((this->v2[i]));
		s.m_Name = (*pos).second.m_Name;
		double avg = getScore();
		s.m_Score[(this->m_Index) - 1] = avg;
		temp.insert(make_pair(s, this->v2[i]));
	}

	cout << "第一小组比赛名次：" << endl;
	for (map<Speaker, int, ScoreSort2>::const_iterator it = temp.begin(); it != temp.end(); it++)
	{
		cout << "编号为：" << (*it).second << "姓名" << (*it).first.m_Name << " 成绩为：" << (*it).first.m_Score[(this->m_Index) - 1] << endl;
	}
	system("pause");

	// 3. 显示最终结果
	cout << "-----------晋级结果：----------------" << endl;
	map<Speaker, int, ScoreSort2> m;
	map<Speaker, int, ScoreSort2> m2;
	m2 = temp;
	map<Speaker, int, ScoreSort2>::iterator it = m2.begin();
	int i = 3;
	while (i--)
	{
		it++;
	}
	m2.erase(it, m2.end());

	m = m2;


	for (map<Speaker, int, ScoreSort2>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		this->vVector.push_back((*it).second);
		cout << "编号为：" << (*it).second << "姓名" << (*it).first.m_Name << " 成绩为：" << (*it).first.m_Score[this->m_Index - 1] << endl;
	}
	// 4. 保存分数
	
	// 包含头文件

	// 创建流对象
	ofstream ofs;

	// 打开文件
	ofs.open("speech.csv", ios::out);

	// 写文件

	for (map<Speaker, int, ScoreSort2>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		ofs << (*it).second << "," << (*it).first.m_Score[1] << endl;
	}

	// 关闭文件
	ofs.close();

	cout << "保存文件成功" << endl;
}

// 抽签
void SpeechManager::speechDraw(vector<int> v)
{
	// 第一轮比赛将12名选手随机分成两组
	srand((unsigned int)time(NULL));
	//cout << rand() % (12 - 1 + 1) + 1 << endl;

	cout << " 第《" << this->m_Index << "》轮比赛选手正在抽签" << endl;

	random_shuffle(v.begin(), v.end());
	// 使用random_shuffle必须要创建随机种子

	cout << "抽签后演讲顺序如下： " << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	system("pause");
}

// 评委打分
double SpeechManager::getScore()
{
	deque<int> dScore;
	// 评委打分
	for (int i = 0; i < 10; i++)
	{
		// 分值为600 ~ 1000
		double score = (rand() % (1000 - 600 + 1) + 600) / 10.f;
		//cout << score << endl;
		dScore.push_back(score);
	}
	// 排序
	sort(dScore.begin(), dScore.end()); // 默认升序

	// 去除 最高分 最低分
	dScore.pop_back();
	dScore.pop_front();

	// 求平均分
	double sum = accumulate(dScore.begin(), dScore.end(), 0);
	// accmumlate求容器元素累计之和
	//cout << sum << endl;
	double avg = sum / 8;
	//cout << "avg = " << avg << endl;
	return avg;
}

// 比赛
void SpeechManager::speechGame(vector<int> v1)
{
	cout << "-------------第" << this->m_Index << "轮比赛正式开始------------------ - " << endl;
	map<Speaker, int, ScoreSort> temp;
	for (int i = 0; i < v1.size() / 2; i++)
	{
		Speaker s;
		map<int, Speaker>::iterator pos = this->m_Speaker.find((v1[i]));
		s.m_Name = (*pos).second.m_Name;
		double avg = getScore();
		s.m_Score[(this->m_Index) - 1] = avg;
		//cout << s.m_Score[0] << endl;
		temp.insert(make_pair(s, v1[i]));
	}

	cout << "第一小组比赛名次：" << endl;
	for (map<Speaker, int, ScoreSort>::const_iterator it = temp.begin(); it != temp.end(); it++)
	{
		cout << "编号为：" << (*it).second << "姓名" << (*it).first.m_Name << " 成绩为：" << (*it).first.m_Score[(this->m_Index) - 1] << endl;
	}

	map<Speaker, int, ScoreSort> temp2;
	for (int i = v1.size() / 2; i < v1.size(); i++)
	{
		Speaker s;
		map<int, Speaker>::iterator pos = this->m_Speaker.find((v1[i]));
		s.m_Name = (*pos).second.m_Name;
		double avg = getScore();
		s.m_Score[(this->m_Index) - 1] = avg;
		//cout << s.m_Score[0] << endl;
		temp2.insert(make_pair(s, v1[i]));
	}

	cout << "第二小组比赛名次：" << endl;
	for (map<Speaker, int, ScoreSort>::const_iterator it = temp2.begin(); it != temp2.end(); it++)
	{
		cout << "编号为：" << (*it).second << "姓名" << (*it).first.m_Name << " 成绩为：" << (*it).first.m_Score[(this->m_Index) - 1] << endl;
	}
	cout << "------------- 第" << this->m_Index << "轮比赛完毕------------------ - " << endl;
	system("pause");

	cout << "-----------晋级结果：----------------" << endl;
	show_result(temp);
	show_result(temp2);
}

// 结果显示
void SpeechManager::show_result(map<Speaker, int, ScoreSort> temp)
{
	map<Speaker, int, ScoreSort> m;
	map<Speaker, int, ScoreSort> m2;
	m2 = temp;
	map<Speaker, int, ScoreSort>::iterator it = m2.begin();
	int i = 3;
	while (i--)
	{
		it++;
	}
	m2.erase(it, m2.end());

	m = m2;


	for (map<Speaker, int, ScoreSort>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		this->v2.push_back((*it).second);
		cout << "编号为：" << (*it).second << "姓名" << (*it).first.m_Name << " 成绩为：" << (*it).first.m_Score[0] << endl;
	}
}

//// 查看往届记录
//void SpeechManager::find_record()
//{
//	map<int, Speaker> temp;
//	for (int i = 0; i < 3; i++)
//	{
//		Speaker s;
//		map<int, Speaker>::iterator pos = this->m_Speaker.find((this->v2[i]));
//		s.m_Name = (*pos).second.m_Name;
//		double avg = getScore();
//		s.m_Score[1] = avg;
//		temp.insert(make_pair(this->v2[i], s));
//		cout << "冠军：" << (*pos).second.m_Name << "成绩：" << (*pos).second.m_Score[1] << endl;
//	}
//}


void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in); //输入流对象 读取文件

	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		cout << "文件不存在！" << endl;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空!" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//文件不为空
	this->fileIsEmpty = false;

	ifs.putback(ch); //读取的单个字符放回去

	string data;
	int index = 0;
	while (ifs >> data)
	{
		//cout << data << endl;
		vector<string>v;

		int pos = -1;
		int start = 0;

		while (true)
		{
			pos = data.find(",", start); //从0开始查找 ','
			if (pos == -1)
			{
				break; //找不到break返回
			}
			string tmp = data.substr(start, pos - start); //找到了,进行分割 参数1 起始位置，参数2 截取长度
			v.push_back(tmp);
			start = pos + 1;
		}

		this->m_Record.insert(make_pair(index, v));
		index++;
	}

	ifs.close();
}


void SpeechManager::showRecord()
{
	for (int i = 0; i < this->m_Record.size(); i++)
	{
		cout << "第" << i + 1 << "届 " <<
			"冠军编号：" << this->m_Record[i][0] << " 得分：" << this->m_Record[i][1] << " "
			"亚军编号：" << this->m_Record[i][2] << " 得分：" << this->m_Record[i][3] << " "
			"季军编号：" << this->m_Record[i][4] << " 得分：" << this->m_Record[i][5] << endl;
	}
	system("pause");
	system("cls");
}
