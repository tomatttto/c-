#include <iostream>
using namespace std;
	//1.�޲��޷�
void test1()
{
	cout << "�޲��޷�test1" << endl;
	
}
	//2.�в��޷�
void test2(int a )
{
	cout << "�в��޷�test2" << endl;
	cout << a << endl;
}
	//3.�޲��з�
int test3() 
{
	cout << "����test3" << endl;
	return 10000;
}
	//4.�в��з�
int test4(int a)
{
	cout << "����test4" << endl;
	cout << a<< endl;
	return a;
}
int main() 
{
	//�޲��޷�����
	test1();
	//�в��޷�����
	test2(10);
	//�޲��з�����
	cout << test3() << endl;
	//�в��з�����
	cout << test4(10) << endl;
	system("pause");
	return 0;
}