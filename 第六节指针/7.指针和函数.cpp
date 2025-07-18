#include<iostream>
using namespace std;
void swap02(int* p1, int* p2)
{
	int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	cout << "a=" << a << " b=" << b << endl;
	swap02(&a, &b);
	cout << "ÐÞ¸Äºó" << "a=" << a << " b=" << b << endl;
	system("pause");
	return 0;
}