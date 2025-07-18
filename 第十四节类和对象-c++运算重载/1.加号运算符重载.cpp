/*
* 重载运算符；对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型。
可以将两个自定义变量进行相加例如class类。 
operator后面加一个“+”号代表重载加号运算符
*/
#include<iostream>
using namespace std;
class person
{
public:
	int m_a;
	int m_b;
};
person operator+(person &p1,person &p2)//全局函数做+号的重载
{
	person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}
void test01()
{
	person p1;
	p1.m_a = 10;
	p1.m_b = 20;
	person p2;
	p2.m_a = 30;
	p2.m_b = 40;
	person p3 = p1 + p2;
	cout << "p3的m_a的值为 " << p3.m_a << " p3的m_b的值为 " << p3.m_b << endl;
}
class Person
{
public:
	int m_a;
	int m_b;
	Person operator+(Person& p)//成员函数做加号重载
	{
		Person temp;
		temp.m_a = this->m_a + p.m_a;
		temp.m_b = this->m_b + p.m_b;
		return temp;
	}
};
void test02()
{
	Person p1;
	p1.m_a = 50;
	p1.m_b = 60;
	Person p2;
	p2.m_a = 70;
	p2.m_b = 80;
	Person p3;
	p3 = p1 + p2;
	cout << "p3的m_a的值为 " << p3.m_a << " p3的m_b的值为 " << p3.m_b << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}
//1.运算符重载也可以发生函数重载
//2.内置的数据类型不可以改变例如int float；
//3.不要滥用运算符重载例如你想写加号的重载，但是函数里写的是减法的逻辑