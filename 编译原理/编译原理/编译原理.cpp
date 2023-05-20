#include<iostream>
#include<stack>
#include<queue>
#include<string>
using namespace std;

// 定义运算符优先级
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

// 输入：x = a*(b+c)
// 输出：(=,x,(*,a,(+,b,c)))
int main() 
{
	string expr; // 存放中缀表达式
	stack<char> oprstk; // 存放运算符的栈
	stack<string> numstk; // 存放数字和变量的栈
	getline(cin, expr, '#');
	// getline(cin, temp, delim);
	// cin -- 标准输入流函数
	// temp -- 用来存放字符的变量名
	// delim -- 结束标志
	// getline函数，可以读取整行，包含前导和嵌入的空格，
	// 并将其存入字符串对象，遇到换行符或者EOF结束，不读取换行符。delim为自己设定的结束符

	// 遍历表达式，转换成三元式
	for (int i = 0; i < expr.length(); i++) 
	{
		char ch = expr[i];
		if (ch == ' ') 
		{
			continue; // 忽略空格
		}
		else if (isdigit(ch) || isalpha(ch))
		// int isdigit(char c)  判断字符c是否为数字   返回0代表不是数字，返回非0代表数字
		// int isalpha(int c)   判断参数c是否为字母
		{ 
			// 数字或变量名
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
			oprstk.pop(); // 弹出左括号
		}
		else { // 运算符
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

	// 将符号栈中的元素弹出
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

	// 输出三元式
	// cout << numstk.top() << endl;

	return 0;
}
