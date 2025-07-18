//静态和非静态处理方式一样
#include<iostream>
using namespace std;
class Base
{
public:
	static int m_a;//静态成员属性类内声明 ，类外初始化
	static void func();
};
int Base::m_a = 100;//初始化
void Base::func()
{
	cout << "Base的func" << endl;
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
		cout << "son的func" << endl;
}
void test01()
{
	son s1;
	cout << "son的m_a = " << s1.m_a << endl;
	cout << "base的m_a = " << s1.Base::m_a << endl;//同理加作用域
	//通过类名访问
	cout << son::m_a << endl;//子类可以通过类名访问
	cout << son::Base::m_a << endl;//第一个::是通过son类访问第二个::是访问父类的作用域下
}
void test02()
{
	son s2;
	s2.func();
	s2.Base::func();//同理加作用域
	son::func;
	son::Base::func();//第一个::是通过son类访问第二个::是访问父类的作用域下
}
int main()
{
	test01();
	test02();
	return 0;
}