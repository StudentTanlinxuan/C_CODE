// 3.2.4 vector容量和大小
// 作用：对vector容器容量和大小进行操作
// 函数原型：empty();// 判断容器是否为空
// capacity();// 容器的容量
// size();// 返回容器中元素的个数
// resize(int num);// 重新指定容器的长度num,若容器变长，则以默认值填充新位置
//                 // 若容器变短，则末尾超出容器长度的元素被删除
// resize(int num, elem);// 重新指定容器长度num，若容器变长，则以elem值填充新位置
//                       // 若容器变短，则末尾超出容器长度的元素被删除  
#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test1()
{
	// 创建一个vector容器v
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	// 打印输出v
	printVector(v1);

	// empty()判断容器是否为空
	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "v1的容量为：" << v1.capacity() << endl;
		cout << "v1的大小为：" << v1.size() << endl;
	}

	// 重新指定大小
	v1.resize(15,100);// 可以利用重载版本来指定默认填充值，也就是参数2
	printVector(v1);// 如果重新指定的比原来了，默认用0来填充新的位置

	v1.resize(5);
	printVector(v1);// 如果重新指定的比原来短了，超出的部分会被删除掉
}

int main()
{
	test1();
	return 0;
}
// 总结：判断容器是否为空 empty()
//       返回容器容量 capacity()
//		 返回容器大小 size()
//		 重新指定大小 resize(int num)重载版本resize(int num, elem)
// 