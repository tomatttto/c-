#include <iostream>
#include<string>
using namespace std;
/*创建具体的学生
* 1.struct student s1
* 2. struct student  s2 = { ... }
* 3.定义结构体时顺便创建结构体的变量
*/
struct student //结构体，可以定义自己想要的类型
{
	string name;
	int age;
	float score;
}s3;//3.定义结构体时顺便创建结构体的变量
int main()
{
	struct student  s1;
	s1.name = "张三";
	s1.age = 18;
	s1.score = 85.5;
	struct student s2
	{
		s2.name = "李四",
		s2.age = 19,
		s2.score = 90.1
	};
	s3.name = "王五";
	s3.age = 17;
	s3.score = 60;

	cout <<"姓名" << s1.name << "年龄" << s1.age << "分数" << s1.score << endl;
	cout << "姓名" << s2.name << "年龄" << s2.age << "分数" << s2.score << endl;
	cout << "姓名" << s3.name << "年龄" << s3.age << "分数" << s3.score << endl;
	system("pause");
	return 0;
}