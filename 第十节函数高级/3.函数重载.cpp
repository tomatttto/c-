#include<iostream>
using namespace std;
//函数重载是指函数名可以相同，根据参数不一样，调用不同的函数
//满足条件1，同一作用域下。
//        2，函数名相同
//        3，函数参数类型不同，或者个数不同或顺序不同
void func()
{
	cout << "func(没参数)的调用" << endl;
}
void func( int a )
{
	cout << "func(有参数)的调用" << endl;
}
void func(double a)
{
	cout << "func(double)的调用" << endl;
}
void func(int a,double b)
{
	cout << "func(int a,double b)的调用" << endl;
}
void func(double a, int b)
{
	cout << "func(double a, int b)的调用" << endl;
}
int main()
{
	func();
	func(10);
	func(3.1415926);
	func(10,3.1415926);
	func(3.1415926,10);
	return 0;
}
//函数返回值不可以变。