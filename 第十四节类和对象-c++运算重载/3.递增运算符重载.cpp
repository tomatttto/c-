/*递增运算符“++”
* 
*/
#include<iostream>
using namespace std;
class myint
{
	friend void test02();
	friend ostream& operator<<(ostream& cout, myint my);//友元函数声明
public:
	myint& operator++()//++重载（先++再输出）这里要加引用传址，不然只是传值的话会出现再输出加不上
		               //可以试着把&号删掉可以看出来问题在哪儿
	{
		a++;
		return *this;//返回自身
	}
	//加了int会执行后置++（先++再输出），int代表占位参数区分前置和后置，并没有实际用途，相当于c++里输出必须用cout。是一个规范写法
	myint operator++(int)//++重载（先++再输出）这里如果返回引用就会报错
	{
		
		//先记录当时的结果
		myint temp = *this;
		//递增
		a++;
		//将记录做结果返回
		return temp;
		//原理；*this会把传入名叫my的myint类完全复制一份给temp，
		// 然后将里面的a进行++操作然后再输出之前的temp里面的上一个值，
		// 但是实际的a已经被++了，所以当我再次输出a时就会把++过的a输出。
	}
	myint()
	{
		a = 20;
	}
private:
	int a;
};
ostream& operator<<(ostream& cout, myint my)//左移重载
{
	cout << my.a << endl;
	return cout;
}

void test01()
{
	myint my;
	cout << ++(++my) << endl;
	cout << my << endl;
}
void test02()
{
	myint my2;
	cout << my2++<< endl;
	cout << my2<<endl;
}
int main()
{
	test01();
	test02();
	return 0;
}