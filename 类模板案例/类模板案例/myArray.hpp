#pragma once
#include<iostream>

using namespace std;

template<class T>
class myArray
{
public:
	// 有参构造 传入的参数为容量
	myArray(int capacity)
	{
		//cout << "myArray有参构造调用" << endl;
		this->m_Capaticy = capacity;
		this->m_Size = 0;
		this->pAddress = new T[m_Capaticy];
	}

	// 拷贝构造函数
	myArray(const myArray& arr)
	{
		//cout << "myArray有参拷贝构造调用" << endl;
		this->m_Capaticy = arr.m_Capaticy;
		this->m_Size = arr.m_Size;

		// 深拷贝
		this->pAddress = new T[this->m_Capaticy];

		// 将arr中的数据拷贝过来
		for (int i = 0; i < this->m_Size; i++)
		{
			// 如果T是对象，而且还包含指针，必须要重载 = 操作符，因为这个 = 不是 构造 而是赋值
			// 普通类型可以直接 = 但是指针类型需要深拷贝
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	// operator= 重载
	myArray& operator=(const myArray& arr)
	{
		//cout << "operator = 调用" << endl;
		// 如果原来数组中有内容，先将其释放掉
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
		// 返回自己本身
		return *this;
	}

	// 尾插法
	void Push_Back(const T& val)
	{
		// 先判断容量是否等于大小
		if (this->m_Size == this->m_Capaticy)
		{
			cout << "数据容量已满" << endl;
		}

		this->pAddress[this->m_Size] = val;// 在数组末尾插入数据
		this->m_Size++;// 更新数组大小
	}

	// 尾删法
	void Pop_Back()
	{
		// 让用户访问不到最后一个元素，即为尾删，逻辑上的删除
		if (this->m_Size == 0)
		{
			cout << "数组为空" << endl;
			return;
		}
		this->m_Size--;
	}

	// 通过下标方式访问数组中的元素 arr[0] = 100
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	// 返回数组容量
	int Get_Capacity()
	{
		return this->m_Capaticy;
	}
	// 返回数组大小
	int Get_Size()
	{
		return this->m_Size;
	}

	// 析构函数
	~myArray()
	{
		if (pAddress != NULL)
		{
			//cout << "myArray析构函数调用" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
private:
	// 数组的地址
	T* pAddress;
	// 数组容量
	int m_Capaticy;
	// 数组大小
	int m_Size;
};