#include <iostream>
#include<string>
using namespace std;
int main() 
{
	/*
	������ͬѧ�����������ģ����壩
 	      ����  ��ѧ  Ӣ��
	����  100   100   100
	����  90    50    100
	����  60    70    80
	*/
	int zhong = 0;
	string name[] = { "����","����","����" };
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
		cout <<name[i]<< "�ܳɼ�Ϊ" << zhong << endl;
		zhong = 0;
	}
}