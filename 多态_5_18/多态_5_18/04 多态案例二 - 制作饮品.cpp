//#include<iostream>
//
//using namespace std;
//
//// 多态案例二 - 制作饮品
//class AbstractDurking
//{
//public:
//	// 煮水
//	virtual void Boil() = 0;
//
//	// 冲泡
//	virtual void Brew() = 0;
//
//	// 倒入杯中
//	virtual void PourInCup() = 0;
//
//	// 加入辅料
//	virtual void PutSomething() = 0;
//
//	// 制作饮料
//	void makeDurking()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//// 制作咖啡
//class Coffee :public AbstractDurking
//{
//public:
//	// 子类必须重写父类中的纯虚函数
//	// 煮水
//	virtual void Boil()
//	{
//		cout << "煮农夫山泉" << endl;
//	}
//
//	// 冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//
//	// 倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	// 加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加入糖和牛奶" << endl;
//	}
//};
//// 制作茶水
//class Tea :public AbstractDurking
//{
//public:
//	// 子类必须重写父类中的纯虚函数
//	// 煮水
//	virtual void Boil()
//	{
//		cout << "煮矿泉水" << endl;
//	}
//
//	// 冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//
//	// 倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	// 加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加入枸杞" << endl;
//	}
//};
//// 制作函数
//void dowork(AbstractDurking* abs)
//{
//	abs->makeDurking();
//	delete abs;
//}
//
//void test1()
//{
//	// 制作咖啡
//	dowork(new Coffee);
//	cout << "--------------------------" << endl;
//	// 制作茶水
//	dowork(new Tea);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
