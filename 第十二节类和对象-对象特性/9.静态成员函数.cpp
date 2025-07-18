//！！！！！看这个之前先看静态成员变量
#include<iostream>
using namespace std;
//静态成员函数
//1.所有对象共享一个函数
//2.静态成员函数只能访问静态成员变量
class person
{
public:
	int m_a = 10;
	static int m_b;
	static void jingtai()//静态成员函数
	{
		//cout << m_a << end;//因为m_a是类里的成员变量不是静态的所以访问不了
		cout << m_b << endl;//m_b是静态成员变量可以访问
	}
private:
	static void jingtai2()//同静态成员变量，私有类同样调用不了
	{
		cout << m_b << endl;
	}
};
int person::m_b = 20;
void test1()
{
	person::jingtai();
	//person::jingtai2();//同静态成员变量，私有类同样调用不了
}
int main()
{
	person::jingtai();
	return 0;
}