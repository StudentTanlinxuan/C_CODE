#include<iostream>
#include<stack>
#include<set>
#include<algorithm>

using namespace std;
class MinStack {
public:
    stack<int> m_st;
    multiset<int> m_ms;
    int m_Min;
    int m_PrevMin;
public:
    /** initialize your data structure here. */
    MinStack() {
        m_Min = 9999;
        m_PrevMin = m_Min;
    }

    void push(int x) {
        this->m_st.push(x);
        //this->m_ms.insert(x);
        //if (m_PrevMin != m_Min)
        //{
        //    m_PrevMin = m_Min;
        //}
        //m_Min = m_Min < x ? m_Min : x;
        if (x < m_Min)
        {
            m_PrevMin = m_Min;
            m_Min = x;
            //m_PrevMin = m_Min;
        }
    }

    void pop() {
        //this->m_ms.erase(find(m_ms.begin(), m_ms.end(), m_st.top()));
        if (m_st.top() == m_Min)
        {
            m_Min = m_PrevMin;
        }
        this->m_st.pop();

    }

    int top() {
        return this->m_st.top();
    }

    int min() {
        //return *m_ms.begin();
        return m_Min;
    }
};


int main()
{
    MinStack ms;
    ms.push(2);
    ms.push(0);
    ms.push(3);
    ms.push(0);

    cout << ms.min() << endl;
    ms.pop();
    //cout << ms.top() << endl;
    cout << ms.min() << endl;
    ms.pop();
    cout << ms.min() << endl;
    ms.pop();
    cout << ms.min() << endl;

	return 0;
}