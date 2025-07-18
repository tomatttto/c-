#include <iostream>
using namespace std;
struct student {
	string name;
	int age;
	float score;
};
//改为传指针可以减少内存空间的使用
//加一个const可以防止在函数里误操作
void printstudent(const student *s1) 
{
	cout << s1->name << s1->age << " " << s1->score << endl;
}
int main()
{
	struct student s1
	{
		"张三",
		18,
		90
	};

	printstudent(&s1);
	system("pause");
	return 0;
}