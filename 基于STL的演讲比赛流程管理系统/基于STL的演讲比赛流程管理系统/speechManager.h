#pragma once
#include<iostream>
#include<vector>
#include<map>
#include"Speaker.h"

using namespace std;
// ����һ��������
/* ����������
* �ṩ�˵��������û�����
* ���ݽ��������̽��п���
* ���ļ��Ķ�д����
*/

class SpeechManager
{
public:
	// ���캯��
	SpeechManager()
	{
		this->initSprrch();
		this->createSpeaker();
	}

	// �˵�
	void show_mnue();

	// �˳�����
	void exitsystem();

	// ��ʼ������
	void initSprrch();

	// ��ʼ������12λѡ��
	void createSpeaker();

	// ��������
	~SpeechManager()
	{

	}

public:
	// ����ѡ�� ���� 12��
	vector<int> v1;

	// ��һ�ֽ��� ���� 6��	
	vector<int> v2;

	// ʤ��ǰ�������� 3��
	vector<int> vVector;

	// ��ű�� �Լ���Ӧ�� ����ѡ�� ����
	map<int, Speaker> m_Speaker;

	// ��������
	int m_Index;
};