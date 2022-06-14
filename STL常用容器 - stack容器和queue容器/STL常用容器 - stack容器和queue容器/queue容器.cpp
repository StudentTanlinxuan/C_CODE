// queue常用接口
// 作用：队列容器常用对外的接口
// 构造函数：
// queue<int> que; // queue采用类模板实现，queue对象的默认构造形式
// queue(const queue& que); // 拷贝构造函数
// 赋值操作：
// queue& operator=(const queue& que); // 重载等号运算符
// 数据存取：
// push(elem);// 往队列中添加元素
// pop(); // 从队头移除元素
// front(); // 返回第一个元素 
// back(); // 返回最后一个元素
// 大小操作：
// empty(); // 判断队列是否为空
// size(); // 返回队列中元素个数

#include<iostream>
#include<queue>

using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
public:
	string m_Name;
	int m_Age;
};
void test1()
{
	// 创建一个队列
	queue<Person> q;

	// 准备数据
	Person p1("唐僧", 30);
	Person p2("孙悟空", 1000);
	Person p3("猪八戒", 700);
	Person p4("沙僧", 400);

	// 入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	// 查看队列中元素大小 
	cout << "队列大小为：" << q.size() << endl;

	// 查看队头和队尾，并出队
	while (!q.empty())
	{
		// 查看队头
		cout << "队头元素-----姓名：" << q.front().m_Name << " 年龄：" << q.front().m_Age << endl;

		// 查看队尾
		cout << "队尾元素-----姓名：" << q.back().m_Name << " 年龄：" << q.back().m_Age << endl;

		// 出队
		q.pop();
	}

	cout << "队列大小为：" << q.size() << endl;

}

int main()
{
	test1();
	return 0;
}
/*总结：- 入队   --- push
- 出队   --- pop
- 返回队头元素   --- front
- 返回队尾元素   --- back
- 判断队是否为空   --- empty
- 返回队列大小   --- size
*/