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
	file1.open("�������ļ�.txt", ios::in | ios::binary);
	if (!file1.is_open())
	{
		cout << "��ʧ��" << endl;
		return;
	}
	else
	{
		person p1;
		file1.read((char*)&p1, sizeof(person));
		cout << "����;" << p1.m_name << endl;
		cout << "����;" << p1.m_age << endl;
	}
	file1.close();
}
int main()
{
	test01();
	return 0;
}