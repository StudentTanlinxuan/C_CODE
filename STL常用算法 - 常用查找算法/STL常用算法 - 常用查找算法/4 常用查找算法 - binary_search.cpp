/*5.3.4 binary_search
* 作用：查找指定元素是否存在
* 函数原型：
* bool binary_search(iterator beg, iterator end, value);
* 查找指定元素，查到返回true 否则false
* 注意：在无序序列中不可用
* beg 开始迭代器
* end 结束迭代器
* value 查找的元素
*/


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//void test1()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//v.push_back(2); // 如果是无序序列，结果未知
//	// 查找容器中是否有9
//	// 注意：容器必须是有序的序列
//	bool ret = binary_search(v.begin(), v.end(), 9);
//	if (ret)
//	{
//		cout << "找到了" << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
// 总结：二分查找法查找效率很高，值得注意的是查找的容器中的元素必须是有序序列
