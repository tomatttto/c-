//��̬�ͷǾ�̬����ʽһ��
#include<iostream>
using namespace std;
class Base
{
public:
	static int m_a;//��̬��Ա������������ �������ʼ��
	static void func();
};
int Base::m_a = 100;//��ʼ��
void Base::func()
{
	cout << "Base��func" << endl;
}
class son:public Base
{
public:
	static int m_a;
	static void func();
};
int son::m_a = 200;
void son::func()
{
		cout << "son��func" << endl;
}
void test01()
{
	son s1;
	cout << "son��m_a = " << s1.m_a << endl;
	cout << "base��m_a = " << s1.Base::m_a << endl;//ͬ���������
	//ͨ����������
	cout << son::m_a << endl;//�������ͨ����������
	cout << son::Base::m_a << endl;//��һ��::��ͨ��son����ʵڶ���::�Ƿ��ʸ������������
}
void test02()
{
	son s2;
	s2.func();
	s2.Base::func();//ͬ���������
	son::func;
	son::Base::func();//��һ��::��ͨ��son����ʵڶ���::�Ƿ��ʸ������������
}
int main()
{
	test01();
	test02();
	return 0;
}