//��������������֡�����Ӵ�С���㷨��ѡ���㷨�����ԣ�char�����顢int����
#include<iostream>
using namespace std;
template<typename T>
void myswap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
template<typename T>
void paixu(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j =i+1; j < len; j++)
		{
			//�϶������ֵ�ȱ����������ֵҪС˵��j�±��Ԫ�������ֵ
			if (arr[max] > arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			//�������i�󣬽���
			myswap(arr[max],arr[i]);
		}
	}
	for (int  k = 0; k< len; k++)
	{
		cout << arr[k] << endl;
	}
}


void test01()
{
	char chararr[] = "badcfe";
	int num = sizeof(chararr) / sizeof(char);
	paixu(chararr,num);
	
}
void test02()
{
	int intarr[] = { 3,9,6,4,8,2,89 };
	int num = sizeof(intarr) / sizeof(int);
	paixu(intarr, num);
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}