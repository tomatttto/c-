#include<iostream>
using namespace std;
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	int* p = arr;//arr��������׵�ַ
	cout << "����arr�������Ϊ" << endl;
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		cout << *p << endl;
		p++;
	}
	system("pause");
	return 0;
}