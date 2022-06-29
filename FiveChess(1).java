package com.jtb.��������Ŀ;

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
		
		// ��������
		createChess(boards,row,col);
		
//		// ��ӡ����
//		showChess(boards,row,col);
		
		// ������������
		char blackchess = '��';
		char whitechess = '��';
		
//		System.out.println("******************************");
//		System.out.println("********��ѡ��ģʽ*************");
//		System.out.println("*******1. ���vs���ģʽ*******");
//		System.out.println("*******2. ���vs����ģʽ*******");
//		System.out.println("*******3. ����vs����ģʽ*******");
//		System.out.println("******************************");
		
		char ret = 0;
		
		while(true)
		{
			System.out.println("******************************");
			System.out.println("********��ѡ��ģʽ*************");
			System.out.println("*******1. ���vs���ģʽ*******");
			System.out.println("*******2. ���vs����ģʽ*******");
			System.out.println("*******3. ����vs����ģʽ*******");
			System.out.println("******************************");
			
			Scanner input = new Scanner(System.in);
			int select = input.nextInt();
			if (select == 1)
			{
				// ��ӡ����
				showChess(boards,row,col);
				// ��� vs ���
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
				// ��ӡ����
				showChess(boards,row,col);
				// ��� vs ����
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
				// ��ӡ����
				showChess(boards,row,col);
				// ���� vs ����
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
				System.out.println("ѡ�����������ѡ��");
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
		
		if (ret == '��')
		{
			System.out.println("��ϲ�����ʤ");
		}
		else if(ret == '��')
		{
			System.out.println("��ϲ�����ʤ");
		}
		else if(ret == '*')
		{
			System.out.println("ƽ��");
		}
		
		
	}
	
	// ��������
	public static void computerMove(char boards[][], char chess){
		Random r = new Random();
		
		while(true)
		{
			int row = r.nextInt(15) % (15 - 1 + 1) + 1;
			//System.out.println(k);
			int col = r.nextInt(15) % (15 - 1 + 1) + 1;
			if (boards[row][col] == '��' || boards[row][col] == '��')
			{
				System.out.println("���ԣ��ô������ӣ�����������");
				continue;
			}
			else
			{
				boards[row][col] = chess;
				break;
			}
		}
	}
	


	// �ж������Ƿ�����
	public static boolean isFull(char[][] boards, int row, int col){
		for (int i = 1; i < row; i++)
		{
			for (int j = 1; j < col; j++)
			{
				// ֻҪ��������'��'��֤��û��
				if (boards[i][j] == '��')
				{
					// ����û��
					return false;
				}
			}
		}
		
		return true;
	}
	
	// �ж�ʤ��
	public static char isWin(char[][] boards, char chess, int row, int col) {
		
		// �ж���
		for (int i = 1; i < row; i++)
		{
			for (int j = 1; j < col - 4; j++)
			{
				if (boards[i][j] == boards[i][j + 1]
					&& boards[i][j + 1] == boards[i][j + 2]
					&& boards[i][j + 2] == boards[i][j + 3]		
					&& boards[i][j + 3] == boards[i][j + 4]
					&& boards[i][j] != '��')
				{
					//System.out.println(chess + "��ʤ");
					return boards[i][j];
				}
			}
		}
		
		// �ж���
		for (int i = 1; i < row - 4; i++)
		{
			for (int j = 1; j < col; j++)
			{
				if (boards[i][j] == boards[i + 1][j]
					&& boards[i + 1][j] == boards[i + 2][j]
					&& boards[i + 2][j] == boards[i + 3][j]		
					&& boards[i + 3][j] == boards[i + 4][j]
					&& boards[i][j] != '��')
				{
					//System.out.println(chess + "��ʤ");
					return boards[i][j];
				}
			}
		}
		
		// �ж϶Խ�
		for (int i = 1; i < row - 4; i++)
		{
			for (int j = 1; j < col - 4;j++)
			{
				if (boards[i][j] == boards[i + 1][j + 1]
					&& boards[i + 1][j + 1] == boards[i + 2][j + 2]
					&& boards[i + 2][j + 2] == boards[i + 3][j + 3]
					&& boards[i + 3][j + 3] == boards[i + 4][j + 4]
					&& boards[i][j] != '��')
				{
					//System.out.println(chess + "��ʤ");
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
					&& boards[i][j + 4] != '��')
				{
					//System.out.println(chess + "��ʤ");
					return boards[i][j + 4];
				}
			}
		}
		
		if (isFull(boards,row,col))
		{
			System.out.println("��������");
			return '*';
		}
		
		return 0;
	}
	
	// �ظ�����
	public static void isRepeat(char[][] boards, char chess){
		
		
		while(true)
		{
			if (chess == '��')
			{
				System.out.println("��������");
			}
			else
			{
				System.out.println("��������");
			}
			
			System.out.println("����������");
			@SuppressWarnings("resource")
			Scanner input = new Scanner(System.in);
			String st = input.next( ) ; //�Ȼ��һ��String���ͣ��൱��һ��char�͵�����
			
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
				System.out.println("����Ƿ����꣬����������");
				continue;
			}
//			else
//			{
//				if (ch[1] > 0)
//				{
//					System.out.println("����Ƿ����꣬����������");
//					continue;
//				}
//			}
			
			
			
			System.out.println("����������");
			
			st = input.next( ) ; //�Ȼ��һ��String���ͣ��൱��һ��char�͵�����
			
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
				System.out.println("����Ƿ����꣬����������");
				continue;
			}
			if (boards[row][col] == '��' || boards[row][col] == '��')
			{
				System.out.println("��ң��ô������ӣ�����������");
				continue;
			}
			else
			{
				boards[row][col] = chess;
				break;
			}
		}
	}
	
	// ��������
	public static void createChess(char[][] boards, int row, int col){
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				boards[i][j] = '��';
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
	
	// ��ӡ����
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
