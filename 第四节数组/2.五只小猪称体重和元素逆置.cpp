#include<iostream>
using namespace std;
int main() 
{//Ԫ������
	int start = 0;
	int end = 4;
	int sign = 0;
	int a[] = { 1,2,3,4,5 };
	for (int i = 4; i >= 0; i--)
	{
		sign = a[start];
		a[start] = a[end];
		a[end] = sign;
		start++, end--;
		if (start == end)
		{
			break;
		}
	}
	cout << a[0]<<a[1] << a[2] << a[3] << a[4] << endl;
	
	return 0;
}




/*int max = 0;
	int shuliang = 1;
	int wight[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "�����" << i+1 << "ֻС�������" << endl;
		cin >> wight[i];
	}
	for (int i = 0; i < sizeof(wight)/sizeof(wight[0]); i++)
	{
		if (max < wight[i])
		{
			max = wight[i];
			shuliang++;
		}
	}
	cout << "��ֻ�������ص��ǵ�" << shuliang << "ֻ" << "����Ϊ" << max << endl;*/