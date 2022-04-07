#include<iostream>
#include<string>
using namespace std;

// ��Ա�������ó�˽��
// �ŵ�1������Ա�������ó�˽�У����ǿ����Լ��������Ķ�дȨ��
// �ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
//// ����һ������
//class person
//{
//public:
//	// ��������  �ɶ���д
//	void SetName(string name)
//	{
//		m_Name = name;
//	}
//	// ��ȡ����  �ɶ���д
//	string GetName()
//	{
//		return m_Name;
//	}
//	// ��ȡ����  �ɶ���д
//	int GetAge()
//	{
//		//m_Age = 0;// �������ʼ��Ϊ0��
//		return m_Age;
//	}
//	// ��������  �ɶ���д  ��ΧΪ0 - 150
//	void SetAge(int age)
//	{
//		if (age < 0 || age > 150)
//		{
//			m_Age = 0;
//			cout << "���䲻����" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	// ��������  ֻд
//	void SetLover(string lover)
//	{
//		m_lover = lover;
//	}
//private:// ˽��Ȩ��
//	// ����  �ɶ���д
//	string m_Name;
//	// ����  �ɶ�
//	int m_Age;
//	// ����  ��д
//	string m_lover;
//};
//int main()
//{
//	person p;
//	p.SetName("����");
//	cout << "����Ϊ�� " << p.GetName() << endl;
//	p.SetAge(18);
//	cout << "����Ϊ�� " << p.GetAge() << endl;
//
//	// ������������Ϊ�Ծ�
//	p.SetLover("�Ծ�");// ֻд���ԣ������Զ�ȡ
//	//cout << "����Ϊ�� " << p.m_lover << endl;
//	return 0;
//}

// �����������
// 1.�����������(Cube)
// 2.�������
// 3.������������������
// 4.�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���� -- ע��������ͬ��������Ĳ���������ͬ
class cube// cube -- ������
{
private:
	int m_Depth;// ��
	int m_Width;// ��
	int m_Heigh;// ��
public:
	// ���������峤
	void SetDepth(int depth)
	{
		m_Depth = depth;
	}
	// ��ȡ�����峤
	int GetDepth()
	{
		return m_Depth;
	}
	// �����������
	void SetWidth(int width)
	{
		m_Width = width;
	}
	// ��ȡ�������
	int GetWidth()
	{
		return m_Width;
	}
	// �����������
	void SetHeigh(int heigh)
	{
		m_Heigh = heigh;
	}
	// ��ȡ�������
	int GetHeigh()
	{
		return m_Heigh;
	}
	// ��ȡ���������
	int CubeArea()
	{
		return 2 * (m_Depth * m_Width) + 2 * (m_Depth * m_Heigh) + 2 * (m_Heigh * m_Width);
	}
	// ��ȡ���������
	int CubeVolume()
	{
		return m_Depth * m_Width * m_Heigh;
	}
	// ���ó�Ա�����ж��������Ƿ����
	bool is_CubeIdenticalByClass(cube& c)
	{
		if (m_Depth == c.GetDepth()
			&& m_Width == c.GetWidth()
			&& m_Heigh == c.GetHeigh())
		{
			return true;
		}
		return false;
	}
};
// ����ȫ�ֺ����ж������������Ƿ����
bool is_CubeIdentical(cube& c1, cube& c2)
{
	if (c1.GetDepth() == c2.GetDepth()
		&& c1.GetWidth() == c2.GetWidth()
		&& c1.GetHeigh() == c2.GetHeigh())
	{
		return true;
	}
	return false;
}
int main()
{
	// ʵ����һ��������
	cube c1;
	c1.SetDepth(3);
	c1.SetWidth(4);
	c1.SetHeigh(5);
	cout << "������c1�����Ϊ��" << c1.CubeArea() << endl;
	cout << "������c1�����Ϊ��" << c1.CubeVolume() << endl;
	// ʵ�����ڶ���������
	cube c2;
	c2.SetDepth(3);
	c2.SetWidth(4);
	c2.SetHeigh(5);
	bool ret = c1.is_CubeIdenticalByClass(c2);
	if (ret)
	{
		cout << "��Ա������ ������������ȣ�" << endl;
	}
	else
	{
		cout << "��Ա������ ���������岻�ȣ�" << endl;
	}
	ret = is_CubeIdentical(c1, c2);
	if (ret)
	{
		cout << "ȫ�ֺ����� ������������ȣ�" << endl;
	}
	else
	{
		cout << "ȫ�ֺ����� ���������岻�ȣ�" << endl;
	}
	return EXIT_SUCCESS;
}