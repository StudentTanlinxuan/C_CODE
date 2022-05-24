#include"workerManager.h"
#include"employee.h"
#include"Manager.h"
#include"Boss.h"

void test1()
{
	// 实例化管理者对象
	workerManager wM;
	// 调用展示菜单成员函数
	wM.Show_Menu();

}
void test2()
{
	Employee* e1 = new Employee("张三", 1, 1);
	e1->showInfo();
	e1->getDeptName();
	delete e1;

	Manager* m1 = new Manager("李四", 2, 2);
	m1->showInfo();
	m1->getDeptName();
	delete m1;

	Boss* b1 = new Boss("王五", 3, 3);
	b1->showInfo();
	b1->getDeptName();
	delete b1;
}
int main()
{
	//test1();
	//test2();

	// 实例化管理者对象
	workerManager wM;
	int input = 0;
	do
	{
		// 调用展示菜单成员函数
		wM.Show_Menu();
		cout << "请输入要执行的操作" << endl;
		cin >> input;
		switch (input)
		{
		case 0:// 退出程序
			wM.exitSystem();
			break;
		case 1:// 增加职工
			wM.addEmployee();
			break;
		case 2:// 显示职工
			break;
		case 3:// 删除职工
			break;
		case 4:// 修改职工
			break;
		case 5:// 查找职称
			break;
		case 6:// 排序
			break;
		case 7:// 清空文档
			break;
		default:
			system("cls");// 清屏操作
			break;
		}
	} while (input);
	return 0;
}