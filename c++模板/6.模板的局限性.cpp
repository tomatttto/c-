//模板通用性并不是万能的
#include<iostream>
using namespace std;
class person
{
public:
	person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}
	string name;
	int age;
};
template<class T>
bool compare(T &a,T &b)//比较模板函数
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//2.但是利用具体化的person可以实现模板函数的类的比较
template<> bool compare(person& p1, person& p2)
{
	if (p1.name == p2.name && p1.age == p2.age)
	{
		return true;

	}
	else
	{
		return false;
	}
}
void test01()
{
	int a = 10;
	int b = 20;
	bool ret = compare(a, b);
	if (a == b)
	{
		cout << "a == b" << endl;
	}
	else
	{
		cout << "a != b" << endl;
	}
}
void test02()
{
	person p1("tom", 10);
	person p2("tom1", 20);
	bool ret = compare(p1, p2);//1.person类无法直接用来比较
	if (ret)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1 != p2" << endl;
	}
}
int main()
{
	test01();
	test02();
	return 0;
}