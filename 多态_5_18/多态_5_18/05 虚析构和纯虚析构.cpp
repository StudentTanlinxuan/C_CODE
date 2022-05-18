//#include<iostream>
//
//using namespace std;
//// 4.7.5 虚析构和纯虚析构
//// 多态使用时，如果子类中有属性开辟在堆区，那么父类指针在释放时无法访问调用到子类的析构代码
//// 解决方法：将子类中的析构函数改为 虚析构 或者 纯虚析构
//// 虚析构和纯虚析构共性：
//// 1. 解决父类指针释放子类对象
//// 2. 都需要具体函数来实现
//// 虚函数和纯虚函数的区别：
//// 如果是纯虚析构函数，该类属于抽象类，无法实例化对象
//// 虚析构函数语法：virtual ~类名() {}
//// 纯虚析构函数语法：声明  virtual ~类名() = 0;
////					 实现  类名::~类名() {}
//
//// 动物类
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal构造函数调用" << endl;
//	}
//
//	//// 使用虚析构可以解决问题 父类指针释放子类对象不干净的问题
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal虚析构函数调用" << endl;
//	//}
//
//	// 纯虚析构函数   需要声明，也需要实现
//	// 有了纯虚析构函数后，该类也属于抽象类 不能实例化对象
//	virtual ~Animal() = 0;
//
//	// 纯虚函数
//	virtual void speak() = 0;
//};
//Animal::~Animal()
//{
//	cout << "Animal纯虚析构函数的调用" << endl;
//}
//// 猫类
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat构造函数的调用" << endl;
//		m_Name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << *m_Name << "小猫在说话" << endl;
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat析构函数调用" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//public:
//	string* m_Name;
//};
//void test1()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	// 父类指针在析构的时候，不会调用子类中的析构函数，导致如果子类中有在堆区上的数据，会引发内存泄漏
//	delete animal;
//}
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：1. 虚析构和纯虚析构都是用来解决父类指针释放子类对象的问题
////       2. 如果子类中没有创建在堆区上的数据，可以不用写虚析构函数或者纯虚析构函数
////       3. 拥有纯虚析构函数的类属于抽象类，不能实例化对象