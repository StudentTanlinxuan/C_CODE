#include"workerManager.h"
#include"employee.h"
#include"Manager.h"
#include"Boss.h"

void test1()
{
	// ʵ���������߶���
	workerManager wM;
	// ����չʾ�˵���Ա����
	wM.Show_Menu();

}
void test2()
{
	Employee* e1 = new Employee("����", 1, 1);
	e1->showInfo();
	e1->getDeptName();
	delete e1;

	Manager* m1 = new Manager("����", 2, 2);
	m1->showInfo();
	m1->getDeptName();
	delete m1;

	Boss* b1 = new Boss("����", 3, 3);
	b1->showInfo();
	b1->getDeptName();
	delete b1;
}
int main()
{
	//test1();
	//test2();

	// ʵ���������߶���
	workerManager wM;
	int input = 0;
	do
	{
		// ����չʾ�˵���Ա����
		wM.Show_Menu();
		cout << "������Ҫִ�еĲ���" << endl;
		cin >> input;
		switch (input)
		{
		case 0:// �˳�����
			wM.exitSystem();
			break;
		case 1:// ����ְ��
			wM.addEmployee();
			break;
		case 2:// ��ʾְ��
			break;
		case 3:// ɾ��ְ��
			break;
		case 4:// �޸�ְ��
			break;
		case 5:// ����ְ��
			break;
		case 6:// ����
			break;
		case 7:// ����ĵ�
			break;
		default:
			system("cls");// ��������
			break;
		}
	} while (input);
	return 0;
}