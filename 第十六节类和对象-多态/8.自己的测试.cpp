#include<iostream>
using namespace std;
class base
{
public:
	virtual int print() = 0;//���ി�麯��
};
class son :public base
{
public:
	void print()
	{
		cout << "����һ��С����" << endl;
		*m_a = new data;
	}
private:
	int *m_a;
};
class son1:public base
{
public:
	int print()
	{
		cout << "����һ��������" << endl;
		int a;
		cin >> a;
		return a;
	}
};
int dowork(base* base)
{
	int a = base->print();
	return a;
}
void test01()
{
	int a = dowork(new son);
	cout << a << endl;
}
int main()
{
	test01();
	return 0;
}