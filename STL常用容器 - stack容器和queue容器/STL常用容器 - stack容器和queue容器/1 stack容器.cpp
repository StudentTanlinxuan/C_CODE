//// stack���ýӿ�
//// ���ã�ջ�������õĶ���ӿ�
//// ���캯����
//// stack<T> stk; // stack����ģ����ʵ�֣�stack�����Ĭ�Ϲ�����ʽ
//// stack(const stack& stk); // �������캯��
//// ��ֵ������
//// stack& operator=(const stack& stk); // ���صȺ������
//// ���ݴ�ȡ��
//// push(elem); // ��ջ������Ԫ��
//// pop(); // ��ջ���Ƴ���һ��Ԫ��
//// top(); // ����ջ��Ԫ��
//// ��С������
//// empty(); // �ж�ջ�Ƿ�Ϊ��
//// size(); // ����ջ�Ĵ�С
//
//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//void test1()
//{
//	// ջ���ص㣺�������ݽṹ���Ƚ�������ص�
//	stack<int> s;
//	// ��ջ
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//
//	// �������캯��
//	//stack<int> s2(s);
//	// operator=����
//	//stack<int> s2 = s;
//
//	// �鿴ջ�е�Ԫ�ظ���
//	cout << "ջ�е�Ԫ�ظ���Ϊ��" << s.size() << endl;
//
//	// �鿴ջ�е�Ԫ��
//	// ֻҪջ��Ϊ�գ��Ͳ鿴ջ��Ԫ�أ������г�ջ
//	while (!s.empty())
//	{
//		// �鿴ջ��Ԫ��
//		cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;
//
//		// ��ջ
//		s.pop();
//	}
//
//	// ��һ�����ջ�е�Ԫ�ظ��� 
//	cout << "���ջ��Ԫ��Ϊ��" << s.size() << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}
//// �ܽ᣺
//// empty(); �ж�ջ�Ƿ�Ϊ��
//// size(); ����ջ��Ԫ�ظ��� 
//// push(); ��ջ
//// pop(); ��ջ
//// top(); ����ջ��Ԫ��
//// stack<T> (const stack& stk); // �������캯��		
//// stack& operator=(const stack& stk); // ����=��ֵ����