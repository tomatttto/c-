#include<iostream>
#include<ctime>
//��������ʦ��ÿ����ʦ�����ѧ���������������ʦ���������ѧ��
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
		cout << "������ʦ����" ;
		 cin >> temp;
		 t1[i].name = temp;
		 cout << "��������ʦ��" << t1[i].name << endl;
		 for (int j = 0; j < 5; j++)
		 {
			 cout << "����ѧ������" ;
			 cin >> temp;
			 t1[i].stuname[j].name = temp;//�Ĵ���ĺ����ǰ��û������temp��ֵ��t1����ṹ���������stuname����������������Լ�д��ʱ��д����
			 //t1[i].stuname->name�����ǲ��Եģ�����ֻ�����һ��ѧ��������stuname[0]�ﲢ��ÿ��ѭ�����Ḳ��stuname[0]������ݲ������
			 int random = rand() % 60 + 40;
			 t1[i].stuname[j].score = random;
		 }
	}
}
void print( teacher t1[],int len)
{
	for (int i = 0; i < len ; i++)
	{
		cout << "��ʦΪ��" << t1[i].name<< "������ѧ��Ϊ��";
		for (int j = 0; j < 5; j++)
		{
			cout << t1[i].stuname[j].name<<",";
			cout << "�ɼ�Ϊ��" << t1[i].stuname[j].score << endl;
		}
	}
}
int main() 
{
	srand((unsigned int)time(NULL));
	int len;
	//����������ʦ������
	struct teacher t1[3];
	//ͨ��������3����ʦ����Ϣ��ֵ������ʦ����ѧ����Ϣ��ֵ
	len = sizeof(t1) / sizeof(t1[0]);
	teacherchuangjian(t1,len);
	print( t1, len);
	//��ӡ
	system("pause");
	return 0;
}