/*c++编译器会给一个类提供至少四种函数
* 默认构造函数，默认析构函数，默认拷贝函数(深浅拷贝)以及赋值运算符
* 赋值运算符 operator=，是用来对属性进行值的拷贝
*/
#include<iostream>
using namespace std;
class person
{
	public:
		person(int age)
		{
			this->age = new int (age);//堆区开辟的变量跟指针重名所以我加了个this但是视频里没这么干

		}
		~person()//这里的析构会崩掉，因为p1会释放一次堆区内存，p2析构时候同样会释放，但是释放时候发现p1已经释放过了所以会报错(浅拷贝)
		{
			if (this->age!=NULL)
			{
				delete this->age;
				this->age = NULL;
			}
		}
		//需要重载一下赋值运算符，解决浅拷贝带来的问题
		person& operator=(person &p)
		{
			//编译器提供的是浅拷贝 this->age = p.age;
			//先判断是否有有属性在堆区，有的话先释放，再进行深拷贝
			if (this->age != NULL)
			{
				delete this->age;
				this->age = NULL;
			}
			//深拷贝开辟一个新堆区空间，并将p.age指向的值复制到这个新空间
			this->age = new int(*p.age);
			return *this;//返回对象本身
		}
	int* age;
};
void test01()
{
	person p1(18);
	person p2(20);
	person p3(30);
	p3 = p2 = p1;//p1年龄给p2再给p3
	cout << "p1年龄为" << *p1.age << endl;
	cout << "p2年龄为" << *p2.age << endl;
	cout << "p3年龄为" << *p3.age << endl;
}
int main()
{
	test01();
	return 0;
}