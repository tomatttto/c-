//成员函数后加const后，我们称为这个函数为常函数。
//常函数内不可以修改成员属性
//但是成员属性声明时加关键字mutable后，在常函数中依然可以修改
#include<iostream>
using namespace std;
class person
{
public:
	//在这里p.showperson里的p相当于指向了this
	//而this指针是一个指针常量，也就是指针指向不可修改
	//而void showperson() const给person也变成常量不可修改，相当于const person *const this
	void showperson() const//加const后m_a就不可以修改了
	{
		this->m_b = 100;//可以修改
		this->m_a = 100;//为了方便理解统一加上this
	}
	void func()
	{
		m_a = 100;//在普通函数里可以修改
		cout << "函数";
	}
	int m_a;
	mutable int m_b;//加了mutable后也可以修改
};
void test01()
{
	person p;
	p.showperson(); //相当于person* const this
}
void test02()
{//常对象
	const person p1;//常对象
	p1.m_a=100;//这样也是不可以修改的
	p1.m_b=200;//由于m_b时特殊的所以能修改
	p1.showperson();//常对象只能调用常函数
	p1.func();//无法调用普通函数
}
int main()
{
	test01();
	return 0;
}