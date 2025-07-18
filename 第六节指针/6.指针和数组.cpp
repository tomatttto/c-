#include<iostream>
using namespace std;
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	int* p = arr;//arr是数组的首地址
	cout << "数组arr里的数据为" << endl;
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		cout << *p << endl;
		p++;
	}
	system("pause");
	return 0;
}