#include <iostream>
#include<string>
using namespace std;
//用->可以通过结构体指针访问结构体
struct student
{
	string name;
	int age;
};
int main()
{
	struct student s1
	{
		"张三", 19
	};
	struct  student *p = &s1;//通过创建struct指针指向student里的变量，struct可以省略
	cout << p -> name << endl;//指针可以通过->访问结构体里具体的变量
	system("pause");
	return 0;
}