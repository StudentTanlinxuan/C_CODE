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
	// �ܽ᣺��̬������������1. �м̳й�ϵ  2. ������д������麯��
	// ��̬��ʹ�ã������е�ָ���������ָ�������еĶ���
	Worker* worker = NULL;
	worker = new Employee("����", 1, 1);
	worker->showInfo();
	worker->getDeptName();
	delete worker;

	worker = new Manager("����", 2, 2);
	worker->showInfo();
	worker->getDeptName();
	delete worker;

	worker = new Boss("����", 3, 3);
	worker->showInfo();
	worker->getDeptName();
	delete worker;
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
			wM.Add_Emp();
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