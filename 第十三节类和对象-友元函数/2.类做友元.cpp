#include<iostream>
using namespace std;
class Building
{
	friend class pengyou;//类做友元。
public:
	Building();//构造函数的无参构造
	string m_keting;//客厅
private:
	string m_woshi;//卧室
};
class pengyou
{
public:
	pengyou();
	void visit();//参观函数，访问building中的属性
	Building* building;
};
//这个是在类外写成员函数前提是得在类内声明一下也就是第6行。
Building::Building()//这个是构造函数
{
	m_keting = "客厅";
	m_woshi = "卧室";
}
pengyou::pengyou()//这个是pengyou的构造函数
{
	building = new Building;//这个是在堆区开辟的，释不释放由程序员管理，而上面的Building* building;是写在pengyou里的，但是由于是指针类型
	//所以堆区的building会通过栈区的指针去指向building。
}
void pengyou::visit()
{
	cout << "朋友正在访问" << building->m_keting << endl;
	cout << "朋友正在访问" << building->m_woshi << endl;
}
void test01()
{
	pengyou py;
	//在执行新建一个pengyou类的py后构造函数pengyou会执行然后building = new Building;会在堆区开辟一个空间用来存放Building类
	//接着building类里的函数和成员变量开始执行
	py.visit();
	//到了这一步visit函数被执行开始输出“朋友正在访问客厅”。
}
int main()
{
	test01();
	return 0;
}