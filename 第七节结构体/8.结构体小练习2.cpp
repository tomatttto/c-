#include<iostream>
using namespace std;
/*
* ������23����
* ����22����
* �ŷɣ�20����
* ���ƣ�21����
* ������19��Ů
*/
struct sanguo 
{
	string name;
	int age;
	string sex;
};
void paixu(struct sanguo wujiang[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i -1; j++)
		{
			if (wujiang[j].age > wujiang[j + 1].age) 
			{
				struct sanguo temp = wujiang[j];
				wujiang[j] = wujiang[j + 1];
				wujiang[j + 1] = temp;
			}
		}
	}
}
void print(struct sanguo wujiang[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << wujiang[i].name << wujiang[i].age << wujiang[i].sex << endl;
	}
}
int main() 
{
	
	sanguo wujiang[5]{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	int len = sizeof(wujiang)/sizeof(wujiang[0]);
	paixu(wujiang, len);
	print(wujiang, len);
	system("pause");
	return 0;
}