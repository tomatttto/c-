#include<iostream>
using namespace std;
void maopao(int *arr,int len)
{
	int temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printarr(int* arr,int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}
int main()
{
	int arr[10] = { 3,5,4,2,6,1,9,8,7,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	maopao(arr,len);
	printarr(arr, len);
	system("pause");
	return 0;
}