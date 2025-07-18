//1.如果函数模板和普通函数都能用，优先用普通函数
//2.可以通过空模板参数列表来强制调用函数模板
//3.函数模板也可以重载
//4.如果函数模板产生更好的匹配，优先调用函数模板
#include<iostream>
using namespace std;
void myprint(int a, int b)
{
	cout << "调用普通函数" << endl;
}
template<class T>
void myprint(T a, T b)
{
	cout << "调用的模板函数" << endl;
}
template<class T>
void myprint(T a, T b,T c)
{
	cout << "调用的重载模板函数" << endl;
}
void test01()
{
	int a = 10;
	int b = 20;
	myprint(a,b);//调用的是普通函数参考第一点
	//通过调用空模板参数列表来强制调用函数模板
	myprint<>(a, b);
	myprint(a, b, 100);//函数模板重载
	//如果函数模板产生更好的匹配，优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';
	myprint(c1, c2);//虽然普通函数的myprint可以隐式转换但是在模板中相对于来说会更好(不用隐式转换)，所以调用的是函数模板
}
int main()
{
	test01();
	return 0;
}