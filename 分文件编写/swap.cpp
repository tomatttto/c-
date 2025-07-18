#include"swap.h"
//两个数字交换的函数
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << "b=" << b << endl;
}