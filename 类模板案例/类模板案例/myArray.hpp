#pragma once
#include<iostream>

using namespace std;

template<class T>
class myArray
{
public:
	// �вι��� ����Ĳ���Ϊ����
	myArray(int capacity)
	{
		//cout << "myArray�вι������" << endl;
		this->m_Capaticy = capacity;
		this->m_Size = 0;
		this->pAddress = new T[m_Capaticy];
	}

	// �������캯��
	myArray(const myArray& arr)
	{
		//cout << "myArray�вο����������" << endl;
		this->m_Capaticy = arr.m_Capaticy;
		this->m_Size = arr.m_Size;

		// ���
		this->pAddress = new T[this->m_Capaticy];

		// ��arr�е����ݿ�������
		for (int i = 0; i < this->m_Size; i++)
		{
			// ���T�Ƕ��󣬶��һ�����ָ�룬����Ҫ���� = ����������Ϊ��� = ���� ���� ���Ǹ�ֵ
			// ��ͨ���Ϳ���ֱ�� = ����ָ��������Ҫ���
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	// operator= ����
	myArray& operator=(const myArray& arr)
	{
		//cout << "operator = ����" << endl;
		// ���ԭ�������������ݣ��Ƚ����ͷŵ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capaticy = 0;
			this->m_Size = 0;
		}

		this->m_Capaticy = arr.m_Capaticy;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capaticy]; 

		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		// �����Լ�����
		return *this;
	}

	// β�巨
	void Push_Back(const T& val)
	{
		// ���ж������Ƿ���ڴ�С
		if (this->m_Size == this->m_Capaticy)
		{
			cout << "������������" << endl;
		}

		this->pAddress[this->m_Size] = val;// ������ĩβ��������
		this->m_Size++;// ���������С
	}

	// βɾ��
	void Pop_Back()
	{
		// ���û����ʲ������һ��Ԫ�أ���Ϊβɾ���߼��ϵ�ɾ��
		if (this->m_Size == 0)
		{
			cout << "����Ϊ��" << endl;
			return;
		}
		this->m_Size--;
	}

	// ͨ���±귽ʽ���������е�Ԫ�� arr[0] = 100
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	// ������������
	int Get_Capacity()
	{
		return this->m_Capaticy;
	}
	// ���������С
	int Get_Size()
	{
		return this->m_Size;
	}

	// ��������
	~myArray()
	{
		if (pAddress != NULL)
		{
			//cout << "myArray������������" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
private:
	// ����ĵ�ַ
	T* pAddress;
	// ��������
	int m_Capaticy;
	// �����С
	int m_Size;
};