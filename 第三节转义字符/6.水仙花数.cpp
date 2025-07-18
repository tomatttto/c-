#include <iostream>
using namespace std;
int main() {
	int a = 100 ,b = 0,c = 0,d = 0;
	while (a <= 999)
	{
		b = (a / 100)/*百位*/*(a / 100)*(a / 100) + (a / 10 % 10)* (a / 10 % 10)/*十位*/ * (a / 10 % 10) + (a % 10)* (a % 10)* (a % 10);/*个位*/
		if (b==a )
		{
			cout << a << endl;
		}
		a++;
	}
	system("pause");
	return 0;
}