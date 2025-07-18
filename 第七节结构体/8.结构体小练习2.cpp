#include<iostream>
using namespace std;
/*
* Áõ±¸£¬23£¬ÄÐ
* ¹ØÓð£¬22£¬ÄÐ
* ÕÅ·É£¬20£¬ÄÐ
* ÕÔÔÆ£¬21£¬ÄÐ
* õõ²õ£¬19£¬Å®
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
		{"Áõ±¸",23,"ÄÐ"},
		{"¹ØÓð",22,"ÄÐ"},
		{"ÕÅ·É",20,"ÄÐ"},
		{"ÕÔÔÆ",21,"ÄÐ"},
		{"õõ²õ",19,"Å®"}
	};
	int len = sizeof(wujiang)/sizeof(wujiang[0]);
	paixu(wujiang, len);
	print(wujiang, len);
	system("pause");
	return 0;
}