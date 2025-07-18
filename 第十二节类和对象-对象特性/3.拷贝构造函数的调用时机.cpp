#include<iostream>
using namespace std;
//三种情况1.使用一个已经创建完毕的对象来初始化一个新对象
//        2.值传递的方式给函数参数传值
//        3.以值方式返回局部对象
class person
{
	int m_age = 0;
public:
	person()
	{
		cout << "person默认的无参构造" << endl;
	}
	person(int age)
	{
		cout << "person的有参构造" << endl;
		m_age = age;
	}
	person(const person &p1)
	{
		cout << "person的拷贝函数构造" << endl;
		m_age = p1.m_age;
	}
	~person()
	{
		cout << "person的析构函数" << endl;
	}
};
void test01()
{
	//1.使用一个已经创建完毕的对象来初始化一个新对象
	person p1(20);
	person p2(p1);
}
void dowork(person p)
{

}
void test02()
{
	//2.值传递的方式给函数参数传值
	person p;
	dowork(p);//这里传p的时候意思是dowork里的形参是要的一个对象，
	          //但是在test02里创建完p这个对象后再传入dowork反而会传入一个副本。拷贝构造函数而不是本体
}
person dowork2()
{
	person p1;
	return p1;//由于局部函数返回的是一个值，所以在这里依然要返回的是一个副本，也就是p1的拷贝构造函数
}
void test03()
{
	//3.以值方式返回局部对象
	person p = dowork2();//2022优化了编译器可能会进行返回值优化或复制省略优化，这可能会导致在某些情况下拷贝构造函数不被显式调用。
	
}
int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}