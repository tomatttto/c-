#include <iostream>
using namespace std;
struct student {
	string name;
	int age;
	float score;
};
//��Ϊ��ָ����Լ����ڴ�ռ��ʹ��
//��һ��const���Է�ֹ�ں����������
void printstudent(const student *s1) 
{
	cout << s1->name << s1->age << " " << s1->score << endl;
}
int main()
{
	struct student s1
	{
		"����",
		18,
		90
	};

	printstudent(&s1);
	system("pause");
	return 0;
}