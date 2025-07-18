//堆区由程序员分配释放，程序员不释放的话程序结束时系统自动释放
//c++里用new来开辟堆区内存
#include<iostream>
using namespace std;
int *func()
{
	//利用new关键字，可以将数据开辟到堆区
	//指针本质是一个变量，放在栈上，指针保存的数据放在堆区
	int *p = new int (10);//会返回new出来这块内存的地址
	return p;
}
int main()
{
	int* p = func();
	cout << *p << endl;
	/*
	* 本质上*p是在栈区，但是*p指向的是new出来的放在堆区的一个地址所以不管调用几次
	* 堆区的数据都不会释放(除非手动释放或者程序关闭)否则栈区会一直指向堆区地址
	*/
}