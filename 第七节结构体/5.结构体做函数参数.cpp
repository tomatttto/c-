#include <iostream>
using namespace std;
struct student {
	string name;
	int age;
	float score;
};
//���������ִ�ֵ�ʹ�ַ�ú���Ϊ��ֵ
void printStudent(struct student s1)
{
	cout<<"��ֵ������" << "������" << s1.name << "  ���䣺" << s1.age << "  �ɼ���" << s1.score << endl;
}
//��ַ����
void printStudent2(struct student *s1)
{
	cout <<"��ַ������" << "������" << s1->name << "  ���䣺" << s1->age << "  �ɼ���" << s1->score << endl;
}
int main()
{
	struct student s1;
	s1.name = "����";
	s1.age = 20;
	s1.score = 90.5;
	printStudent(s1);
	printStudent2(&s1);
	//cout << "������" << s1.name <<"  ���䣺"<< s1.age << "  �ɼ���" << s1.score << endl;
	system("pause");
	return 0;
}