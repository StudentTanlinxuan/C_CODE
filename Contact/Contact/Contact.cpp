#include"Contact.h"

void InitContact(Contact* ps)
{
	for (int i = 0; i < MAX; i++)
	{
		ps->ContactArr[i].name = "0";
		ps->ContactArr[i].sex = "0";
		ps->ContactArr[i].addr = "0";
		ps->ContactArr[i].tele = "0";
		ps->ContactArr[i].age = 0;
	}
	ps->size = 0;
}

void AddContact(Contact* ps)
{
	if (ps->size == 1000)
	{
		cout << "存储空间已满" << endl;
		return;
	}
	cout << "请输入要存储联系人的姓名" << endl;
	cin >> ps->ContactArr[ps->size].name;
	cout << "请输入要存储联系人的性别" << endl;
	cin >> ps->ContactArr[ps->size].sex;
	cout << "请输入要存储联系人的地址" << endl;
	cin >> ps->ContactArr[ps->size].addr;
	cout << "请输入要存储联系人的电话" << endl;
	cin >> ps->ContactArr[ps->size].tele;
	cout << "请输入要存储联系人的年龄" << endl;
	cin >> ps->ContactArr[ps->size].age;
	ps->size++;
	cout << "添加成功" << endl;
	system("cls");// cls表示清除当前屏幕上的所有显示
	
}

void ShowContact(Contact* ps)
{
	if (ps->size == 0)
	{
		cout << "通讯录为空" << endl;
	}
	for (int i = 0; i < ps->size; i++)
	{
		cout << "姓名 " << ps->ContactArr[i].name << "\t";
		cout << "性别 " << ps->ContactArr[i].sex << "\t";
		cout << "地址" << ps->ContactArr[i].addr << "\t";
		cout << "电话" << ps->ContactArr[i].tele << "\t";
		cout <<"年龄" << ps->ContactArr[i].age << endl;
	}
}

int FindContact(Contact* ps,string name)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->ContactArr[i].name == name)
		{
			return i;
		}
	}
	return -1;
}
void DeleteContact(Contact* ps)
{
	if (ps->size == 0)
	{
		return;
	}
	string name;
	cout << "请输入要删除的联系人" << endl;
	cin >> name;
	int pos = FindContact(ps, name);
	if (pos == -1)
	{
		cout << "没有该联系人" << endl;
	}
	else
	{
		for (int i = pos; i < ps->size; i++)
		{
			ps->ContactArr[i] = ps->ContactArr[i + 1];
		}
		ps->size--;
		cout << "删除成功" << endl;
	}
}

void ModifContact(Contact* ps)
{
	cout << "请输入要修改的联系人姓名" << endl;
	string name;
	cin >> name;
	int pos = FindContact(ps, name);
	if (pos == -1)
	{
		cout << "没有该联系人" << endl;
	}
	else
	{
		cout << "请输入要修改联系人的姓名" << endl;
		cin >> ps->ContactArr[pos].name;
		cout << "请输入要修改联系人的性别" << endl;
		cin >> ps->ContactArr[pos].sex;
		cout << "请输入要修改联系人的地址" << endl;
		cin >> ps->ContactArr[pos].addr;
		cout << "请输入要修改联系人的电话" << endl;
		cin >> ps->ContactArr[pos].tele;
		cout << "请输入要修改联系人的年龄" << endl;
		cin >> ps->ContactArr[pos].age;
		cout << "修改成功" << endl;
	}
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	/*string str1 = ((struct Contact*)e1)->ContactArr->name;
	string str2 = ((struct Contact*)e2)->ContactArr->name;
	return str1.compare(str2);*/
	return ((struct Contact*)e1)->ContactArr->name.compare(((struct Contact*)e2)->ContactArr->name);
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Contact*)e1)->ContactArr->age - ((struct Contact*)e2)->ContactArr->age;
}
void SortContact(Contact* ps)
{
	qsort(ps->ContactArr, ps->size, sizeof(ps->ContactArr[0]), cmp_stu_by_name);
}

void DestoryContact(Contact* ps)
{
	ps->size = 0;
	cout << "清空成功" << endl;
}