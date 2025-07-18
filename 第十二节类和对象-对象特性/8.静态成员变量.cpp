//成员变量和成员函数加上static成为静态成员
/*分为两种
* 静态成员变量；1.所有对象共享一份数据 2.在编译阶段分配内存(放在全局区) 3.类内声明，类外初始化
* 静态成员函数；1.所有对象共享同一个函数 2.静态成员只能访问静态成员变量 
*/
#include<iostream>
using namespace std;
class person
{
public: 
	//所有对象都共享同一份数据
	//编译阶段就分配内存
	//类内声明，类外初始化
	/*静态成员变量*/static int m_a;//类内声明
private:
	static int m_b;//私有的静态成员变量
};
 int person:: m_a = 100;//类外初始化
 int person::m_b = 200;
void test01()
{
	person p1;
	cout << p1.m_a << endl;
	person p2;
	p2.m_a = 200;
	//当第二个p2改成200以后那么再访问p1也会变成200p1和p2共用的一个m_a
	cout << p1.m_a << endl;//200
}
void test02()
{
	//静态成员变量不属于某个对象上，所有对象都共享
	//两种访问方式
	//1。通过对象访问
	person p1;
	cout << p1.m_a << endl;
	//2.通过类名访问
	cout << person::m_a << endl;
	//person::m_b;//私有的同样访问不了
}
int main()
{
	//test01();
	test02();
	return 0;
}