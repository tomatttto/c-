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
	struct student studentname;//student�ṹ��
};
int main() 
{
	teacher t;
	t.id = 101;
	t.name = "����ʦ";
	t.studentname.name = "����";
	t.studentname.age = 20;
	cout << " ��ʦ���� " << t.name << " ��ʦid " << t.id << " ��ʦ������ѧ������ " << t.studentname.name << " ��ʦ������ѧ������ " << t.studentname.age << endl;
	system("pause");
	return 0;
}