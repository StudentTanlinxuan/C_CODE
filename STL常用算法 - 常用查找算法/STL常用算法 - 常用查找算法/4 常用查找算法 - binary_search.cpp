/*5.3.4 binary_search
* ���ã�����ָ��Ԫ���Ƿ����
* ����ԭ�ͣ�
* bool binary_search(iterator beg, iterator end, value);
* ����ָ��Ԫ�أ��鵽����true ����false
* ע�⣺�����������в�����
* beg ��ʼ������
* end ����������
* value ���ҵ�Ԫ��
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
//	//v.push_back(2); // ������������У����δ֪
//	// �����������Ƿ���9
//	// ע�⣺�������������������
//	bool ret = binary_search(v.begin(), v.end(), 9);
//	if (ret)
//	{
//		cout << "�ҵ���" << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
// �ܽ᣺���ֲ��ҷ�����Ч�ʺܸߣ�ֵ��ע����ǲ��ҵ������е�Ԫ�ر�������������
