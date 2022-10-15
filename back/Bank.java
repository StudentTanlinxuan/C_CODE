package com.tlx.back;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.Scanner;


/*
 * 设计题目：银行账户管理系统(DOS)设计目的：使用面向对象技术实现账户开户、存款、取款、查询等功能。设计要求：
 * （1）银行的客户分成俩类，储蓄账户（SavingAccount）和信用账户（CreditAccount）,
 *     区别是在于储蓄账户不允许透支，而信用账户可以透支10000元。
 * （2）首次分为开户、客户登陆、退出三个功能。选择开户，输入账号号码、密码、姓名、身份证号码选择储户类型。提示开户成功。
 * （3）选择客户登陆，输入用户名和密码，登陆成功后，选择存款、取款、查询余额、或者退出四项操作。
 * （4）当操作完后，选择退出整个系统。
 */




public class Bank {
	static ArrayList<Account> accountArr = new ArrayList<Account>();
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		boolean quit = false;
		while(!quit){
			Menu();
			System.out.println("请选择要进行的操作:>");
			int select = input.nextInt();
			switch(select) {
				case 1:// 开户1
					Open_Account();
					break;
				case 2:// 客户登录
					Customer_Login();
					break;
				case 0:// 退出
					System.out.println("拜拜，欢迎下次使用！");
					quit = true;
					break;
				default:
					System.out.println("输入错误，请重新输入！");
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
	
	// 菜单
	static void Menu()
	{
		System.out.println("*****************************************");
		System.out.println("*****            1. 开       户                           *****");
		System.out.println("*****            2. 客户登录                          *****");
		System.out.println("*****            0. 退       出                           *****");
		System.out.println("*****************************************");
	}
	
	// 开户
	static void Open_Account()
	{
		Scanner input = new Scanner(System.in);
		// 输入账号号码、密码、姓名、身份证号码选择储户类型。提示开户成功。
		System.out.println("请输入要创建的账号号码:>");
		String account = input.next(); // 账号
		System.out.println("请输入要创建的账号密码:>");
		String password = input.next(); // 密码
		System.out.println("请输入要创建的账号姓名:>");
		String name = input.next(); // 姓名
		System.out.println("请输入要创建的账号身份证号码:>");
		String id = input.next(); // 身份证号码
		String type;
		boolean quit = true;
		while(quit){
			Menu_Open_Account();
			System.out.println("请选择要创建的账户:>");
			int select = input.nextInt();
			switch(select) {
				case 1:// 储蓄账户  
					quit = false;
					type = "SavingAccount";
					Account sa = new Account();
					sa.setM_Account(account);
					sa.setM_Password(password);
					sa.setM_Name(name);
					sa.setM_Id(id);
					sa.setM_Type(type);
					accountArr.add(sa);
					System.out.println("开户成功！");
					break;
				case 2:// 信用账户 
					quit = false;
					type = "CreditAccount";
					Account ca = new Account();
					ca.setM_Account(account);
					ca.setM_Password(password);
					ca.setM_Name(name);
					ca.setM_Id(id);
					ca.setM_Type(type);
					accountArr.add(ca);
					System.out.println("开户成功！");
					break;
				default:
					System.out.println("输入错误，请重新输入！");
					break;
			}
		}
	}
	
	static void Menu_Open_Account()
	{
		System.out.println("*****************************************");
		System.out.println("*****            1. 储蓄账户                           *****");
		System.out.println("*****            2. 信用账户                          *****");
		System.out.println("*****************************************");
	}
	
	// 客户登录
	static void Customer_Login()
	{
		Scanner input = new Scanner(System.in);
		while(true)
		{
			System.out.println("请输入账号:>");
			String account = input.next();
			for (int i = 0; i < accountArr.size(); i++){
				System.out.println(accountArr.get(i).getM_Account());
				if (accountArr.get(i).getM_Account().equals(account)){
					// 账号正确
					System.out.println("账号正确");
					while(true){
						System.out.println("请输入密码:>");
						String id = input.next();
						if (accountArr.get(i).getM_Password().equals(id)){
							System.out.println("登陆成功!");
							Transact_Business(i); // 办理业务
						}
						else
						{
							System.out.println("密码输入错误，请重新输入!");
						}
					}
				}
				else{
					System.out.println("账号输入错误，请重新输入!");
				}
			}
			
		}
	}
	
    // 办理业务
	static void Transact_Business(int pos)
	{
		Scanner input = new Scanner(System.in);
		boolean quit = false;
		while(!quit){
			Menu_Business();
			System.out.println("请选择要进行的操作:>");
			int select = input.nextInt();
			switch(select) {
				case 1:// 存款
					Deposit(pos);
					break;
				case 2:// 取款
					Withdrawals(pos);
					break;
				case 3:// 查询余额
					ShowBalance(pos);
					break;
				case 0:// 退出
					System.out.println("拜拜，欢迎下次使用！");
					quit = true;
					break;
				default:
					System.out.println("输入错误，请重新输入！");
					break;
			}
		}
	}
	// 业务菜单
	static void Menu_Business()
	{
		// 存款、取款、查询余额、或者退出
		System.out.println("*****************************************");
		System.out.println("*****            1. 存       款                           *****");
		System.out.println("*****            2. 取       款                           *****");
		System.out.println("*****            3. 查询余额                           *****");
		System.out.println("*****            0. 退       出                           *****");
		System.out.println("*****************************************");
	}
	// 存款
	static void Deposit(int pos)
	{
		System.out.println("请输入要存款的数目:>");
		Scanner input = new Scanner(System.in);
		double balance = input.nextDouble();
		accountArr.get(pos).setM_Balance(balance + (accountArr.get(pos).getM_Balance()));
	}
	// 取款
	static void Withdrawals(int pos)
	{
		boolean quit = true;
		while(quit){
			System.out.println("请输入要取款的数目:>");
			Scanner input = new Scanner(System.in);
			double balance = input.nextDouble();
			double U_balance = (accountArr.get(pos).getM_Balance()) - balance;
			if (U_balance < 0){
				if (accountArr.get(pos).getM_Type().equals("SavingAccount")){
					// 如果是储存账户，则操作不成功
					System.out.println("账户余额不足， 请重新输入!");
				}
				else
				{
					// 该用户为信用账户
					if (U_balance < -1000)
					{
						// 信用账户透支
						System.out.println("信用账户透支， 请重新输入!");
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
	// 显示余额
	static void ShowBalance(int pos)
	{
		System.out.println(accountArr.get(pos).getM_Balance());
	}
}
