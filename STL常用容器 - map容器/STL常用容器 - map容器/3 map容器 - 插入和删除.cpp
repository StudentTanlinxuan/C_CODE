/*3.9.4 map插入和删除
* 作用：map容器进行插入数据和删除数据
* 函数原型：
* insert(elem); // 在容器中插入数据
* clear(); // 清空数据
* erase(pos); //删除pos迭代器所指的元素，返回下一个元素的迭代器。
* erase(beg,end); //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
* erase(key); //删除容器中值为key的元素。
*/

#include<iostream>
#include<map>

using namespace std;

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test1()
{
	map<int, int> m;
	
	// 插入
	// 第一种
	m.insert(pair<int, int>(1, 10));
	// 第二种
	m.insert(make_pair(2, 20));
	// 第三种
	m.insert(map<int, int>::value_type(3, 30));// map容器作用域下的值类型(key,value)
	// 第四种
	m[4] = 40;

	// []不建议插入，原因：如果写了一个容器中没有的key值，会自动创建出一个key = 输入的值，value = 0 的一对对组
	// 用途 可以利用key访问到value
	cout << m[4] << endl;
	printMap(m);

	// 删除
	m.erase(m.begin());
	printMap(m);

	m.erase(3); // 按照key的值删除
	printMap(m);

	// 清空
	//m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);

}

int main()
{
	test1();
	return 0;
}
// 总结：map插入方式很多，记住一个即可
//       erase() -- 删除       clear() -- 清空   insert() -- 插入