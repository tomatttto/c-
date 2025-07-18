//菱形继承是指两个子类共同继承一个父类然后又有一个类继承这两个子类
#include<iostream>
using namespace std;
class animal//动物类
{
public:
	int m_age;
};
//利用虚继承"virtual"可以解决菱形问题,边为虚继承后animal类变为虚父类
class sheep:virtual public animal//羊类(继承动物)
{

};
class camel:virtual public animal//驼类(继承动物)
{

};
class sheepcamel:public sheep ,public camel//羊驼类(继承羊类，驼类)
{

};
void test01()
{
	sheepcamel sc1;
	sc1.sheep::m_age = 18;//羊的年龄
	sc1.camel::m_age = 28;//驼的年龄
	//出现菱形继承时候，两个父类拥有相同的数据需要加作用域区分
	cout<<sc1.sheepcamel::sheep::m_age << endl;//没加虚继承之前这条Cout跟下条Cout输出的分别是18和28，
	                                           //但是当使用了虚继承之后，继承的值也就是m_age相当于共享的一个值，不管是shape还是camel。 
	cout << sc1.sheepcamel::camel::m_age << endl;
	cout << sc1.m_age << endl;//可以进行直接输出也就是28.
	//配合菱形问题.png查看。可以通过开发工具具体查看可以发现sheep和camel是有个vbptr，叫做虚基类指针
	//这个虚基类指针会指向vbtable虚基类表,
}


int main()
{
	test01();
	return 0;
}