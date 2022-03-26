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
		cout << "�洢�ռ�����" << endl;
		return;
	}
	cout << "������Ҫ�洢��ϵ�˵�����" << endl;
	cin >> ps->ContactArr[ps->size].name;
	cout << "������Ҫ�洢��ϵ�˵��Ա�" << endl;
	cin >> ps->ContactArr[ps->size].sex;
	cout << "������Ҫ�洢��ϵ�˵ĵ�ַ" << endl;
	cin >> ps->ContactArr[ps->size].addr;
	cout << "������Ҫ�洢��ϵ�˵ĵ绰" << endl;
	cin >> ps->ContactArr[ps->size].tele;
	cout << "������Ҫ�洢��ϵ�˵�����" << endl;
	cin >> ps->ContactArr[ps->size].age;
	ps->size++;
	cout << "��ӳɹ�" << endl;
	system("cls");// cls��ʾ�����ǰ��Ļ�ϵ�������ʾ
	
}

void ShowContact(Contact* ps)
{
	if (ps->size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	for (int i = 0; i < ps->size; i++)
	{
		cout << "���� " << ps->ContactArr[i].name << "\t";
		cout << "�Ա� " << ps->ContactArr[i].sex << "\t";
		cout << "��ַ" << ps->ContactArr[i].addr << "\t";
		cout << "�绰" << ps->ContactArr[i].tele << "\t";
		cout <<"����" << ps->ContactArr[i].age << endl;
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
	cout << "������Ҫɾ������ϵ��" << endl;
	cin >> name;
	int pos = FindContact(ps, name);
	if (pos == -1)
	{
		cout << "û�и���ϵ��" << endl;
	}
	else
	{
		for (int i = pos; i < ps->size; i++)
		{
			ps->ContactArr[i] = ps->ContactArr[i + 1];
		}
		ps->size--;
		cout << "ɾ���ɹ�" << endl;
	}
}

void ModifContact(Contact* ps)
{
	cout << "������Ҫ�޸ĵ���ϵ������" << endl;
	string name;
	cin >> name;
	int pos = FindContact(ps, name);
	if (pos == -1)
	{
		cout << "û�и���ϵ��" << endl;
	}
	else
	{
		cout << "������Ҫ�޸���ϵ�˵�����" << endl;
		cin >> ps->ContactArr[pos].name;
		cout << "������Ҫ�޸���ϵ�˵��Ա�" << endl;
		cin >> ps->ContactArr[pos].sex;
		cout << "������Ҫ�޸���ϵ�˵ĵ�ַ" << endl;
		cin >> ps->ContactArr[pos].addr;
		cout << "������Ҫ�޸���ϵ�˵ĵ绰" << endl;
		cin >> ps->ContactArr[pos].tele;
		cout << "������Ҫ�޸���ϵ�˵�����" << endl;
		cin >> ps->ContactArr[pos].age;
		cout << "�޸ĳɹ�" << endl;
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
	cout << "��ճɹ�" << endl;
}