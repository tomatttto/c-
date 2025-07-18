#include<iostream>
using namespace std;
int main() 
{
	int a = 10;
	//指针定义语法；数据类型*指针变量名;
	int* p = nullptr; //定义一个指针
	p = &a;
	cout << "a的地址为" << &a << endl;
	cout << "指针p为" << p << endl;
	//使用指针；通过解引用的方式来找到指针指向的内存
	//加一个*代表解引用，找到指针指向的内存中的数据
	*p = 1000;//也就是说通过加*可以直接访问p所指向的内存地址里的数据
	         //当前的p指向的是a的地址，加一个*可以直接访问到a的数据，对a进行修改
	cout << "a=" << a<<endl;
	cout << "*p=" << *p << endl;
	system("pause");
	return 0;
}