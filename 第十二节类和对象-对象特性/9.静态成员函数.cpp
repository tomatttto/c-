//���������������֮ǰ�ȿ���̬��Ա����
#include<iostream>
using namespace std;
//��̬��Ա����
//1.���ж�����һ������
//2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class person
{
public:
	int m_a = 10;
	static int m_b;
	static void jingtai()//��̬��Ա����
	{
		//cout << m_a << end;//��Ϊm_a������ĳ�Ա�������Ǿ�̬�����Է��ʲ���
		cout << m_b << endl;//m_b�Ǿ�̬��Ա�������Է���
	}
private:
	static void jingtai2()//ͬ��̬��Ա������˽����ͬ�����ò���
	{
		cout << m_b << endl;
	}
};
int person::m_b = 20;
void test1()
{
	person::jingtai();
	//person::jingtai2();//ͬ��̬��Ա������˽����ͬ�����ò���
}
int main()
{
	person::jingtai();
	return 0;
}