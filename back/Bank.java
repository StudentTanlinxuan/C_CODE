package com.tlx.back;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.Scanner;


/*
 * �����Ŀ�������˻�����ϵͳ(DOS)���Ŀ�ģ�ʹ�����������ʵ���˻���������ȡ���ѯ�ȹ��ܡ����Ҫ��
 * ��1�����еĿͻ��ֳ����࣬�����˻���SavingAccount���������˻���CreditAccount��,
 *     ���������ڴ����˻�������͸֧���������˻�����͸֧10000Ԫ��
 * ��2���״η�Ϊ�������ͻ���½���˳��������ܡ�ѡ�񿪻��������˺ź��롢���롢���������֤����ѡ�񴢻����͡���ʾ�����ɹ���
 * ��3��ѡ��ͻ���½�������û��������룬��½�ɹ���ѡ���ȡ���ѯ�������˳����������
 * ��4�����������ѡ���˳�����ϵͳ��
 */




public class Bank {
	static ArrayList<Account> accountArr = new ArrayList<Account>();
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		boolean quit = false;
		while(!quit){
			Menu();
			System.out.println("��ѡ��Ҫ���еĲ���:>");
			int select = input.nextInt();
			switch(select) {
				case 1:// ����1
					Open_Account();
					break;
				case 2:// �ͻ���¼
					Customer_Login();
					break;
				case 0:// �˳�
					System.out.println("�ݰݣ���ӭ�´�ʹ�ã�");
					quit = true;
					break;
				default:
					System.out.println("����������������룡");
					break;
			}
		}
		/*for (int i = 0; i < accountArr.size(); i++){
			System.out.println(accountArr.get(i).getM_Account());
			System.out.println(accountArr.get(i).getM_Password());
			System.out.println(accountArr.get(i).getM_Name());
			System.out.println(accountArr.get(i).getM_Id());
			System.out.println(accountArr.get(i).getM_Type());
		}*/
	}
	
	// �˵�
	static void Menu()
	{
		System.out.println("*****************************************");
		System.out.println("*****            1. ��       ��                           *****");
		System.out.println("*****            2. �ͻ���¼                          *****");
		System.out.println("*****            0. ��       ��                           *****");
		System.out.println("*****************************************");
	}
	
	// ����
	static void Open_Account()
	{
		Scanner input = new Scanner(System.in);
		// �����˺ź��롢���롢���������֤����ѡ�񴢻����͡���ʾ�����ɹ���
		System.out.println("������Ҫ�������˺ź���:>");
		String account = input.next(); // �˺�
		System.out.println("������Ҫ�������˺�����:>");
		String password = input.next(); // ����
		System.out.println("������Ҫ�������˺�����:>");
		String name = input.next(); // ����
		System.out.println("������Ҫ�������˺����֤����:>");
		String id = input.next(); // ���֤����
		String type;
		boolean quit = true;
		while(quit){
			Menu_Open_Account();
			System.out.println("��ѡ��Ҫ�������˻�:>");
			int select = input.nextInt();
			switch(select) {
				case 1:// �����˻�  
					quit = false;
					type = "SavingAccount";
					Account sa = new Account();
					sa.setM_Account(account);
					sa.setM_Password(password);
					sa.setM_Name(name);
					sa.setM_Id(id);
					sa.setM_Type(type);
					accountArr.add(sa);
					System.out.println("�����ɹ���");
					break;
				case 2:// �����˻� 
					quit = false;
					type = "CreditAccount";
					Account ca = new Account();
					ca.setM_Account(account);
					ca.setM_Password(password);
					ca.setM_Name(name);
					ca.setM_Id(id);
					ca.setM_Type(type);
					accountArr.add(ca);
					System.out.println("�����ɹ���");
					break;
				default:
					System.out.println("����������������룡");
					break;
			}
		}
	}
	
	static void Menu_Open_Account()
	{
		System.out.println("*****************************************");
		System.out.println("*****            1. �����˻�                           *****");
		System.out.println("*****            2. �����˻�                          *****");
		System.out.println("*****************************************");
	}
	
	// �ͻ���¼
	static void Customer_Login()
	{
		Scanner input = new Scanner(System.in);
		while(true)
		{
			System.out.println("�������˺�:>");
			String account = input.next();
			for (int i = 0; i < accountArr.size(); i++){
				System.out.println(accountArr.get(i).getM_Account());
				if (accountArr.get(i).getM_Account().equals(account)){
					// �˺���ȷ
					System.out.println("�˺���ȷ");
					while(true){
						System.out.println("����������:>");
						String id = input.next();
						if (accountArr.get(i).getM_Password().equals(id)){
							System.out.println("��½�ɹ�!");
							Transact_Business(i); // ����ҵ��
						}
						else
						{
							System.out.println("���������������������!");
						}
					}
				}
				else{
					System.out.println("�˺������������������!");
				}
			}
			
		}
	}
	
    // ����ҵ��
	static void Transact_Business(int pos)
	{
		Scanner input = new Scanner(System.in);
		boolean quit = false;
		while(!quit){
			Menu_Business();
			System.out.println("��ѡ��Ҫ���еĲ���:>");
			int select = input.nextInt();
			switch(select) {
				case 1:// ���
					Deposit(pos);
					break;
				case 2:// ȡ��
					Withdrawals(pos);
					break;
				case 3:// ��ѯ���
					ShowBalance(pos);
					break;
				case 0:// �˳�
					System.out.println("�ݰݣ���ӭ�´�ʹ�ã�");
					quit = true;
					break;
				default:
					System.out.println("����������������룡");
					break;
			}
		}
	}
	// ҵ��˵�
	static void Menu_Business()
	{
		// ��ȡ���ѯ�������˳�
		System.out.println("*****************************************");
		System.out.println("*****            1. ��       ��                           *****");
		System.out.println("*****            2. ȡ       ��                           *****");
		System.out.println("*****            3. ��ѯ���                           *****");
		System.out.println("*****            0. ��       ��                           *****");
		System.out.println("*****************************************");
	}
	// ���
	static void Deposit(int pos)
	{
		System.out.println("������Ҫ������Ŀ:>");
		Scanner input = new Scanner(System.in);
		double balance = input.nextDouble();
		accountArr.get(pos).setM_Balance(balance + (accountArr.get(pos).getM_Balance()));
	}
	// ȡ��
	static void Withdrawals(int pos)
	{
		boolean quit = true;
		while(quit){
			System.out.println("������Ҫȡ�����Ŀ:>");
			Scanner input = new Scanner(System.in);
			double balance = input.nextDouble();
			double U_balance = (accountArr.get(pos).getM_Balance()) - balance;
			if (U_balance < 0){
				if (accountArr.get(pos).getM_Type().equals("SavingAccount")){
					// ����Ǵ����˻�����������ɹ�
					System.out.println("�˻����㣬 ����������!");
				}
				else
				{
					// ���û�Ϊ�����˻�
					if (U_balance < -1000)
					{
						// �����˻�͸֧
						System.out.println("�����˻�͸֧�� ����������!");
					}
					else{
						quit = false;
						accountArr.get(pos).setM_Balance(U_balance);
					}
				}
			}
			else{
				quit = false;
				accountArr.get(pos).setM_Balance(U_balance);
			}
		}
	}
	// ��ʾ���
	static void ShowBalance(int pos)
	{
		System.out.println(accountArr.get(pos).getM_Balance());
	}
}
