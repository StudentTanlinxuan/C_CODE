package com.tlx.back;

public class Account {
	private String m_Account; // �˻�
	private String m_Password; // ����
	private String m_Name; // ����
	private String m_Id; // ���֤����
	private String m_Type; // �˻�����
	private double m_Balance; //���
	
	public String getM_Account() {
		return m_Account;
	}
	public void setM_Account(String account) {
		this.m_Account = account;
	}
	
	public String getM_Password() {
		return m_Password;
	}
	public void setM_Password(String password) {
		this.m_Password = password;
	}
	
	public String getM_Name() {
		return m_Name;
	}
	public void setM_Name(String name) {
		this.m_Name = name;
	}
	
	public String getM_Id() {
		return m_Id;
	}
	public void setM_Id(String id) {
		this.m_Id = id;
	}
	
	public String getM_Type() {
		return m_Type;
	}
	public void setM_Type(String type) {
		this.m_Type = type;
	}
	
	public double getM_Balance() {
		return m_Balance;
	}
	public void setM_Balance(double balance) {
		this.m_Balance = balance;
	}

}
