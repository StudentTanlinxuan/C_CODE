#pragma once// ��ֹͷ�ļ��ظ�����
#include<iostream>// ��׼���������������
#include"employee.h"
#include"Manager.h"
#include"Boss.h"
#include<fstream>
#define FILENAME "enpFile.txt"

using namespace std;// ʹ�ñ�׼�����ռ�

// �����ฺ��Ĺ��ܣ�
// 1. ���û����й�ͨ�Ĳ˵�
// 2. ��ְ��������ɾ�Ĳ����
// 3. ���ļ��Ķ�д����
// ����������
class workerManager
{
public:
	// ���캯��
	workerManager();

	// �˵�
	void Show_Menu();

	// �˳�ϵͳ
	void exitSystem();

	// ����ְ��
	void Add_Emp();
	
	// ��ʾְ��
	void show_Emp();

	// ��ȡְ������
	int get_EmpNum();

	// ��ʼ��ְ��
	void init_Emp();

	// ���浽�ļ�
	void save();

	// �ж�ְ���Ƿ����
	int IsExist(int id);

	// ɾ��ְ��
	void Del_Emp();

	// �޸�ְ��
	void Mod_Emp();

	// ����
	void Find_Emp();

	// ����
	void Sort_Emp();

	// ����ĵ�
	void Clean_File();

	// ��������
	~workerManager();
public:
	// ��¼�ļ��е���������
	int m_EmpNum;
	// Ա�������ָ��
	Worker** m_EmpArray;
	// ��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
};
