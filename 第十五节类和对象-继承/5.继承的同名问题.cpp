//当子类和父类同名，如果访问子类的同名成员直接访问
//如果访问父类的同名成员则需要加作用域
#include<iostream>
using namespace std;
class Base
{
public:
	Base()
	{
		m_a = 10;
	}
	void func()
	{
		cout << "base的func" << endl;
	}
	void func(int a)
	{
		cout << "sons的func（int）" << endl;
	}
	int m_a;
};
class son :public Base
{
public:
	son()
	{
		m_a = 20;
	}
	void func()
	{
		cout << "sons的func" << endl;
	}
	
	int m_a;

};
void test01()//同名成员属性的处理问题
{
	son s1;
	cout <<"son的m_a为" << s1.m_a << endl;//直接输出是输出子类的数据。
	cout << "Base的m_a为" << s1.Base::m_a << endl;//加一个作用域Base::
}
void test02()
{
	//同名成员函数的处理
	son s2;
	s2.func();//调用子类成员函数
	s2.Base::func();//同理加作用域调用父类成员函数
	//↓如果子类出现和父类同名的成员函数，子类的同名成员函数会隐藏掉父类的同名函数
	s2.Base::func(10);//不能通过不同的传值来重载函数，用父类的还是要加作用域
}
int main()
{
	test01();
	test02();
	return 0;
}