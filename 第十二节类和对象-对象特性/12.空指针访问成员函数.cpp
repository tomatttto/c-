//c++中空指针也可以调用成员函数，但是需要注意有没有用到this指针
#include<iostream>
using namespace std;
class person
{
public:
	void showclassname()
	{
		cout << "这是person类"<<endl;//这里不会报错是因为不存在一个this指针去指向一个成员变量
	}
	void showclassage()
	{
		cout << "年龄是" << this->age << endl;//这里会报错的原因是因为*p指向的是一个null空指针，但是当写了p->showclassname();意味着*p是等于this指针的所以当一个空的this指针指向age时
		//也就会产生一个问题，一个不存在的指针指向了age。解决方法可以加一个if判断语句this是否为null
	}
	int age;
};
void test01()
{
	person* p = NULL;
	p->showclassname();
	p->showclassage();
}
int main()
{
	test01();
	return 0;
}