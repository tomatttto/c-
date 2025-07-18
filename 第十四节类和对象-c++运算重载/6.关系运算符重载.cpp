//可以让两个自定义类型进行比较
#include<iostream>
using namespace std;
class person
{
	friend bool operator==(person& p1, person& p2);
public:
	person(string name,int age)
	{
		m_age = age;
		m_name = name;
	}
private:
	int m_age;
	string m_name;
};
bool operator==(person &p1,person &p2)
{
	if (p1.m_age == p2.m_age&&p1.m_name==p2.m_name)
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
	person p1("张博宇",18);
	person p2("张博宇",18);
	if (p1 == p2)
	{
		cout << "两人相等" << endl;
	}
	else
	{
		cout<<"两人不相等"<<endl;
	}
}
int main()
{
	test01();
	return 0;
}