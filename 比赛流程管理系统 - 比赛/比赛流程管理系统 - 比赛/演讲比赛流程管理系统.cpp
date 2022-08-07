#include"speechManager.h"


void test1()
{
	SpeechManager SM;

	  // 测试代码
	for (map<int, Speaker>::const_iterator it = SM.m_Speaker.begin(); it != SM.m_Speaker.end(); it++)
	{
		cout << "编号为：" << (*it).first << "姓名" << (*it).second.m_Name << "第一轮成绩为：" << (*it).second.m_Score[0] << "第二轮成绩为：" << (*it).second.m_Score[1] << endl;
	}
	SM.startSpeech();

	// 测试代码
	for (map<int, Speaker>::const_iterator it = SM.m_Speaker.begin(); it != SM.m_Speaker.end(); it++)
	{
		cout << "编号为：" << (*it).first << "姓名" << (*it).second.m_Name << "第一轮成绩为：" << (*it).second.m_Score[0] << "第二轮成绩为：" << (*it).second.m_Score[1] << endl;
	}
}

int main()
{
	//srand((unsigned int)time(NULL));
	//test1();
	SpeechManager SM;
	//SM.startSpeech();

	//  // 测试代码
	//for (map<int, Speaker>::const_iterator it = SM.m_Speaker.begin(); it != SM.m_Speaker.end(); it++)
	//{
	//	cout << "编号为：" << (*it).first << "姓名" << (*it).second.m_Name << "第一轮成绩为：" << (*it).second.m_Score[0] << "第二轮成绩为：" << (*it).second.m_Score[1] << endl;
	//}
	int input = 0;
	while (1)
	{
		SM.show_menu();
		cout << "请输入你的选择：" << endl;
		cin >> input;

		switch (input)
		{
		case 1:		// 开始演讲比赛
			SM.startSpeech();
			break;
		case 2:		// 查看往届记录
			SM.showRecord();
			break;
		case 3:		// 清空比赛记录
			SM.clearRecord();
			break;
		case 0:		// 退出比赛程序
			SM.exitsystem();
			break;
		default:
			cout << "输入错误，请重新输入" << endl;
			break;
		}
	}
	// 每一个switch分支中都加上清屏的操作 system("pause");
	return 0;
}