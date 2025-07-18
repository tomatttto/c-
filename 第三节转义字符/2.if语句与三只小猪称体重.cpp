#include <iostream>	
using namespace std;
int main() {
	int pig1, pig2, pig3;
	cout << "请输入三只小猪的体重(kg)：" << endl;
	cin >> pig1 >> pig2 >> pig3;
	if (pig1>pig2&&pig1>pig3) {
		cout << "最重的是pig1";
		if (pig2>pig3) {
			cout << "其次是pig2，最轻的是pig3";
		}
		else if (pig2 < pig3) {
			cout << "其次是pig3，最轻的是pig2" << endl;
		}
	}
	else if (pig2 > pig1 && pig2 > pig3)
	{
		cout << "最重的是pig2";
		if (pig1 > pig3) {
			cout << "其次是pig1，最轻的是pig3";
		}
		else if (pig1 < pig3) {
			cout << "其次是pig3，最轻的是pig1" << endl;
		}
	}
	else if (pig3 > pig1 && pig3 > pig2)
	{
		cout << "最重的是pig3";
		if (pig2 > pig1) {
			cout << "其次是pig2，最轻的是pig1";
		}
		else if (pig2 < pig1) {
			cout << "其次是pig1，最轻的是pig2" << endl;
		}
	}


system("pause");
return 0;
}