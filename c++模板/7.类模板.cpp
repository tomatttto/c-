//建立一个通用类，类中成员数据类型可以不具体定制，用一个虚拟的类来代表
#include<iostream>
using namespace std;
template <class nametype,class agetype>//提供两个模板数据
class person//类模板
{
public:
	person(nametype name, agetype age)
	{
		this->name = name;
		this->age = age;
	}
	void show()
	{
		cout << "姓名为" << name << "年龄为" << age << endl;
	}
	nametype name;//用的是模板里的两个模板类型
	agetype age;
};
void test01()
{
	person<string, int> p1("tom", 19);//string和int分别是对于nametype和agetype这两个模板进行类型的确定。
	p1.show();
}
int main()
{
	test01();
	return 0;
}