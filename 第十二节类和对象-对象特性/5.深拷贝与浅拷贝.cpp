#include<iostream>
using namespace std;
//深拷贝与浅拷贝是面试经典题，也是常见的坑
//浅拷贝；简单的赋值操作
//深拷贝；在堆区中重新申请空间，进行拷贝操作
class person
{
public:
	person()
	{
		cout << "person默认的无参构造" << endl;
	}

	person(int age,int height)
	{/*
	 构造函数中的 new：为新对象分配专属内存（初始化）。
     拷贝构造函数中的 new：为拷贝出的对象分配独立内存（避免共享）。
     两者缺一不可：就像"生孩子需要新建DNA，克隆人需要复制DNA"一样，分别对应初始化和拷贝两种场景*/
		m_height = new int(height);//new是开辟在堆区的内存
		cout << "person的有参构造" << endl;
		m_age = age;
	}
	//对于下面的问题，需要自己实现一个深拷贝来解决浅拷贝两个指针指向同一地址的问题
	person(const person& p)
	{
		cout << "拷贝构造函数的调用" << endl;
		m_age = p.m_age;//这个不会报错，因为不是堆区内存开辟的
		//深拷贝↓
		m_height = new int(*p.m_height);//重新开辟一个new内存让m_height指向
		
	}
	~person()
	{
		cout << "person的析构函数" << endl;
		//在析构函数中，需要把new出来的内存给他delete删掉
		if (m_height != NULL)
			/*这里会报错，因为堆区开辟一个空间后
			* 也就是new完后person p2(p1);这个代码会把int* m_height;
			* 所指向的堆区内存的指针同样复制给p2，也就是说有两个指针同时指向了
			* 堆区所new的内存，但是析构函数会根据两个代码来析构两次，当第一次析构
			* 之后delete m_height;和m_height = NULL;这两个代码会把指针所对应的内存释放掉
			* 然后执行p1的析构函数后发现这俩已经被释放掉了，再释放就成了非法操作。这是浅拷贝。
			*/
		{
			delete m_height;
			m_height = NULL;//防止出现野指针，这两行代码是很标准的释放new所开辟的内存
		}		
	}
	int m_age;
	int* m_height;	
};
void test01()
{
	person p1(18,160);
	cout << "p1年龄为" << p1.m_age << endl;
	cout << "p1身高为" << *p1.m_height << endl;//加*号解引用一下
	person p2(p1);//拷贝构造但是是浅拷贝
	cout << "p2年龄为" << p2.m_age << endl;
	cout << "p2身高为" << *p2.m_height << endl;
}
int main()
{
	test01();
	return 0;
}
//在该案例中我想过如果同时构造一个深拷贝和一个浅拷贝系统能自动识别吗？答案是C++不允许同时定义两个拷贝构造函数（函数重载不适用于拷贝构造函数）。
//自己的总结；只要是new出来的内存必须用深拷贝，正常的局部变量深拷贝浅拷贝都行