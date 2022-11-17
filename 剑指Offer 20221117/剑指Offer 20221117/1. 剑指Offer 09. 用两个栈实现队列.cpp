//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//class CQueue {
//public:
//    stack<int> m_s1;
//    stack<int> m_s2;
//public:
//    CQueue() {
//
//    }
//
//    void appendTail(int value) {
//        m_s1.push(value);
//    }
//
//    int deleteHead() {
//        int result;
//        if (m_s2.empty())
//        {
//            if (m_s1.empty())
//            {
//                return -1;
//            }
//            int size = m_s1.size();
//            while (size--)
//            {
//                m_s2.push(m_s1.top());
//                m_s1.pop();
//            }
//            result = m_s2.top();
//            m_s2.pop();
//            return result;
//        }
//        else
//        {
//            result = m_s2.top();
//            m_s2.pop();
//            return result;
//        }
//    }
//};
//
//int main()
//{
//    CQueue c;
//    cout << c.deleteHead() << endl;
//    c.appendTail(5);
//    c.appendTail(2);
//    cout << c.deleteHead() << endl;
//    cout << c.deleteHead() << endl;
//	return 0;
//}