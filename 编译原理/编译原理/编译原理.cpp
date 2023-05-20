#include<iostream>
#include<stack>
#include<queue>
#include<string>
using namespace std;

// ������������ȼ�
int priority(char c) {
	if (c == '+' || c == '-')
		return 1;
	else if (c == '*' || c == '/')
		return 2;
	else if (c == '(' || c == ')')
		return 0;
	else
		return -1;
}

// ���룺x = a*(b+c)
// �����(=,x,(*,a,(+,b,c)))
int main() 
{
	string expr; // �����׺���ʽ
	stack<char> oprstk; // ����������ջ
	stack<string> numstk; // ������ֺͱ�����ջ
	getline(cin, expr, '#');
	// getline(cin, temp, delim);
	// cin -- ��׼����������
	// temp -- ��������ַ��ı�����
	// delim -- ������־
	// getline���������Զ�ȡ���У�����ǰ����Ƕ��Ŀո�
	// ����������ַ��������������з�����EOF����������ȡ���з���delimΪ�Լ��趨�Ľ�����

	// �������ʽ��ת������Ԫʽ
	for (int i = 0; i < expr.length(); i++) 
	{
		char ch = expr[i];
		if (ch == ' ') 
		{
			continue; // ���Կո�
		}
		else if (isdigit(ch) || isalpha(ch))
		// int isdigit(char c)  �ж��ַ�c�Ƿ�Ϊ����   ����0���������֣����ط�0��������
		// int isalpha(int c)   �жϲ���c�Ƿ�Ϊ��ĸ
		{ 
			// ���ֻ������
			string num;
			while (i < expr.length() && (isdigit(expr[i]) || isalpha(expr[i]))) 
			{
				num += expr[i];
				i++;
			}
			i--;
			numstk.push(num);
		}
		else if (ch == '(') 
		{
			oprstk.push(ch);
		}
		else if (ch == ')') 
		{
			while (oprstk.top() != '(') 
			{
				string opnd1 = numstk.top();
				numstk.pop();
				string opnd2 = numstk.top();
				numstk.pop();
				string opr;
				opr += oprstk.top();
				oprstk.pop();
				string t = "(" + opr + "," + opnd2 + "," + opnd1 + ")";
				cout << t << endl;
				numstk.push(t);
			}
			oprstk.pop(); // ����������
		}
		else { // �����
			while (!oprstk.empty() && priority(oprstk.top()) >= priority(ch)) 
			{
				string opnd1 = numstk.top();
				numstk.pop();
				string opnd2 = numstk.top();
				numstk.pop();
				string opr;
				opr += oprstk.top();
				oprstk.pop();
				string t = "(" + opr + "," + opnd2 + "," + opnd1 + ")";
				cout << t << endl;
				numstk.push(t);
			}
			oprstk.push(ch);
		}
	}

	// ������ջ�е�Ԫ�ص���
	while (!oprstk.empty()) 
	{
		string opnd1 = numstk.top();
		numstk.pop();
		string opnd2 = numstk.top();
		numstk.pop();
		string opr;
		opr += oprstk.top();
		oprstk.pop();
		string t = "(" + opr + "," + opnd2 + "," + opnd1 + ")";
		cout << t << endl;
		numstk.push(t);
	}

	// �����Ԫʽ
	// cout << numstk.top() << endl;

	return 0;
}
