#include<iostream>
using namespace std;
int* func()
{
	//堆区创建一个整形
	//new返回的是该数据类型的指针new什么类型，用什么接收
	int * p = new int(10);
	return p;
}
void test01()
{
	int* p = func();
	cout << *p << endl;
	delete p;
	//cout << *p << endl;//释放后再访问会显示异常
}
//堆区利用new开辟数组
void test02()
{
	//创建10个整形数据的数组（堆区）
	 int *arr = new int[10];
	 for (int i = 0; i < 10; i++)//访问
	 {
		 arr[i] = i + 100;
	 }
	 for(int i = 0;  i< 10; i++)
	 {
		 cout << arr[i] << "  " << endl;
	 }
	 delete[] arr;//释放数组要加中括号才可以
}
int main()
{
	test01();
	test02();
}