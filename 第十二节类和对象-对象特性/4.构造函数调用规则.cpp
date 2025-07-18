#include<iostream>
using namespace std;
//默认情况下，c++编译器至少给一个类添加3个函数
//1.默认构造函数（无参，函数体为空）
//2.默认析构函数（无参，函数体为空）
//3.默认拷贝构造函数，对属性进行值拷贝
/*
* 调用规则；
* 如果用户定义有参构造函数，c++不再提供默认无参构造，但会提供默认拷贝构造
* 如果用户定义拷贝构造函数，c++不会提供其他构造函数
*/
class person
{
public:
	
	person()
	{
		cout << "person默认的无参构造" << endl;
	}
	
	person(int age)
	{
		cout << "person的有参构造" << endl;
		m_age = age;
	}
	person(const person& p1)
	{
		cout << "person的拷贝函数构造" << endl;
		m_age = p1.m_age;
	}
	~person()
	{
		cout << "person的析构函数" << endl;
	}
	int m_age;
}; 
void test01()
{
	person p1;
	p1.m_age = 18;
	person p2(p1);//如果将24-28行代码注释掉依然会显示18因为计算机会自动写一句m_age = p1.m_age;赋值
	//这也就是如果用户定义有参构造函数person(int age)，c++不再提供默认无参构造，但会提供默认拷贝构造（你没写的情况下）
	cout << p2.m_age << endl;
}
void test02()
{
	person p1(18);
	person p2(p1);
	//如果将默认无参构造注释掉会报错因为有参函数没注释的情况下默认有参函数有的话不会创建无参函数
	cout << p2.m_age << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}