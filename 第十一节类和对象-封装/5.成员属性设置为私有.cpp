#include<iostream>
using namespace std;
//˽�л��ŵ�1�������Լ����ƶ�дȨ��
//          2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
class person
{
public:
	//��������
	void setname(string name)
	{
		 p_name = name ;
	}
	//��ȡ����
	string getname()
	{
		return p_name;
	}
	//ͨ���������������ຯ����ȡ��˽�����������ͨ�������ຯ�����ʵ�˽�������	
	int getage()
	{
		return p_age;
	}
	void setage(int age)
	{
		if (age>160||age<0)
		{
			cout << "����ѽ������̫���̫С��";
		}
		else
		{
			p_age = age;
		}
	}
	void setidol(string idol)
	{
		p_idol =idol ;
	}
	//������ͬ��
private:
	string p_name;//�����ɶ���д

	int p_age ;//���� ֻ��

	string p_idol;//ż��ֻд

};
int main()
{
	person p1;
	p1.setname("����");
	cout<<p1.getname()<<endl;
	cout << p1.setage(170) << endl;
	cout << p1.getage() << endl;
	p1.setidol("������");
	return 0;
}