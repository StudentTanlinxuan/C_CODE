//#include<iostream>
//
//using namespace std;
//// ������ ����
//class Pet
//{
//public:
//	Pet()
//	{
//		cout << "Pet ����" << endl;
//	}
//	virtual void Speak()
//	{
//		cout << "How does a pet speak?" << endl;
//	}
//	~Pet()
//	{
//		cout << "Pet����" << endl;
//	}
//};
//// ������ Cat
//class Cat : public Pet
//{
//public:
//	Cat()
//	{
//		cout << "cat ����" << endl;
//	}
//	void Speak()
//	{
//		cout << "miao! miao!" << endl;
//	}
//	~Cat()
//	{
//		cout << "cat����" << endl;
//	}
//};
//// ������ Dog
//class Dog : public Pet
//{
//public:
//	Dog()
//	{
//		cout << "Dog����" << endl;
//	}
//	void Speak()
//	{
//		cout << "wang! wang!" << endl;
//	}
//	~Dog()
//	{
//		cout << "dog����" << endl;
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
//// ��̬�����������1. �м̳й�ϵ   2. ������д�����е��麯��
//// ��̬ʹ������������ָ�������ָ���������
//// ��д�������ķ���ֵ���ͣ��������������б���ȫһ�³�Ϊ��д