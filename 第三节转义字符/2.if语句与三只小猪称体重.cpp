#include <iostream>	
using namespace std;
int main() {
	int pig1, pig2, pig3;
	cout << "��������ֻС�������(kg)��" << endl;
	cin >> pig1 >> pig2 >> pig3;
	if (pig1>pig2&&pig1>pig3) {
		cout << "���ص���pig1";
		if (pig2>pig3) {
			cout << "�����pig2���������pig3";
		}
		else if (pig2 < pig3) {
			cout << "�����pig3���������pig2" << endl;
		}
	}
	else if (pig2 > pig1 && pig2 > pig3)
	{
		cout << "���ص���pig2";
		if (pig1 > pig3) {
			cout << "�����pig1���������pig3";
		}
		else if (pig1 < pig3) {
			cout << "�����pig3���������pig1" << endl;
		}
	}
	else if (pig3 > pig1 && pig3 > pig2)
	{
		cout << "���ص���pig3";
		if (pig2 > pig1) {
			cout << "�����pig2���������pig1";
		}
		else if (pig2 < pig1) {
			cout << "�����pig1���������pig2" << endl;
		}
	}


system("pause");
return 0;
}