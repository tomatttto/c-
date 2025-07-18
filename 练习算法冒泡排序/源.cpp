#include<iostream>
#include"Ã°ÅÝ.h"
using namespace std;
int main()
{
	int arr[10] = { 3,5,4,2,6,1,9,8,7,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	maopao(arr, len);
	cout << "ÅÅÐòºóÎª" << endl;
	printarr(arr, len);
	system("pause");
	return 0;
}