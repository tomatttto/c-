//��̬ʹ��ʱ���������Щ���Կ��ٵ���������ô����ָ���ͷ�ʱ�޷������������������
//����������ǽ����������������Ϊ��������������
#include<iostream>
using namespace std;
class animal
{
public:
	animal()
	{
		cout << "animal���캯������" << endl;
	}
	virtual void speak() = 0;
	//virtual ~animal()//������������ӵĻ���������������������
	//{
	//	cout << "animal��������������" << endl;
	//}
	virtual ~animal() = 0;//��������������������Ҫ��д
};
animal::~animal()//����������д
{
	cout << "��������animal����" << endl;
}
class cat :public animal
{
public:
	cat(string name)
	{
		cout << "cat���캯������" << endl;
		m_name = new string(name);//���ٵ�����
	}
	void speak()
	{
		cout<<*m_name << "Сè��˵��" << endl;
	}
	~cat()//������ᱻ���ã���Ϊ�����������ȱ������������߲���cat������
	{
		if (m_name!=NULL)
		{
			cout << "cat������������" << endl;
			delete m_name;
			m_name = NULL;
		}
	}
	string *m_name;
	
};
void test01()
{
	animal* animal = new cat("tom");
	animal->speak();
	delete animal;
}
int main()
{
	test01();
	return 0;
}