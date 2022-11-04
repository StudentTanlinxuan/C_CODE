//#include<iostream>
//#include<vector>
//
//using namespace std;
//bool isValidSudoku(vector<vector<char>>& board) 
//{
//	for (int i = 0; i < board.size(); i++)
//	{
//		vector<char> temp;
//		for (int j = 0; j < board.size(); j++)
//		{
//			if (board[i][j] == '.')
//			{
//				continue;
//			}
//			else
//			{
//				for (int k = 0; k < temp.size(); k++)
//				{
//					if (board[i][j] == temp[k])
//					{
//						return false;
//					}
//				}
//				temp.push_back(board[i][j]);
//			}
//		}
//	}
//	for (int i = 0; i < board.size(); i++)
//	{
//		vector<char> temp;
//		for (int j = 0; j < board.size(); j++)
//		{
//			if (board[j][i] == '.')
//			{
//				continue;
//			}
//			else
//			{
//				for (int k = 0; k < temp.size(); k++)
//				{
//					if (board[j][i] == temp[k])
//					{
//						return false;
//					}
//				}
//				temp.push_back(board[j][i]);
//			}
//		}
//	}
//	for (int cutr = 0; cutr < board.size(); cutr += 3)
//	{
//		for (int cutc = 0; cutc < board.size(); cutc += 3)
//		{
//			vector<char> t;
//			for (int i = 0 + cutr; i < 3 + cutr; i++)
//			{
//				for (int j = 0 + cutc; j < 3 + cutc; j++)
//				{
//					if (board[i][j] == '.')
//					{
//						continue;
//					}
//					else
//					{
//						for (int k = 0; k < t.size(); k++)
//						{
//							if (board[i][j] == t[k])
//							{
//								return false;
//							}
//						}
//						t.push_back(board[i][j]);
//					}
//				}
//			}
//		}
//	}
//	return true;
//}
//int main()
//{
//	vector<vector<char>> p;
//	vector<char> v1;
//	vector<char> v2;
//	vector<char> v3;
//	vector<char> v4;
//	vector<char> v5;
//	v1.push_back('.');
//	v1.push_back(2);
//	v1.push_back('.');
//	v1.push_back(3);
//	v1.push_back('.');
//	p.push_back(v1);
//
//	v2.push_back(1);
//	v2.push_back('.');
//	v2.push_back(3);
//	v2.push_back(4);
//	v2.push_back('.');
//	p.push_back(v2);
//
//	v3.push_back('.');
//	v3.push_back(5);
//	v3.push_back(1);
//	v3.push_back('.');
//	v3.push_back(2);
//	p.push_back(v3);
//
//	v4.push_back('.');
//	v4.push_back(3);
//	v4.push_back('.');
//	v4.push_back(2);
//	v4.push_back('.');
//	p.push_back(v4);
//
//	v5.push_back('.');
//	v5.push_back(4);
//	v5.push_back('.');
//	v5.push_back(5);
//	v5.push_back('.');
//	p.push_back(v5);
//
//	bool ret = isValidSudoku(p);
//	cout << ret << endl;
//	return 0;
//}