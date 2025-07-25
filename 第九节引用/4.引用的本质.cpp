//引用的本质是c++内部的一个指针常量
#include<iostream>
using namespace std;
//发现是引用，转换为int* const ref = &a
void func(int & ref)
{
	ref = 100;//ref是引用，转换为*ref = 100
}
int main()
{

	int a = 10;
	//自动转换为 int* const ref = &a；指针常量，指针常量指向不可改，也说明引用为什么不可以改
	int& ref = a;
	ref = 20;//发现是ref引用，自动转换为：*ref = 20
	func(a);
	return 0;
}