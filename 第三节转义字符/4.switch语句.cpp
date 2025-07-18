#include<iostream>
using namespace std;
int main() {
	int a;
	cout << "请给哪吒2电影打分" << endl;
	cin >> a;
	switch(a)
	{
		case 10:
			cout << "你觉得优秀是吧" << endl;
			break;
		case 9:
			cout << "你觉得优秀是吧" << endl;
			break;
		case 8:
			cout << "你觉得还行是吧" << endl;
			break;
		case 7:
			cout << "你觉得还行是吧" << endl;
			break;
		case 6:
			cout << "你觉得一般是吧" << endl;
			break;
		case 5:
			cout << "你觉得一般是吧" << endl;
			break;
		default:
			cout << "垃圾是吧" << endl;
			break;
	}


	system("pause");
	return 0;
}