#include <iostream>
using namespace std;
struct student {
	string name;
	int age;
	float score;
};
//传递有两种传值和传址该函数为传值
void printStudent(struct student s1)
{
	cout<<"传值函数里" << "姓名：" << s1.name << "  年龄：" << s1.age << "  成绩：" << s1.score << endl;
}
//地址传递
void printStudent2(struct student *s1)
{
	cout <<"传址函数里" << "姓名：" << s1->name << "  年龄：" << s1->age << "  成绩：" << s1->score << endl;
}
int main()
{
	struct student s1;
	s1.name = "张三";
	s1.age = 20;
	s1.score = 90.5;
	printStudent(s1);
	printStudent2(&s1);
	//cout << "姓名：" << s1.name <<"  年龄："<< s1.age << "  成绩：" << s1.score << endl;
	system("pause");
	return 0;
}