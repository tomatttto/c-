//首先创建一个后缀名是.h的头文件
//创建后缀名为.cpp的源文件
//在头文件里写函数的声明
//在源文件中写函数的定义
#include <iostream>
#include"swap.h"
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	system("pause");
	return 0;
}