#include <iostream>
#include<string>
using namespace std;
//��->����ͨ���ṹ��ָ����ʽṹ��
struct student
{
	string name;
	int age;
};
int main()
{
	struct student s1
	{
		"����", 19
	};
	struct  student *p = &s1;//ͨ������structָ��ָ��student��ı�����struct����ʡ��
	cout << p -> name << endl;//ָ�����ͨ��->���ʽṹ�������ı���
	system("pause");
	return 0;
}