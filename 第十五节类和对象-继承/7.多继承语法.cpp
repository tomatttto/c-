//多继承可能会引发父类中有同名成员出现，需要加作用域区分
//实际开发中不建议用多继承，容易乱
#include<iostream>
using namespace std;
class Base
{
public:
	Base()
	{
		m_a = 100;
	}
	int m_a;
};
class Base2
{
public:
	Base2()
	{
		m_a = 200;
	}
	int m_a;
};
class son :public Base, public Base2//多继承
{
public:
	son()
	{
		m_c = 300;
		m_d = 400;
	}
	int m_c;
	int m_d;

};
void test01()
{
	son s1;
	cout << "s1的大小为" << sizeof(s1) << endl;//为16位
	cout <<"Base的m_a为" << s1.Base::m_a << endl;//加作用域访问父类的同名变量
	cout << "Base2的m_a为" << s1.Base2::m_a << endl;
}
int main()
{
	test01();
	return 0;
}