#include<iostream>
using namespace std;
/*
* 构造函数两种分类方式
* 按参数分；有参/无参（默认）构造
* 按类型分；普通/拷贝构造
* 三种调用；括号法，显示法，隐式转换法
*/
class person
{
public:
	int age =10 ;
	person()
	{
		cout << "person无参构造" << endl;
	}
	person(int a)
	{
		age = a;
		cout << "person有参构造" << endl;
	}
	//↑上面的都算普通构造，下面进行拷贝构造
	person(const person &p)//相当于复制一个person，const是为了固定，&p是为了做引用
	{
		cout << "person拷贝构造有参构造" << endl;
		age = p.age;//将传入person里的属性age拷贝到当前函数中。
	}
	//下面是析构函数
	~person()
	{

		cout << "person析构函数" << endl;
	}
};
//调用
void test01()
{
	//括号法
	person p;//默认构造函数无参调用
	person p1(10);//括号法，调用有参构造函数
	person p2(p1);//拷贝构造函数
	//注意事项，调用默认构造函数是不要加()
	person();//加括号了以后编译器会认为这是一个函数声明
	/*类似于*/ void func();//这样的声明
	//cout << "p2的年龄为" << p2.age << endl;//拷贝构造，会把p1里的age也考过来
}
void test02()
{
	//显示法
	person p3;//默认构造
	person p4 = person(10);//有参构造
	person p5 = person(p4);//拷贝构造
	//注意事项1；等号右侧叫匿名构造也就是说person(10)没有名字，但是给起一个名字叫p4.
	// 特点是当前行执行结束后，系统会立即回收匿名对象，也就是这一行执行完后立刻回收，下一行就没有这个匿名对象了
	person(10);//也就是说，这个匿名函数不会等test01执行完后析构，而是会立即析构
	cout << "当出现这个文字代表test02函数执行完毕" << endl;
	//注意事项2不要利用拷贝构造函数初始化匿名对象
	//person(p4);//这样是不行的编译器会认为 person(p3)等价于 person p3；为什么不能拷贝？因为拷贝构造的函数所选用的母函数（先这么说）必须是一个长期有名的函数而不是向匿名函数这样无名，且短期的函数
}
void test03()
{
	//隐式转换法
	person p4 = 10;//相当于写了person p4 = person(10);有参构造
	person p5 = p4;//拷贝构造
}
int main()
{
	//test01();
	//test02();
	//test03();
	return 0;
}