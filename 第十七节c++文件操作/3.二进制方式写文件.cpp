#include<iostream>
#include<fstream>
using namespace std;
//�����ƿ���д���Զ������ͣ�����clsss��
class person
{
public:
	char m_name[64];
	int m_age;
};
void test01()
{
	ofstream file1;
	file1.open("�������ļ�.txt", ios::out | ios::binary);//binary��ָ�ö����Ʒ�ʽ
	person p1 = { "����",18 };
	file1.write((const char*)&p1, sizeof(person));
	//(const char*)&p1: ��������ʹ���˵�ַ-of������ & ����ȡ����p1�ĵ�ַ��
	// Ȼ��ͨ������ת��(const char*)��person���͵ĵ�ַת��Ϊconst char*���͡�
	// ������Ϊwrite������Ҫһ��const char*���͵�ָ����Ϊ����������������Ķ����ַ��person*���͡�
	// ͨ��ǿ������ת�������ǿ��Խ�person*���͵ĵ�ַת��Ϊwrite���������const char*���͡�
	file1.close();
}
int main()
{
	test01();
	return 0;
}