#include<iostream>
using namespace std;
//交换函数1.值传递，2.地址传递，3.引用传递
//值传递
void swap01(int a,int b)
{//只传递值在函数外没变化只在函数内有变化
	int temp = a;
	a = b;
	b = temp;
	cout << "值传递a="<< a << endl;
	cout << "值传递b=" << b << endl;
}
void swap02(int *a,int *b)
{//传递址在整体代码有变化
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap03(int &a,int &b)
{//引用传递同传址，传入的&a其实是a的别名，只不过是同一个名字
 //这样引用的话可以在直接操作a的值，b同理。
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	//swap01(a, b);
	//swap02(&a, &b);
	// cout << "传址后a=" << a << endl;
	// cout << "传址后b=" << b << endl;
	swap03(a, b);
	cout << "引用后a=" << a << endl;
    cout << "引用后b=" << b << endl;
	return 0;
}