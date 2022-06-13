// 3.4 评委打分
// 案例描述：有五个选手ABCDE，10个评委分别给五个选手打分，去除最高分，去除最低分，求取平均分
/*
1. 创建五名选手，放到vector中
2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
3. sort算法对deque容器中分数排序，去除最高和最低分
4. deque容器遍历一遍，累加总分
5. 获取平均分
*/
#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<algorithm>
#include<ctime>

using namespace std;
// 创建一个选手 类
class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
public:
	string m_Name;
	int m_Score;
};

void CreatePlayer(vector<Person>& v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手：";
		name += nameseed[i];

		// 默认分数暂时取0分
		int score = 0;
		Person p(name, score);
		// 将创建的Person对象p插入到容器中
		v.push_back(p);
	}
}

void GetScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			// 分数范围在60~100之间
			int score = rand() % (41) + 60;
			d.push_back(score);
		}

		//// 测试一下d容器中是否将分数放入
		//cout << "选手： " << it->m_Name << " 打分： " << endl;
		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		//{
		//	cout << *dit << " ";
		//}
		//cout << endl;

		// 使用sort算法要包含头文件algorithm
		sort(d.begin(), d.end());

		// 去除最高分和最低分
		d.pop_back();
		d.pop_front();

		// 求去掉最高分和最低分的分数和
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		// 求平均值
		int avg = sum / (d.size());

		// 将每个人都平均分赋值到v中
		(*it).m_Score = avg;
	}
}

void ShowScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名为：" << (*it).m_Name << "  分数为：" << (*it).m_Score << endl;
	}
}

void test1()
{
	// 生成随机数种子
	srand((unsigned int)time(NULL));

	vector<Person> v;
	CreatePlayer(v);
	//// 测试打印一下v中的数据
	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "姓名为：" << (*it).m_Name << "  分数为：" << (*it).m_Score << endl;
	//}

	// 给五位选手分别打分
	GetScore(v);
	
	// 打印输出一下每位选手的最终分数
	ShowScore(v);

	//因此，如要产生[m, n]范围内的随机数num，可用：
	//int num = rand() % (n - m + 1) + m;

	//cout << rand()%(41) + 60 << endl;
}

int main()
{
	test1();
	return 0;
}
// 总结：因此，如要产生[m, n]范围内的随机数num，可用：
//       int num = rand() % (n - m + 1) + m;
//       选取不同的容器操作数据，可以提高代码的效率