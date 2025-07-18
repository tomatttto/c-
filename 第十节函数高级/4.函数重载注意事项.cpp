#include<iostream>
using namespace std;
//函数重载注意事项
//1引用作为重载条件
void func(int &a)
{
	cout << "func（引用）" << endl;
}
void func(const int& a)
{
	cout << "func（常量引用）" << endl;
}
//2函数重载碰到默认参数
void func2(int a,int b =10  )
{
	cout << "func2的调用" << endl;
}
void func2(int a)
{
	cout << "func2的调用" << endl;
}
int main()
{
	 int a = 10;//如果这里变成const函数就会变成"func（常量引用）"这个
	func(a);//如果变量换成常量例如10，也会引用成第二个
	//func2(10);这样的话第一个func2和第二个func2都能带入，会报错产生二义性
	return 0;
}