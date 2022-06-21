/*3.10 案例 - 员工分组
* #### 3.10.1 案例描述
* 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
* 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
* 随机给10名员工分配部门和工资
* 通过multimap进行信息的插入  key(部门编号) value(员工)
* 分部门显示员工信息

#### 3.10.2 实现步骤
1. 创建10名员工，放到vector中
2. 遍历vector容器，取出每个员工，进行随机分组
3. 分组后，将员工部门编号作为key，具体员工作为value，放入到multimap容器中
4. 分部门显示员工信息
*/


#include<iostream>
#include<string>
#include<vector>
#include<ctime>
#include<map>

using namespace std;

class Staff
{
public:
	Staff(string name, int sal, int dept)
	{
		this->m_Name = name;
		this->m_Sal = sal;
		this->m_Dept = dept;
	}
public:
	string m_Name;
	int m_Sal; // salary 薪水
	int m_Dept; // department 部门
};
int main()
{
	srand((unsigned)time(NULL));

	// 1. 创建10名员工，放到vector中
	string name = "ABCDEFGHIJ";
	vector<Staff> v;
	for (int i = 0; i < 10; i++)
	{
		string s_name; 
		s_name += name[i];

		int s_sal = 0;
		int s_dept = 0;
		Staff s(s_name,s_sal,s_dept);
		v.push_back(s);
	}

	//// 测试是否将十个员工放入到容器v中
	//for (vector<Staff>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "姓名：" << it->m_Name << " 工资：" << (*it).m_Sal << endl;
	//}

	
	// 2. 遍历vector容器，取出每个员工，进行随机分组
	for (vector<Staff>::iterator it = v.begin(); it != v.end(); it++)
	{
		// 工资范围4000 - 6000
		it->m_Sal = rand() % (6000 - 4000 + 1) + 4000;
		// 部门分为：策划(1)、美术(2)、研发(3)
		it->m_Dept = rand() % (3 - 1 + 1) + 1;
	}

	//cout << rand() % (6000 - 4000 + 1) + 4000 << endl;
	// n - m
	// rand() % (m - n + 1) + n
	
	// 3. 分组后，将员工部门编号作为key，具体员工作为value，放入到multimap容器中
	multimap<int, string> m;

	for (int i = 0; i < v.size(); i++)
	{
		m.insert(make_pair(v[i].m_Dept, v[i].m_Name));
	}

	//for (multimap<int, string>::iterator it = m.begin(); it != m.end(); it++)
	//{
	//	cout << "key = " << it->first << " value = " << it->second << endl;
	//}
	
	// 4. 分部门显示员工信息
	
	// 部门分为：策划(1)、美术(2)、研发(3)
	// 策划部
	cout << "策划部" << endl;
	for (vector<Staff>::iterator it = v.begin(); it != v.end(); it++)
	{
		if (it->m_Dept == 1)
		cout << "姓名：" << it->m_Name << " 工资：" << (*it).m_Sal << endl;
	}
	cout << endl;
	// 美术部
	cout << "美术部" << endl;
	for (vector<Staff>::iterator it = v.begin(); it != v.end(); it++)
	{
		if (it->m_Dept == 2)
			cout << "姓名：" << it->m_Name << " 工资：" << (*it).m_Sal << endl;
	}
	cout << endl;
	// 研发部
	cout << "研发部" << endl;
	for (vector<Staff>::iterator it = v.begin(); it != v.end(); it++)
	{
		if (it->m_Dept == 3)
			cout << "姓名：" << it->m_Name << " 工资：" << (*it).m_Sal << endl;
	}

	return 0;
}

//#include<iostream>
//using namespace std;
//#include <vector>
//#include <string>
//#include <map>
//#include <ctime>

/*
- 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
- 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
- 随机给10名员工分配部门和工资
- 通过multimap进行信息的插入  key(部门编号) value(员工)
- 分部门显示员工信息
*/

//#define CEHUA  0
//#define MEISHU 1
//#define YANFA  2
//
//class Worker
//{
//public:
//	string m_Name;
//	int m_Salary;
//};
//
//void createWorker(vector<Worker>& v)
//{
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		Worker worker;
//		worker.m_Name = "员工";
//		worker.m_Name += nameSeed[i];
//
//		worker.m_Salary = rand() % 10000 + 10000; // 10000 ~ 19999
//		//将员工放入到容器中
//		v.push_back(worker);
//	}
//}
//
////员工分组
//void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//产生随机部门编号
//		int deptId = rand() % 3; // 0 1 2 
//
//		//将员工插入到分组中
//		//key部门编号，value具体员工
//		m.insert(make_pair(deptId, *it));
//	}
//}
//
//void showWorkerByGourp(multimap<int, Worker>& m)
//{
//	// 0  A  B  C   1  D  E   2  F G ...
//	cout << "策划部门：" << endl;
//
//	multimap<int, Worker>::iterator pos = m.find(CEHUA);
//	int count = m.count(CEHUA); // 统计具体人数
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
//	}
//
//	cout << "----------------------" << endl;
//	cout << "美术部门： " << endl;
//	pos = m.find(MEISHU);
//	count = m.count(MEISHU); // 统计具体人数
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
//	}
//
//	cout << "----------------------" << endl;
//	cout << "研发部门： " << endl;
//	pos = m.find(YANFA);
//	count = m.count(YANFA); // 统计具体人数
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++)
//	{
//		cout << "姓名： " << pos->second.m_Name << " 工资： " << pos->second.m_Salary << endl;
//	}
//
//}
//
//int main() {
//
//	srand((unsigned int)time(NULL));
//
//	//1、创建员工
//	vector<Worker>vWorker;
//	createWorker(vWorker);
//
//	//2、员工分组
//	multimap<int, Worker>mWorker;
//	setGroup(vWorker, mWorker);
//
//
//	//3、分组显示员工
//	showWorkerByGourp(mWorker);
//
//	////测试
//	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
//	//{
//	//	cout << "姓名： " << it->m_Name << " 工资： " << it->m_Salary << endl;
//	//}
//
//	system("pause");
//
//	return 0;
//}