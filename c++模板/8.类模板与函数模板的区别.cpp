//1.��ģ��û���Զ��Ƶ�����
//2.��ģ����ģ������п�����Ĭ�ϲ���
#include<iostream>
using namespace std;
template<class nametype,class agetype>
class person1//��ģ��
{
public:
	person1(nametype name,agetype age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void showperson()
	{
		cout << "����Ϊ" << m_name << endl;
		cout << "����Ϊ" << m_age << endl;
	}
	nametype m_name;
	agetype m_age;
};
//1.��ģ��û���Զ��Ƶ�����
void test01()
{
	//person p1("�����", 100);//1.1�����Ļ��������Ʋ���������
	person1<string, int> p1("�����", 19);//1.2�������ָ������
	p1.showperson();
}
//2.��ģ����ģ������п�����Ĭ�ϲ���
template<class nametype = string, class agetype = int>//2.1�����������ģ������б����ֱ��ָ������
class person2//��ģ��
{
public:
	person2(nametype name, agetype age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void showperson()
	{
		cout << "����Ϊ" << m_name << endl;
		cout << "����Ϊ" << m_age << endl;
	}
	nametype m_name;
	agetype m_age;
};
void test02()
{
	person2<>p2("��˽�", 99);//2.2�����Ļ�����Ͳ���Ҫ��������
}
int main()
{
	test01();
	return 0;
}