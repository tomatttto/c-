//继承可以继承父类的一些东西，也可以添加一些自己独有的东西\
//语法；class 子类 : 继承方式 父类
//子类也叫派生类，父类也叫基类
#include<iostream>
using namespace std;
class Base//公共类
{
public:
	void shuchu1()
	{
		cout << "公共页面" << endl;
	}
};
class page1 :public Base//继承
{
	public:
		void shuchu2()
		{
			cout << "这是一个页面" << endl;
		}
};
class page2 :public Base
{
public:
	void shuchu3()
	{
		cout << "这是另一个页面" << endl;
	}
};
void test01()
{
	page1 p1;
	page2 p2;
	p1.shuchu1();
	p1.shuchu2();
	p2.shuchu1();
	p2.shuchu3();
}
int main()
{
	test01();
	return 0;
}