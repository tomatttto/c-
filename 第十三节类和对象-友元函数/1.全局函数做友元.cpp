/*��������ļ��п���(Public)�����������(Privaie)�����������Ŀ��˶����Խ�ȥ���������������˽�еģ�Ҳ����˵ֻ�����ܽ�ȥ
  �����أ���Ҳ����������ĺ����ۺû��ѽ�ȥ���ڳ������Щ˽������ Ҳ�������������һЩ������������з��ʣ�����Ҫ�õ���Ԫ�ļ���
  ��Ԫ��Ŀ�ľ�����һ������������ ������һ������˽�г�Ա,��Ԫ�Ĺؼ���Ϊ friend
*/
#include<iostream>
using namespace std;
class building
{
	friend void  pengyou(building* building);//��Ԫ����������building pengyou���ҵĺ����ѿ��Է����ҵ�˽����
public:
	building()//���캯��������ֵ
	{
		m_woshi = "����";
		m_keting = "����";
	}
	string m_keting;//����
private:
	string m_woshi;//����
};
void  pengyou(building *building)//����ȫ�ֺ���
{
	cout << "�������ڷ���" << building->m_keting << endl;
	cout << "�������ڷ���" << building->m_woshi << endl;
}
void test01()
{
	building b1;
	pengyou(&b1);
}
int main()
{
	test01();
	return 0;
}