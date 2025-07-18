#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "输入分数看看你考上大学没" << endl;
	cin>>a;
	if (a >= 600) {
		if (a >= 700 && a <= 800) {
			cout << "恭喜你考上了北京大学！" << endl;
		}
		else if (a >= 800 && a <= 900) {
			cout << "恭喜你考上了清华大学！" << endl;
		}
		else {
			cout << "恭喜你考上985大学了" << endl;
		}
		
	}
	else if(a >= 500) {
		cout<<"你考上了211大学，继续努力！"<<endl;
		
	}
	else if (a >= 400)
	{
		cout << "你考上了普通大学，继续努力！" << endl;
		
	}
	else {
		cout << "你考上了普通高中，继续努力！" << endl;
		
	}
		system("pause"); // 显示暂停提示符

}