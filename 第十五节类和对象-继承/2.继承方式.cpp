//继承方式有三种，公共继承，私有继承，保护继承
//父类的私有属性，子类什么继承都继承不了
//公共继承，父类是什么属性，子类不变
//保护继承，都会变成保护属性
//私有继承，都会变成私有属性
#include<iostream>
using namespace std;
class base1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son : public base1//公共继承
{
public:
	void func()
	{
		m_a = 10;//父类公共属性(公共权限)
		m_b = 20;//父类保护属性(保护权限)
	}
};
void test01()
{
	son son1;
	son1.m_a = 100;//继承过来的公共权限依然可以类外访问
	//s1.m_b = 100;(保护权限类外不可访问)
}
class base2
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son2:protected base2
{
public:
	void func()
	{
		m_a = 100;//父类公共属性(保护权限)
		m_b = 100;//父类保护属性(保护权限)
		//m_c = 100;//父类私有属性(无法访问)
	}
};
void test02()
{
	son2 s2;
	//s2.m_a = 100;//保护权限类外无法访问
}
class base3
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son3 :protected base3
{
public:
	void func()
	{
		m_a = 100;//父类公共属性(私有权限)
		m_b = 100;//父类保护属性(私有权限)
		//m_c = 100;//父类私有属性(无法访问)
	}
};
void test03()
{
	son3 s3;
	//s3.m_a = 100;//私有权限类外无法访问
}
int main()
{

	return 0;
}