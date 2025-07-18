//c++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置
#include<iostream>
using namespace std;
void func(int a, int )//这个int是一个占位参数可以不写变量名声明一个类型
{//也可以直接写成 int = 10下面的传参就不用写了
	cout << "嘿嘿嘿" << endl;
}
int main()
{
	func(10,20);//如果想用需要在函数调用里给他一个值
	return 0;
}
//占位参数在这里只做了解，在后面的函数重载里会有详细用法