#include<iostream>
using namespace std;
class Building
{
	friend class pengyou;//������Ԫ��
public:
	Building();//���캯�����޲ι���
	string m_keting;//����
private:
	string m_woshi;//����
};
class pengyou
{
public:
	pengyou();
	void visit();//�ιۺ���������building�е�����
	Building* building;
};
//�����������д��Ա����ǰ���ǵ�����������һ��Ҳ���ǵ�6�С�
Building::Building()//����ǹ��캯��
{
	m_keting = "����";
	m_woshi = "����";
}
pengyou::pengyou()//�����pengyou�Ĺ��캯��
{
	building = new Building;//������ڶ������ٵģ��Ͳ��ͷ��ɳ���Ա�����������Building* building;��д��pengyou��ģ�����������ָ������
	//���Զ�����building��ͨ��ջ����ָ��ȥָ��building��
}
void pengyou::visit()
{
	cout << "�������ڷ���" << building->m_keting << endl;
	cout << "�������ڷ���" << building->m_woshi << endl;
}
void test01()
{
	pengyou py;
	//��ִ���½�һ��pengyou���py���캯��pengyou��ִ��Ȼ��building = new Building;���ڶ�������һ���ռ��������Building��
	//����building����ĺ����ͳ�Ա������ʼִ��
	py.visit();
	//������һ��visit������ִ�п�ʼ������������ڷ��ʿ�������
}
int main()
{
	test01();
	return 0;
}