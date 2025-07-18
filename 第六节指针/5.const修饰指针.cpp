	/*
	* 有三种情况
	* 1.const修饰指针 ---常量指针
	* 2.const修饰常量 ---指针常量
	* 3.const既修饰指针，又修饰常量
	*/
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	//1.const修饰指针-- - 常量指针
	const int* zhizhen1 = &a;//指针指向的地址可以改，但是*p = 20这样直接改指针指向的地址的值不可以改
	zhizhen1 = &b;//这样的改指向的地址可以，从a地址改向b的地址
	//2.const修饰常量-- - 指针常量
	int* const zhizhen2 = &a;//const后面跟着变量称之为常量，指针的指向不可以改，指针指向的值可以改
	*zhizhen2 = 20;//这样修改的指针指向的地址的值是可以的。zhizhen2 = &b;这样改地址是不可以的
	//3.const既修饰指针，又修饰常量
	const int* const zhizhen3 = &a;
	/*
	* 在这里由于指针*和值都被设为常量const所以不论是地址还是值都不可以修改。
	* *zhizhen3 = 20;违法，zhizhen3 = &b;也违法
	*/
	system("pause");
	return 0;
}