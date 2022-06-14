//// stack常用接口
//// 作用：栈容器常用的对外接口
//// 构造函数：
//// stack<T> stk; // stack采用模板类实现，stack对象的默认构造形式
//// stack(const stack& stk); // 拷贝构造函数
//// 赋值操作：
//// stack& operator=(const stack& stk); // 重载等号运算符
//// 数据存取：
//// push(elem); // 像栈顶插入元素
//// pop(); // 从栈顶移除第一个元素
//// top(); // 返回栈顶元素
//// 大小操作：
//// empty(); // 判断栈是否为空
//// size(); // 返回栈的大小
//
//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//void test1()
//{
//	// 栈的特点：符合数据结构，先进后出的特点
//	stack<int> s;
//	// 入栈
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//
//	// 拷贝构造函数
//	//stack<int> s2(s);
//	// operator=操作
//	//stack<int> s2 = s;
//
//	// 查看栈中的元素个数
//	cout << "栈中的元素个数为：" << s.size() << endl;
//
//	// 查看栈中的元素
//	// 只要栈不为空，就查看栈顶元素，并进行出栈
//	while (!s.empty())
//	{
//		// 查看栈顶元素
//		cout << "栈顶元素为：" << s.top() << endl;
//
//		// 出栈
//		s.pop();
//	}
//
//	// 看一下最后栈中的元素个数 
//	cout << "最后栈中元素为：" << s.size() << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// 总结：
//// empty(); 判断栈是否为空
//// size(); 返回栈中元素个数 
//// push(); 入栈
//// pop(); 出栈
//// top(); 返回栈顶元素
//// stack<T> (const stack& stk); // 拷贝构造函数		
//// stack& operator=(const stack& stk); // 重载=赋值操作