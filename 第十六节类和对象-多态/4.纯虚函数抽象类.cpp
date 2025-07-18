//在多态中通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容。 
//因此可以将虚函数改为纯虚函数。 
//纯虚函数语法 virtual 返回值类型 函数名 （参数列表）=0
//当类中有了纯虚函数，这个类也叫抽象类
//抽象类有两个特点1.无法实例化对象
//                2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类
#include<iostream>
using namespace std;
class base//抽象类，父类
{
public:
	virtual void func() = 0;//纯虚函数
};
class son :public base
{
public:
	void func()//重写父类纯虚函数
	{
		cout << "我是子类的函数" << endl;
	}
};
void test01()
{
	//base b1;//不能创建对象
	//new base ;堆区也不能
	son s1;//如果不重写父类的纯虚函数，那么这里也会报错
	base* base = new son;
	base->func();
	delete base;
}
int main()
{
	test01();
	return 0;
}