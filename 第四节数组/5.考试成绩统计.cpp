#include <iostream>
#include<string>
using namespace std;
int main() 
{
	/*
	有三名同学（张三，李四，王五）
 	      语文  数学  英语
	张三  100   100   100
	李四  90    50    100
	王五  60    70    80
	*/
	int zhong = 0;
	string name[] = { "张三","李四","王五" };
	int score[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	for (int i = 0; i < 3; i++)
	{
		name[i];
		for (int j = 0; j <3; j++)
		{
			zhong += score[i][j];
		}
		cout <<name[i]<< "总成绩为" << zhong << endl;
		zhong = 0;
	}
}