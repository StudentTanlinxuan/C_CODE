#pragma once
#include<string>
#include<iostream>
#include<map>

using namespace std;
class OrderFile
{
public:

	// ���캯��
	OrderFile();

	// ����ԤԼ��¼
	void updataOrder();

	// ��¼������   key -- ��¼������    value -- �����¼�ļ�ֵ����Ϣ
	map<int, map<string, string>> m_orderData;

	// ԤԼ��¼����
	int m_Size;
};
