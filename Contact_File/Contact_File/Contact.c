#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	//���ļ���ͨѶ¼����Ϣ���ص�ͨѶ¼��
	LoadContact(ps);
}

//��������
void CheckCapaticy(struct Contact* ps);
void LoadContact(struct Contact* ps)
{
	struct PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact::%s\n", strerror(errno));
		return;//fread�ķ���ֵ��ʾ��ȡ�˼�������
	}
	//��ȡ�ļ��ŵ�ͨѶ¼��
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfRead))
	{
		CheckCapaticy(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}
	fclose(pfRead);
	pfRead = NULL;
}
void CheckCapaticy(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//����
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}
void AddContact(struct Contact* ps)
{
	//��⵱ǰͨѶ¼�Ƿ�����
	//1.�����ҪʱҪ����
	//2.�������Ҫ��ɶ�¶�����
	CheckCapaticy(ps);
	//��������
	printf("����������:>\n");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>\n");
	scanf("%d", &ps->data[ps->size].age);
	printf("�������Ա�:>\n");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:>\n");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:>\n");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
}
//��ӡ
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ�ո�\n");
	}
	else
	{
		int i = 0;
		//����
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");//�Ӹ��ű�������
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>\n");
	scanf("%s", name);
	//1.����
	int pos = FindByName(ps, name);
	//�ҵ��˷���Ԫ���±�
	//û�ҵ�����-1
	//2.ɾ��
	int j = 0;
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ���\n");
	}
}
void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����:>\n");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");//�Ӹ��ű�������
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

void ModifyContast(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸��˵�����:>\n");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������:>\n");
		scanf("%s", ps->data[pos].name);
		printf("����������:>\n");
		scanf("%d", &ps->data[pos].age);
		printf("�������Ա�:>\n");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>\n");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:>\n");
		scanf("%s", ps->data[pos].addr);
		printf("�޸ĳɹ�");
	}
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Contact*)e1)->data->name, ((struct Contact*)e2)->data->name);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Contact*)e1)->data->age - ((struct Contact*)e2)->data->age;
}
void SortContact(const struct Contact* ps)
{
	qsort(ps->data, ps->size, sizeof(ps->data[0]), cmp_stu_by_name);
}


void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}

void SaveContact(struct Contact* ps)
{
	FILE* pfWriter = fopen("contact.dat", "wb");
	if (pfWriter == NULL)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	//дͨѶ¼�е���Ϣ���ļ���
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfWriter);
	}
	fclose(pfWriter);
	pfWriter = NULL;
}