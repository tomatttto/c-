#include<iostream>
#include<ctime>
//有三个老师，每个老师带五个学生，输出这三个老师所带的五个学生
using namespace std;
struct student
{
	string name;
	int score;
};
struct teacher 
{	
	string name;
	struct student stuname[5];
};
void teacherchuangjian(struct teacher *t1,int len)
{
	string temp;
	int random = rand() %  60 + 40;
	for (int i = 0; i < len; i++)
	{	
		cout << "输入老师姓名" ;
		 cin >> temp;
		 t1[i].name = temp;
		 cout << "函数里老师是" << t1[i].name << endl;
		 for (int j = 0; j < 5; j++)
		 {
			 cout << "输入学生姓名" ;
			 cin >> temp;
			 t1[i].stuname[j].name = temp;//改代码的含义是把用户输入的temp赋值在t1这个结构体数组里的stuname的数组里的姓名，自己写的时候写成了
			 //t1[i].stuname->name这样是不对的，这样只会输出一个学生姓名到stuname[0]里并且每次循环都会覆盖stuname[0]里的数据不会后移
			 int random = rand() % 60 + 40;
			 t1[i].stuname[j].score = random;
		 }
	}
}
void print( teacher t1[],int len)
{
	for (int i = 0; i < len ; i++)
	{
		cout << "老师为；" << t1[i].name<< "所带的学生为；";
		for (int j = 0; j < 5; j++)
		{
			cout << t1[i].stuname[j].name<<",";
			cout << "成绩为；" << t1[i].stuname[j].score << endl;
		}
	}
}
int main() 
{
	srand((unsigned int)time(NULL));
	int len;
	//创建三名老师的数组
	struct teacher t1[3];
	//通过函数给3名老师的信息赋值并给老师带的学生信息赋值
	len = sizeof(t1) / sizeof(t1[0]);
	teacherchuangjian(t1,len);
	print( t1, len);
	//打印
	system("pause");
	return 0;
}