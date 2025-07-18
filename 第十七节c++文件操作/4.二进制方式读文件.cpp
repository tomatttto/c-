#include<iostream>
#include<fstream>
using namespace std;
class person
{
public:
	char m_name[64];
	int m_age;
};
void test01()
{
	ifstream file1;
	file1.open("二进制文件.txt", ios::in | ios::binary);
	if (!file1.is_open())
	{
		cout << "打开失败" << endl;
		return;
	}
	else
	{
		person p1;
		file1.read((char*)&p1, sizeof(person));
		cout << "姓名;" << p1.m_name << endl;
		cout << "年龄;" << p1.m_age << endl;
	}
	file1.close();
}
int main()
{
	test01();
	return 0;
}