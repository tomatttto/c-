#include<iostream>
using namespace std;
//��������Ȩ��
//public    ����Ȩ��        ���ڿ��Է��ʣ�������Է���
//protected ����Ȩ��        ���ڿ��Է��ʣ����ⲻ�ɷ���,����Ȩ��������Է��ʸ�������
//private   ˽��Ȩ��        ���ڿ��Է��ʣ����ⲻ�ɷ���,�������ͷ��ʲ��˸���
class Preson
{
public: 
	string name;
protected:
	string car;
private:
	int password;
public://����ͬ�����public��Ϊprivate��protectedͬ����������ʲ���
	void func()//��Щ�����������Զ����Է���
	{
		name = "����";
		car = "��˹��˹";
		password = 123456;
	}
};
int main()
{
	Preson p1;
	p1.name = "����";
	//p1.car = "������";//��Ϊcar�Ǳ����࣬�������ⲻ�ɷ��ʣ�˽����passwordͬ��

	return 0;
}