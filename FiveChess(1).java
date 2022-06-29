package com.jtb.五子棋项目;

import java.util.Random;
import java.util.Scanner;

public class FiveChess {
	public static void main(String[] args){
		
//		Random r = new Random();
//		int k = r.nextInt(15) % (15 - 1 + 1) + 1;
//		System.out.println(k);
		
		int row = 16;
		int col = 16;
		char[][] boards = new char[row][col];
		
		// 创建棋盘
		createChess(boards,row,col);
		
//		// 打印棋盘
//		showChess(boards,row,col);
		
		// 创建两个棋子
		char blackchess = '●';
		char whitechess = '○';
		
//		System.out.println("******************************");
//		System.out.println("********请选择模式*************");
//		System.out.println("*******1. 玩家vs玩家模式*******");
//		System.out.println("*******2. 玩家vs电脑模式*******");
//		System.out.println("*******3. 电脑vs电脑模式*******");
//		System.out.println("******************************");
		
		char ret = 0;
		
		while(true)
		{
			System.out.println("******************************");
			System.out.println("********请选择模式*************");
			System.out.println("*******1. 玩家vs玩家模式*******");
			System.out.println("*******2. 玩家vs电脑模式*******");
			System.out.println("*******3. 电脑vs电脑模式*******");
			System.out.println("******************************");
			
			Scanner input = new Scanner(System.in);
			int select = input.nextInt();
			if (select == 1)
			{
				// 打印棋盘
				showChess(boards,row,col);
				// 玩家 vs 玩家
				while(true)
				{
					//computerMove(boards,whitechess);
					isRepeat(boards,whitechess);
					showChess(boards,row,col);
					ret = isWin(boards,whitechess,row,col);
					if (ret != 0)
					{
						break;
					}
					//computerMove(boards,blackchess);
					isRepeat(boards,blackchess);
					showChess(boards,row,col);
					ret = isWin(boards,blackchess,row,col);
					if (ret != 0)
					{
						break;
					}
				}
				break;
			}
			else if(select == 2)
			{
				// 打印棋盘
				showChess(boards,row,col);
				// 玩家 vs 电脑
				while(true)
				{
					//computerMove(boards,whitechess);
					isRepeat(boards,whitechess);
					showChess(boards,row,col);
					ret = isWin(boards,whitechess,row,col);
					if (ret != 0)
					{
						break;
					}
					computerMove(boards,blackchess);
					//isRepeat(boards,blackchess);
					showChess(boards,row,col);
					ret = isWin(boards,blackchess,row,col);
					if (ret != 0)
					{
						break;
					}
				}
				break;
			}
			else if(select == 3)
			{
				// 打印棋盘
				showChess(boards,row,col);
				// 电脑 vs 电脑
				while(true)
				{
					computerMove(boards,whitechess);
					//isRepeat(boards,whitechess);
					showChess(boards,row,col);
					ret = isWin(boards,whitechess,row,col);
					if (ret != 0)
					{
						break;
					}
					computerMove(boards,blackchess);
					//isRepeat(boards,blackchess);
					showChess(boards,row,col);
					ret = isWin(boards,blackchess,row,col);
					if (ret != 0)
					{
						break;
					}
				}
				break;
			}
			else
			{
				System.out.println("选择错误，请重新选择");
				continue;
			}
		}
		

		
//		while(true)
//		{
//			//computerMove(boards,whitechess);
//			isRepeat(boards,whitechess);
//			showChess(boards,row,col);
//			ret = isWin(boards,whitechess,row,col);
//			if (ret != 0)
//			{
//				break;
//			}
//			//computerMove(boards,blackchess);
//			isRepeat(boards,blackchess);
//			showChess(boards,row,col);
//			ret = isWin(boards,blackchess,row,col);
//			if (ret != 0)
//			{
//				break;
//			}
//		}
		
		if (ret == '○')
		{
			System.out.println("恭喜白棋获胜");
		}
		else if(ret == '●')
		{
			System.out.println("恭喜黑棋获胜");
		}
		else if(ret == '*')
		{
			System.out.println("平局");
		}
		
		
	}
	
	// 电脑下棋
	public static void computerMove(char boards[][], char chess){
		Random r = new Random();
		
		while(true)
		{
			int row = r.nextInt(15) % (15 - 1 + 1) + 1;
			//System.out.println(k);
			int col = r.nextInt(15) % (15 - 1 + 1) + 1;
			if (boards[row][col] == '●' || boards[row][col] == '○')
			{
				System.out.println("电脑：该处有棋子，请重新落子");
				continue;
			}
			else
			{
				boards[row][col] = chess;
				break;
			}
		}
	}
	


	// 判断棋盘是否满了
	public static boolean isFull(char[][] boards, int row, int col){
		for (int i = 1; i < row; i++)
		{
			for (int j = 1; j < col; j++)
			{
				// 只要棋盘中有'╋'则证明没满
				if (boards[i][j] == '╋')
				{
					// 棋盘没满
					return false;
				}
			}
		}
		
		return true;
	}
	
	// 判断胜负
	public static char isWin(char[][] boards, char chess, int row, int col) {
		
		// 判断行
		for (int i = 1; i < row; i++)
		{
			for (int j = 1; j < col - 4; j++)
			{
				if (boards[i][j] == boards[i][j + 1]
					&& boards[i][j + 1] == boards[i][j + 2]
					&& boards[i][j + 2] == boards[i][j + 3]		
					&& boards[i][j + 3] == boards[i][j + 4]
					&& boards[i][j] != '╋')
				{
					//System.out.println(chess + "获胜");
					return boards[i][j];
				}
			}
		}
		
		// 判断列
		for (int i = 1; i < row - 4; i++)
		{
			for (int j = 1; j < col; j++)
			{
				if (boards[i][j] == boards[i + 1][j]
					&& boards[i + 1][j] == boards[i + 2][j]
					&& boards[i + 2][j] == boards[i + 3][j]		
					&& boards[i + 3][j] == boards[i + 4][j]
					&& boards[i][j] != '╋')
				{
					//System.out.println(chess + "获胜");
					return boards[i][j];
				}
			}
		}
		
		// 判断对角
		for (int i = 1; i < row - 4; i++)
		{
			for (int j = 1; j < col - 4;j++)
			{
				if (boards[i][j] == boards[i + 1][j + 1]
					&& boards[i + 1][j + 1] == boards[i + 2][j + 2]
					&& boards[i + 2][j + 2] == boards[i + 3][j + 3]
					&& boards[i + 3][j + 3] == boards[i + 4][j + 4]
					&& boards[i][j] != '╋')
				{
					//System.out.println(chess + "获胜");
					return boards[i][j];
				}
			}
		}
		
		for (int i = 1; i < row - 4; i++)
		{
			for (int j = 1; j < col - 4;j++) 
			{
				if (boards[i][j + 4] == boards[i + 1][j + 3]
					&& boards[i + 1][j + 3] == boards[i + 2][j + 2]
					&& boards[i + 2][j + 2] == boards[i + 3][j + 1]
					&& boards[i + 3][j + 1] == boards[i + 4][j]
					&& boards[i][j + 4] != '╋')
				{
					//System.out.println(chess + "获胜");
					return boards[i][j + 4];
				}
			}
		}
		
		if (isFull(boards,row,col))
		{
			System.out.println("棋盘已满");
			return '*';
		}
		
		return 0;
	}
	
	// 重复落子
	public static void isRepeat(char[][] boards, char chess){
		
		
		while(true)
		{
			if (chess == '●')
			{
				System.out.println("黑子下棋");
			}
			else
			{
				System.out.println("白子下棋");
			}
			
			System.out.println("请输入行数");
			@SuppressWarnings("resource")
			Scanner input = new Scanner(System.in);
			String st = input.next( ) ; //先获得一个String类型，相当于一个char型的数组
			
			String st1 = st;
			char ch[] = new char[10];
			ch = st1.toCharArray();

			
			char cccccc = st.charAt( 0 );
			
			int row = cccccc;
			
			if (row >= '1' && row <= '9')
			{
				row = row - 48;
			}
			if (row >= 'A' && row <= 'F')
			{
				row = row - 55;
			}
			if (row >= 'a' && row <= 'f')
			{
				row = row - 87;
			}
			
			if(((row < 1) || (row > 16)))
			{
				System.out.println("输入非法坐标，请重新落子");
				continue;
			}
//			else
//			{
//				if (ch[1] > 0)
//				{
//					System.out.println("输入非法坐标，请重新落子");
//					continue;
//				}
//			}
			
			
			
			System.out.println("请输入列数");
			
			st = input.next( ) ; //先获得一个String类型，相当于一个char型的数组
			
			st1 = st;
			ch = st1.toCharArray();
			
			cccccc = st.charAt( 0 );
			
			int col = cccccc;
			
			if (col >= '1' && col <= '9')
			{
				col = col - 48;
			}
			if (col >= 'A' && col <= 'F')
			{
				col = col - 55;
			}
			if (col >= 'a' && col <= 'f')
			{
				col = col - 87;
			}
		
			if(((col < 1) || (col > 16)))
			{
				System.out.println("输入非法坐标，请重新落子");
				continue;
			}
			if (boards[row][col] == '●' || boards[row][col] == '○')
			{
				System.out.println("玩家：该处有棋子，请重新落子");
				continue;
			}
			else
			{
				boards[row][col] = chess;
				break;
			}
		}
	}
	
	// 创建棋盘
	public static void createChess(char[][] boards, int row, int col){
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				boards[i][j] = '╋';
			}
		}
		
		char a = '0';
		for (int i = 0; i < 10; i++,a++)
		{
			boards[0][i] = a;
		}
		
		char b = 'A';
		for (int i = 10; i < 16; i++,b++)
		{
			boards[0][i] = b;
		}
		
		char c = '1';
		for (int i = 1; i < 10; i++,c++)
		{
			boards[i][0] = c;
		}
		
		char d = 'A';
		for (int i = 10; i < 16; i++,d++)
		{
			boards[i][0] = d;
		}
	}
	
	// 打印棋盘
	public static void showChess(char[][] boards, int row, int col){
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				System.out.print(boards[i][j]);
			}
			System.out.println();
		}
	}

}
