#include<iostream>
using namespace std;
class student
{
	//类中的属性和行为统称为成员
	//属性；成员属性，成员变量
	//行为；成员函数，成员方法
public:
	string name;
	int id;

	//↓这种函数叫成员函数
	void giveinformation()
	{
		cout << "输入姓名" << endl;
		cin >> name;
		cout << "输入学号" << endl;
		cin >> id;
	}
	void showinformation()
	{
		cout << "姓名为" <<name<< endl;
		cout << "学号为" <<id<< endl;
	}
};
int main()
{
	student s1;
	s1.giveinformation();
	s1.showinformation();
}