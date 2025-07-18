#include<iostream>
using namespace std;
class myint
{
	friend ostream& operator<<(ostream& cout, myint my);
public:
	myint()
	{
		a = 10;
	}
	myint& operator--()//(Ç°ÖÃµÝ¼õÖØÔØ)
	{
		a--;
		return *this;
	}
	myint operator--(int)//(ºóÖÃµÝ¼õº¯Êý)
	{
		myint temp = *this;
		a--;
		return temp;
	}
private:
	int a;
};

ostream& operator<<(ostream& cout, myint my)
{
	cout << my.a << endl;
	return cout;
}
void test01()
{
	myint my;
	cout << --my << endl;
	cout << my << endl;
	cout << my-- << endl;
	cout << my << endl;
}
int main()
{
	test01();
	return 0;
}
