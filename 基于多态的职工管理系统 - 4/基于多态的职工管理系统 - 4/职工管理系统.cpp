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
			wM.show_Emp();
			break;
		case 3:// ɾ��ְ��
			wM.Del_Emp();
			break;
		case 4:// �޸�ְ��
			wM.Mod_Emp();
			break;
		case 5:// ����ְ��
			wM.Find_Emp();
			break;
		case 6:// ����
			wM.Sort_Emp();
			break;
		case 7:// ����ĵ�
			wM.Clean_File();
			break;
		default:
			system("cls");// ��������
			break;
		}
	} while (input);
	system("pause");
	return 0;
}