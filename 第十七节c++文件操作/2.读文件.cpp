//���ļ���д�ļ��������ƣ�����ȡ�ļ���ʽ��Խ϶�
//���裻 1.����ͷ�ļ���2.����������3.���ļ����ж��ļ��Ƿ�򿪳ɹ���4.�����ݡ�5.�ر��ļ���
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void test01() 
{
	ifstream file1;//����������
	file1.open("test.txt", ios::in);
	if (!file1.is_open())//file1.is_open()��һ��bool���͵�ֵ����˼���Ƿ�ɹ����ļ�
	{
		cout << "�ļ���ʧ�ܡ�����·���Ƿ���ȷ�����ļ��Ƿ����" << endl;
		return;
	}
	else
	{
		//���ļ�;4�ַ���
		
		// ��һ��
		char buf[1024] = { 0 };
		while (file1 >> buf)//��������ļ�����buf���char���ͣ��������ͷ���һ���ٱ�־
		{
			cout << buf << endl;
		}
		
		//�ڶ���
		char buf1[1024] = { 0 };
		while (file1.getline(buf1, sizeof(buf1)))//getline�ǻ�ȡһ�������������һ��������Ҫ��������ڶ������������Ҫ�����ٸ��ֽ���
		{
			cout << buf1 << endl;
		}
		
		//������
		string buf2;
		while (getline(file1, buf2))//���getline��Ҫ��stringͷ�ļ�����������˼�ǽ�����ļ���д�����ֻ������������string������char
		{
			cout << buf2 << endl;
		}

		//������
		char c;
		while ((c = file1.get())!=EOF)//���������һ���ֽ�һ���ֽڵĶ�Ȼ��ŵ���c������,EOF���ļ�β�����û�����ļ�β�����ѭ��
		{
			cout << c;
		}
	}
	file1.close();//�ر��ļ�
}
int main()
{
	test01();
	return 0;
}