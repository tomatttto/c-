//�����������ֱ�������ͨд���Ͷ�̬������ʵ�������������Ľ�������ļ�������
#include<iostream>
using namespace std;
//��ͨд��
class calculator
{
public:

	int getresult(string oper)//�������ǻ�ȡ�����oper�������
	{
		if (oper == "+")
		{
			return m_num1 + m_num2;
		}
		else if (oper == "-")
		{
			return m_num1 - m_num2;
		}
		else if (oper == "*")
		{
			return m_num1 * m_num2;
		}
		//�������չ�µĹ�����Ҫ�޸�Դ�롣����Ӹ�����������ɶ�ġ�
		//����ʵ�����������ᳫ����ԭ�򣻶���չ���п��������޸Ľ��йر�
	}

	int m_num1;
	int m_num2;
};
void test01()//��ͨд��
{
	//����һ���������Ķ���
	calculator c1;
	c1.m_num1 = 10;
	c1.m_num2 = 20;
	cout << c1.m_num1 << "+" << c1.m_num2 << "=" << c1.getresult("+") << endl;
	cout << c1.m_num1 << "-" << c1.m_num2 << "=" << c1.getresult("-") << endl;
	cout << c1.m_num1 << "*" << c1.m_num2 << "=" << c1.getresult("*") << endl;
}
//���ö�̬ʵ��
//ʵ��һ���������Ļ���
class abstractcalculator//����������
{
public:
	virtual int getresult()
	{
		return 0;
	}
	int m_num1;
	int m_num2;

};
//�����һ���ӷ�����
class addcalculator :public abstractcalculator
{
public:
	int getresult()
	{
		return m_num1 + m_num2;//�ӷ�������
	}
};
//������������
class subcalculator :public abstractcalculator
{
public:
	int getresult()
	{
		return m_num1 - m_num2;//����������
	}
};
//�˷���������
class mulcalculator :public abstractcalculator
{
public:
	int getresult()
	{
		return m_num1 * m_num2;//�˷�������
	}
};
void test02()
{
	//����ָ��д����
	abstractcalculator* abc = new addcalculator;// addcalculator��������࣬ͨ�������ָ��ָ��new�����ļӷ���
	abc->m_num1 = 100;
	abc->m_num2 = 200;
	//�ӷ�����
	cout << abc->m_num1 << "+" << abc->m_num2 << "=" << abc->getresult() << endl;
	delete abc;//�����ֶ�ɾ����ɾ�����Ƕ���������ָ��ûɾ���������滹����abcȥָ������
	//��������
	abc = new subcalculator;
	abc->m_num1 = 100;
	abc->m_num2 = 200;
	cout << abc->m_num1 << "-" << abc->m_num2 << "=" << abc->getresult() << endl;
	delete abc;
}
int main()
{
	test01();
	test02();
	return 0;
}