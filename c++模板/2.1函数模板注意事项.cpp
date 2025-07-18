#include<iostream>
using namespace std;
//函数模板注意事项
//1.自动类型推导，必须要推导出一致的数据类型T才能使用
//2.模板必须要确定出T的数据类型，才可以使用
template<class T>//class跟tpyename没有区别，都可以
void myswap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
void test01()
{
	int a = 10; 
	int b = 20;
	myswap(a, b);//这是ok的。
	cout << "a=" << a << "b=" << b << endl;
	int c = 20;
	string d[10];
	//myswap(c, d);//这样是不行的，必须要推导出一致的数据类型T才能使用
	
}
template<class T>
void func()
{
	cout << "func函数调用" << endl;
}
void test02()
{
	//func();//模板必须要确定出T的数据类型，才可以使用
           //这个func函数里没有可以推导的T的数据类型
	func<int>();//这样直接指定类型后才可以用
}
int main()
{
	test01();
	test02();
	return 0;
}