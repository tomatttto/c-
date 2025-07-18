#include<iostream>
using namespace std;
//常量引用主要用来修饰形参，防止误操作
void show( int &val) //加一个const int &val防止可以被修改
{//打印数据函数
	val = 1000;//这时候val改为1000时候对应的b也被改为1000可以加一个const
	cout << val << endl;
}
int main()
{
	//int a = 10;
	//int& ref = a;
	//int &ref = 10;这是不行的，引用是引用的合法的内存空间
	//但是加上const后编译器将代码修改为 int temp = 10； int& ref = temp;
	//const int& ref = 10;//合法的
	//ref = 20;//这样是非法的const为只读。
	int b = 100;
	show(b);
	return 0;
}