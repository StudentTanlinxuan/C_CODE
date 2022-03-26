#include"Contact.h"

void Test()
{
	Contact con;
	InitContact(&con);
	AddContact(&con);
	AddContact(&con);
	//AddContact(&con);
	//ModifContact(&con);
	//DeleteContact(&con);
	SortContact(&con);
	ShowContact(&con);
	DestoryContact(&con);
}
void menu()
{
	cout << "*************************************" << endl;
	cout << "****    1.ADD        2.DELETE    ****" << endl;
	cout << "****    3.MODIF      4.SHOW      ****" << endl;
	cout << "****    5.DESTORY    0.EXIT      ****" << endl;
	cout << "*************************************" << endl;

}
int main()
{
	Contact con;
	InitContact(&con);
	int input = 0;
	do
	{
		menu();
		cout << "请选择:>" << endl;
		cin >> input;
		switch (input)
		{
		case 0:
			cout << "退出通讯录" << endl;
			break;
		case 1:
			AddContact(&con);
			break;
		case 2:
			DeleteContact(&con);
			break;
		case 3:
			ModifContact(&con);
			break;
		case 4:
			ShowContact(&con);
			break;
		case 5:
			DestoryContact(&con);
			break;
		}
	} while (input);
	
	//Test();
	return 0;
}
