#include <iostream>
using namespace std;
	//1.无参无返
void test1()
{
	cout << "无参无返test1" << endl;
	
}
	//2.有参无返
void test2(int a )
{
	cout << "有参无返test2" << endl;
	cout << a << endl;
}
	//3.无参有返
int test3() 
{
	cout << "这是test3" << endl;
	return 10000;
}
	//4.有参有返
int test4(int a)
{
	cout << "这是test4" << endl;
	cout << a<< endl;
	return a;
}
int main() 
{
	//无参无返调用
	test1();
	//有参无返调用
	test2(10);
	//无参有返调用
	cout << test3() << endl;
	//有参有返调用
	cout << test4(10) << endl;
	system("pause");
	return 0;
}