#include <iostream>
#include<string>
using namespace std;
//struct �ṹ���� ������[Ԫ�ظ���] = { {} , {} , {}}
struct student
{
	string name;
	int age;
	float score;
};
int main()
{
   //struct �ṹ���� ������[Ԫ�ظ���] = { {} , {} , {}}
	struct  student stuarr[3] = { 
		{"����",18,90},
		{"����",19,70},
		{"����",17,60}
	};
	stuarr[0].name = "�Ų���";//�����޸�ֵ
	for (int i = 0; i < 3; i++)
	{
		cout << stuarr[i].name << stuarr[i].age << stuarr[i].score << endl;
	}
	system("pause");
	return 0;
}