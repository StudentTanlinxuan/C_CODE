#include <iostream>

using namespace std;
// 多态案例三 - 电脑组装
// 先抽象出每个零件的类
class CPU
{
public:
	// 抽象计算函数
	virtual void calculate() = 0;
};
class VideoCard// 显卡
{
public:
	// 抽象显示函数
	virtual void display() = 0;
};
class Memotry
{
public:
	// 抽象存储函数
	virtual void storage() = 0;
};
// 电脑类
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
// 具体零件厂商
// Inter
class InterCPU :public CPU
{
	virtual void calculate()
	{
		cout << "Inter的CPU开始计算了" << endl;
	}
};
class InterVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Inter的VideroCard开始计算了" << endl;
	}
};
class InterMemotry :public Memotry
{
	virtual void storage()
	{
		cout << "Inter的Memotry开始计算了" << endl;
	}
};
// Lenovo
class LenovoCPU :public CPU
{
	virtual void calculate()
	{
		cout << "Lenovo的CPU开始计算了" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Lenovo的VideroCard开始计算了" << endl;
	}
};
class LenovoMemotry :public Memotry
{
	virtual void storage()
	{
		cout << "Lenovo的Memotry开始计算了" << endl;
	}
};
void test1()
{
	// 因特尔电脑
	CPU* intercpu = new InterCPU;
	VideoCard* intervc = new InterVideoCard;
	Memotry* intermem = new InterMemotry;
	Computer* computer = new Computer(intercpu, intervc, intermem);
	computer->dowork();
	delete computer;
}
void test2()
{
	// 联想电脑
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
	// 因特尔和联想电脑
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