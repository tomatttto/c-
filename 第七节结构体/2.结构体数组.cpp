#include <iostream>
#include<string>
using namespace std;
//struct 结构体名 数组名[元素个数] = { {} , {} , {}}
struct student
{
	string name;
	int age;
	float score;
};
int main()
{
   //struct 结构体名 数组名[元素个数] = { {} , {} , {}}
	struct  student stuarr[3] = { 
		{"张三",18,90},
		{"李四",19,70},
		{"王五",17,60}
	};
	stuarr[0].name = "张博宇";//可以修改值
	for (int i = 0; i < 3; i++)
	{
		cout << stuarr[i].name << stuarr[i].age << stuarr[i].score << endl;
	}
	system("pause");
	return 0;
}