/*
* 重载 "<<" 运算符比如person类里有m_a和m_b你想直接输出
* cout << p << endl;是不行的，这样的话我们就需要用的重载
*/
#include<iostream>
using namespace std;
class person
{
public:
	int m_a;
	int m_b;
};
//左移只能用全局函数重载
ostream & operator<<(ostream &cout, person p)
//这里由于cout需要找到它的数据类型(双击cout点击转到定义可以发现),然后再将它的数据类型调用过来，加一个
//“&”因为是唯一变量，然后再加person类。
{
	cout << "m_a=" << p.m_a << "m_b" << p.m_b << endl;
	return cout;
}
void test01()
{
	person p1;
	p1.m_a = 10;
	p1.m_b = 20;
	cout << p1;//这样就可以直接输出了
	cout << p1 << endl;//这里是因为 ostream & operator<<(ostream &cout, person p)返回值是cout所属的类型如果把ostream&换成void 那么只能输出26行，后面无法加别的东西。
}
int main()
{
	test01();
	return 0;
}