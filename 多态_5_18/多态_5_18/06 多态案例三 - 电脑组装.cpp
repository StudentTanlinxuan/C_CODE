#include <iostream>

using namespace std;
// ��̬������ - ������װ
// �ȳ����ÿ���������
class CPU
{
public:
	// ������㺯��
	virtual void calculate() = 0;
};
class VideoCard// �Կ�
{
public:
	// ������ʾ����
	virtual void display() = 0;
};
class Memotry
{
public:
	// ����洢����
	virtual void storage() = 0;
};
// ������
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* videocard, Memotry* memotry)
	{
		m_cpu = cpu;
		m_vc = videocard;
		m_mem = memotry;
	}
	void dowork()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;
	VideoCard* m_vc;
	Memotry* m_mem;
};
// �����������
// Inter
class InterCPU :public CPU
{
	virtual void calculate()
	{
		cout << "Inter��CPU��ʼ������" << endl;
	}
};
class InterVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Inter��VideroCard��ʼ������" << endl;
	}
};
class InterMemotry :public Memotry
{
	virtual void storage()
	{
		cout << "Inter��Memotry��ʼ������" << endl;
	}
};
// Lenovo
class LenovoCPU :public CPU
{
	virtual void calculate()
	{
		cout << "Lenovo��CPU��ʼ������" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Lenovo��VideroCard��ʼ������" << endl;
	}
};
class LenovoMemotry :public Memotry
{
	virtual void storage()
	{
		cout << "Lenovo��Memotry��ʼ������" << endl;
	}
};
void test1()
{
	// ���ض�����
	CPU* intercpu = new InterCPU;
	VideoCard* intervc = new InterVideoCard;
	Memotry* intermem = new InterMemotry;
	Computer* computer = new Computer(intercpu, intervc, intermem);
	computer->dowork();
	delete computer;
}
void test2()
{
	// �������
	cout << "-----------------------" << endl;
	CPU* lenovocpu = new LenovoCPU;
	VideoCard* lenovovc = new LenovoVideoCard;
	Memotry* lenovomem = new LenovoMemotry;
	Computer* computer = new Computer (lenovocpu, lenovovc, lenovomem);
	computer->dowork();
	delete computer;
}
void test3()
{
	// ���ض����������
	cout << "-----------------------" << endl;
	InterCPU* intercpu = new InterCPU;
	LenovoVideoCard* lenovovc = new LenovoVideoCard;
	LenovoMemotry* lenovomem = new LenovoMemotry;
	Computer* computer = new Computer(intercpu, lenovovc, lenovomem);
	computer->dowork();
	delete computer;
}
int main()
{
	test1();
	test2();
	test3();
	return 0;
}