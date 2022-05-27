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
	// 总结：多态的满足条件：1. 有继承关系  2. 子类重写父类的虚函数
	// 多态的使用：父类中的指针或者引用指向子类中的对象
	Worker* worker = NULL;
	worker = new Employee("张三", 1, 1);
	worker->showInfo();
	worker->getDeptName();
	delete worker;

	worker = new Manager("李四", 2, 2);
	worker->showInfo();
	worker->getDeptName();
	delete worker;

	worker = new Boss("王五", 3, 3);
	worker->showInfo();
	worker->getDeptName();
	delete worker;
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
			wM.Add_Emp();
			break;
		case 2:// 显示职工
			wM.show_Emp();
			break;
		case 3:// 删除职工
			wM.Del_Emp();
			break;
		case 4:// 修改职工
			wM.Mod_Emp();
			break;
		case 5:// 查找职称
			wM.Find_Emp();
			break;
		case 6:// 排序
			wM.Sort_Emp();
			break;
		case 7:// 清空文档
			wM.Clean_File();
			break;
		default:
			system("cls");// 清屏操作
			break;
		}
	} while (input);
	system("pause");
	return 0;
}