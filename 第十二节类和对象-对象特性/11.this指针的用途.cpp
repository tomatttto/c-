/*c++里成员变量和成员函数是分开存储的，每一个非静态成员函数只会诞生一份函数实例
* 也就是每次调用函数时侯只会调用同一份函数
* 通过this指针可以指向被调用的成员函数所属的对象
* this指针是隐含在每一个非静态成员函数
* 用途；
* 1.当形参和成员变量同名时，可以用this指针来区分
* 2.在类的非静态成员函数中返回对象本身，可以使用return *this（同指针的解引用操作）
*/
#include<iostream>
using namespace std;
class person
{
public:
	person(int age)
	{
		age = age; 
	}
	int age;
};
class person1
{
public:
	person1(int age)
	{
		this->m_age = age;
	}
	/*这里加&是为了return *this时候返回的是p2本身类似与指针的传址*/person1& AGEaddAGE(person1& p)//把p1和p2的年龄加起来给p2
	{
		m_age = m_age + p.m_age;
		return *this;//这里的*this指向的就是p2对象的本体
	}
	int m_age;
};

void test01()
{
	person p1(18);
	cout << "p1的年龄为" << p1.age << endl;//这里并不会输出18岁因为int里面的age和person函数里的age不是一个变量
	//这时候就需要用到this指针来告诉电脑我要指向的是类里的成员变量age，需要将age = age;改为this->age = age;
	//或者是另一个解决办法，将成员变量名和函数里的变量名区分开来，这样也可以解决
}
void test02()
{
	person1 p1(10);
	person1 p2(20);
	p2.AGEaddAGE(p1).AGEaddAGE(p1).AGEaddAGE(p1);
	//上面这个代码是重复把p1的年龄加给p2，p2调用完一次AGEaddAGE(p1)后
	//在来一个“.”来再次调用。这种方法叫链式编程思想。常见的链式编程有cout，cout后面可以无限的加东西
	cout << p2.m_age << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}
//小结；在person1&如果不加&的话，系统每次返回的是一个值，在下次调用的时候只会新建一个p2来存放这个值，说白了就是浅拷贝，他不会调用最初的那个p2所以这也是为什么不加&
//的话输出结果是30，相当于每次调用都是20+10。