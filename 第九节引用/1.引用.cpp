#include<iostream>
using namespace std;
int main()
{
	//引用的本质是给变量起别名
	int a = 10;
	int& a1 = a;//引用；给a起个小名叫a1
	cout << a1 << endl;
	a1 = 20;
	cout << a1 << endl;//小名改数值也会生效
	system("pause");
	return 0;
	//引用必须初始化int &b这样是不行的没有声明是谁的别名。
	// 在初始化后不可改变，别名不可以换变量。
	int w = 10;
	int y = 10;
	int &x = w;
	//int &x = y;//这样是不被允许的
}