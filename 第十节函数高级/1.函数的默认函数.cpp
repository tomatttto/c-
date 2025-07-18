#include<iostream>
using namespace std;
//函数里的形参可以默认有参数
int func(int a = 10)//形参a默认初始值为10
{
	int c, b = 30;
	c = a + b;
	return c;
}
int func1(int a,int b =20)//形参b默认初始值为20
{
	//如果传值时候有值，优先使用传入的50而不是默认的20
	return a + b;
}
//注意事项；1如果某个位置有了默认参数，从这个位置往后都需要有默认值
//int func2(int a, int b = 20,int c)
//{
//这里的c必须有默认值才行
//	return a + b;
//}
/*
* 2，如果函数声明有默认函数，函数实现就不能有默认函数
* 声明和实现只能有一个默认函数
* int func3(int a = 10, int b =10);//声明
  int func3(int a = 10, int b =10)
 {
	 return a + b;
  }
*/

int main()
{
	cout << func() << endl;
	cout << func1(10,50) << endl;
	//cout << func3() << endl;会报错
	return 0;
}