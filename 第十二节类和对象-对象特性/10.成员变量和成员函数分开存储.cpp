#include<iostream>
using namespace std;
//c++中，类内的成员变量和成员函数分开存储
//只有非静态成员变量才属于类的对象上
class person
{

};
class lei
{
	int m_a;
	static int m_b;
};
class lei1
{
	int m_a;
	static int m_b;
	void func()
	{

	}
};
int lei::m_b = 100;
void test01()
{
	person p1;
	cout << sizeof(p1) << endl;//空类的话p1只占1个字节
	//c++会给每个空对象分配一个字节空间，说白了是为了给这个类在内存里占一个位置以说明这个类在内存里有一个位置类似于标志位
}
void test02()
{
	lei l;
	cout << sizeof(l) << endl;//这个占4个字节,static不占用类的空间
}
void test03()
{
	lei1 l1;
	cout << sizeof(l1) << endl;//这个占4个字节,因为成员函数和成员变量不是一起占用一个空间的所以l1里的func函数不占用类的空间，同理静态成员函数也不会占用
}
int main()
{
	test01();
	test02();
	test03();
	return 0;
}