#pragma once
#include<iostream>
#include<vector>
#include<map>
#include"Speaker.h"
#include<algorithm>
#include<deque>
#include<numeric>
#include<fstream>

using namespace std;
// ����һ��������
/* ����������
* �ṩ�˵��������û�����
* ���ݽ��������̽��п���
* ���ļ��Ķ�д����
*/

class ScoreSort
{
public:
	bool operator()(Speaker s1, Speaker s2) const
	{
		return s1.m_Score[0] > s2.m_Score[0];
	}
};

class ScoreSort2
{
public:
	bool operator()(Speaker s1, Speaker s2) const
	{
		return s1.m_Score[1] > s2.m_Score[1];
	}
};

class SpeechManager
{
public:
	// ���캯��
	SpeechManager()
	{
		this->initSprrch();
		this->createSpeaker();
		this->loadRecord();
	}

	// �˵�
	void show_mnue();

	// �˳�����
	void exitsystem();

	// ��ʼ������
	void initSprrch();

	// ��ʼ������12λѡ��
	void createSpeaker();

	// ��ʼ���� - �������̿���
	void startSpeech();

	// ��ǩ
	void speechDraw(vector<int> v);

	// ��ί���
	double getScore();

	// ����
	void speechGame(vector<int> v);

	// �����ʾ
	void show_result(map<Speaker, int, ScoreSort> temp);

	//��ȡ��¼
	void loadRecord();

	//�ļ�Ϊ�յı�־
	bool fileIsEmpty;

	//�����¼
	map<int, vector<string>> m_Record;

	//��ʾ����÷�
	void showRecord();

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