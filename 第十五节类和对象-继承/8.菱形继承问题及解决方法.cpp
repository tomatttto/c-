//���μ̳���ָ�������๲ͬ�̳�һ������Ȼ������һ����̳�����������
#include<iostream>
using namespace std;
class animal//������
{
public:
	int m_age;
};
//������̳�"virtual"���Խ����������,��Ϊ��̳к�animal���Ϊ�鸸��
class sheep:virtual public animal//����(�̳ж���)
{

};
class camel:virtual public animal//����(�̳ж���)
{

};
class sheepcamel:public sheep ,public camel//������(�̳����࣬����)
{

};
void test01()
{
	sheepcamel sc1;
	sc1.sheep::m_age = 18;//�������
	sc1.camel::m_age = 28;//�յ�����
	//�������μ̳�ʱ����������ӵ����ͬ��������Ҫ������������
	cout<<sc1.sheepcamel::sheep::m_age << endl;//û����̳�֮ǰ����Cout������Cout����ķֱ���18��28��
	                                           //���ǵ�ʹ������̳�֮�󣬼̳е�ֵҲ����m_age�൱�ڹ����һ��ֵ��������shape����camel�� 
	cout << sc1.sheepcamel::camel::m_age << endl;
	cout << sc1.m_age << endl;//���Խ���ֱ�����Ҳ����28.
	//�����������.png�鿴������ͨ���������߾���鿴���Է���sheep��camel���и�vbptr�����������ָ��
	//��������ָ���ָ��vbtable������,
}


int main()
{
	test01();
	return 0;
}