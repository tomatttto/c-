#include <iostream>
#include<string>
using namespace std;
/*���������ѧ��
* 1.struct student s1
* 2. struct student  s2 = { ... }
* 3.����ṹ��ʱ˳�㴴���ṹ��ı���
*/
struct student //�ṹ�壬���Զ����Լ���Ҫ������
{
	string name;
	int age;
	float score;
}s3;//3.����ṹ��ʱ˳�㴴���ṹ��ı���
int main()
{
	struct student  s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 85.5;
	struct student s2
	{
		s2.name = "����",
		s2.age = 19,
		s2.score = 90.1
	};
	s3.name = "����";
	s3.age = 17;
	s3.score = 60;

	cout <<"����" << s1.name << "����" << s1.age << "����" << s1.score << endl;
	cout << "����" << s2.name << "����" << s2.age << "����" << s2.score << endl;
	cout << "����" << s3.name << "����" << s3.age << "����" << s3.score << endl;
	system("pause");
	return 0;
}