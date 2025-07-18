//1.类模板没有自动推导类型
//2.类模板在模板参数中可以有默认参数
#include<iostream>
using namespace std;
template<class nametype,class agetype>
class person1//类模板
{
public:
	person1(nametype name,agetype age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void showperson()
	{
		cout << "姓名为" << m_name << endl;
		cout << "年龄为" << m_age << endl;
	}
	nametype m_name;
	agetype m_age;
};
//1.类模板没有自动推导类型
void test01()
{
	//person p1("孙悟空", 100);//1.1这样的话编译器推不出来类型
	person1<string, int> p1("孙悟空", 19);//1.2必须给他指定类型
	p1.showperson();
}
//2.类模板在模板参数中可以有默认参数
template<class nametype = string, class agetype = int>//2.1尖括号里面叫模板参数列表可以直接指定类型
class person2//类模板
{
public:
	person2(nametype name, agetype age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	void showperson()
	{
		cout << "姓名为" << m_name << endl;
		cout << "年龄为" << m_age << endl;
	}
	nametype m_name;
	agetype m_age;
};
void test02()
{
	person2<>p2("猪八戒", 99);//2.2这样的话这里就不需要加类型了
}
int main()
{
	test01();
	return 0;
}