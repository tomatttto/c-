//建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型来代表
//例如正常的函数是这样的； void(返回值类型) func(int a(形参))但是在模板里可以没有上述说的这两个
//template <typename T>    template是声明创建模板 typename表明其后面的符号是一种数据类型，可以用class代替 T通用的数据类型，名称可替换，通常为大写字母
#include<iostream>
using namespace std;
//案例，两个整形交换
void swapint(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << "b=" << b << endl;
}
//交换两个浮点型
void swapdouble(double& c, double& d)
{
	double temp;
	temp = c;
	c = d;
	d = temp;
	cout << "c=" << c << "d=" << d << endl;
}
//上述的函数，如果每一个类型都写一次会很麻烦，这时候可以用模板来写一个通用类型
//如下
template <typename T>//声明一个模板，告诉编译器后面的代码中跟着的T为通用数据类型
void myswap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << "b=" << b << endl;
}
void test01()
{
	int a = 20;
	int b = 30;
	//swapint(a,b );
	//利用模板交换,两种方式
	//1.自动类型推导
	myswap(a, b);//电脑自己根据传的类型来推导。
	//2.显示指定类型
	myswap<int>(a, b);//直接告诉电脑是什么类型

	double c = 3.14;
	double d = 2.2;
	swapdouble(c, d);


}
int main()
{
	test01();
	return 0;
}