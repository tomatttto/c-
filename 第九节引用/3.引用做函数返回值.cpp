#include<iostream>
using namespace std;
//1不要返回局部变量的引用
int& test01()
{
	int a = 10;//栈区存放
	return a;
}
//2.函数的调用可以作为左值
int& test02()
{
	static int a = 10;//全局区存放
	return a;
}
int main()
{
	//int& ref = test01();
	int& ref2 = test02();
	cout << ref2 << endl;
	test02() = 1000;//因为返回的是a变量，所以这个代码相当于a=1000
	cout << ref2 << endl;//而ref2是a的别名，也可以理解为是test02的别名。

	return 0;
}