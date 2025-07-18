#include<iostream>
using namespace std;
//c++类中的成员可以是另一个类的对象，我们称该成员为对象成员
/*
	class A
	{
	int a;
	};
	class B
	{
	A a;//a是B里面的对象成员
	};
*/
class phone
{

public:
	string p_name;//手机品牌名称
	phone(string pname)
	{
		p_name = pname;//然后m_phone到了这里赋值给pname，pname再赋值给p_name,这也就是为什么 p.m_phone.p_name可以输出iphone
		cout << "phone的构造函数调用" << endl;
	}
	~phone()
	{
		cout << "phone的析构函数调用" << endl;
	}
};
class person
{

public:
	person(string name,string pname):m_name(name), m_phone(pname)//这相当于写了m_phone = pname
	{
		cout << "person的构造函数调用" << endl;
	}
	//姓名
	string m_name;
	//手机
	phone m_phone;//因为这是phone类型，所以会自动调用上面的phone class类
	~person()
	{
		cout << "person析构函数调用" << endl;
	}
};
void test01()
{
	person p ("张三", "iphone");
	cout<<p.m_name<<"拿着" << p.m_phone.p_name << endl;
}
	int main()
{
		test01();
	return 0;
}
	//构造和析构符合栈的先进后出构造和析构的顺序是phone构造，person构造，person析构，phone析构