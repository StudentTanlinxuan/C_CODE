//#include<iostream>
//
//using namespace std;
//// 宠物类 基类
//class Pet
//{
//public:
//	Pet()
//	{
//		cout << "Pet 构造" << endl;
//	}
//	virtual void Speak()
//	{
//		cout << "How does a pet speak?" << endl;
//	}
//	~Pet()
//	{
//		cout << "Pet析构" << endl;
//	}
//};
//// 派生类 Cat
//class Cat : public Pet
//{
//public:
//	Cat()
//	{
//		cout << "cat 构造" << endl;
//	}
//	void Speak()
//	{
//		cout << "miao! miao!" << endl;
//	}
//	~Cat()
//	{
//		cout << "cat析构" << endl;
//	}
//};
//// 派生类 Dog
//class Dog : public Pet
//{
//public:
//	Dog()
//	{
//		cout << "Dog构造" << endl;
//	}
//	void Speak()
//	{
//		cout << "wang! wang!" << endl;
//	}
//	~Dog()
//	{
//		cout << "dog析构" << endl;
//	}
//};
//int main()
//{
//	Pet* pet = new Pet();
//	pet->Speak();
//	pet = new Cat();
//	pet->Speak();
//	pet = new Dog();
//	pet->Speak();
//	delete pet;
//	return 0;
//}
//// 多态满足的条件：1. 有继承关系   2. 子类重写父类中的虚函数
//// 多态使用条件：父类指针或引用指向子类对象
//// 重写：函数的返回值类型，函数名，参数列表完全一致称为重写