#pragma once// ��ֹͷ�ļ��ظ�����
#include<iostream>// ��׼���������������
#include"employee.h"
#include"Manager.h"
#include"Boss.h"

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
	void addEmployee();
	
	// ��ʾְ��
	void showEmployee();

	// ��������
	~workerManager();
};
