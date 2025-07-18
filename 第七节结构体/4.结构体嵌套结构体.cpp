#include<iostream>
using namespace std;
struct student
{
	string name;
	int age;
};
struct teacher
{
	int id;
	string name;
	struct student studentname;//student结构体
};
int main() 
{
	teacher t;
	t.id = 101;
	t.name = "王老师";
	t.studentname.name = "张三";
	t.studentname.age = 20;
	cout << " 老师姓名 " << t.name << " 老师id " << t.id << " 老师辅导的学生姓名 " << t.studentname.name << " 老师辅导的学生年龄 " << t.studentname.age << endl;
	system("pause");
	return 0;
}