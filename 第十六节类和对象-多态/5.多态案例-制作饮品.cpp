#include<iostream>
using namespace std;
class base
{
public:
	virtual void zhushui() = 0;//��ˮ
	virtual void chongpao() = 0;//����
	virtual void daorubeizhong() = 0;//���뱭��
	virtual void jiaruliao() = 0;//�Ӹ���
	void makedrink()
	{
		zhushui();
		chongpao();
		daorubeizhong();
		jiaruliao();
	}
};
class coffee:public base
{
public:
	virtual void zhushui()
	{
		cout << "��ˮ" << endl;
	}
	virtual void chongpao()
	{
		cout << "�忧��" << endl;
	}
	virtual void daorubeizhong()
	{
		cout << "���뱭��" << endl;
	}
	virtual void jiaruliao()
	{
		cout << "���ǻ�ţ��" << endl;
	}
};
class tea :public base
{
public:
	virtual void zhushui()
	{
		cout << "��ˮ" << endl;
	}
	virtual void chongpao()
	{
		cout << "���" << endl;
	}
	virtual void daorubeizhong()
	{
		cout << "���뱭��" << endl;
	}
	virtual void jiaruliao()
	{
		cout << "������" << endl;
	}
};
void dowork(base *b1)//����
{
	b1->makedrink();//�ӿ�
	delete b1;//�ͷ�
}
void test01()
{
	//��������
	//base* base = new coffee;
	//base->makedrink();//���д������ͨд��������dowork�൱�ڷ�װ��һ��������
	dowork(new coffee);
	dowork(new tea);
}
int main()
{
	test01();
	return 0;
}