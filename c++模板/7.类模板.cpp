//����һ��ͨ���࣬���г�Ա�������Ϳ��Բ����嶨�ƣ���һ���������������
#include<iostream>
using namespace std;
template <class nametype,class agetype>//�ṩ����ģ������
class person//��ģ��
{
public:
	person(nametype name, agetype age)
	{
		this->name = name;
		this->age = age;
	}
	void show()
	{
		cout << "����Ϊ" << name << "����Ϊ" << age << endl;
	}
	nametype name;//�õ���ģ���������ģ������
	agetype age;
};
void test01()
{
	person<string, int> p1("tom", 19);//string��int�ֱ��Ƕ���nametype��agetype������ģ��������͵�ȷ����
	p1.show();
}
int main()
{
	test01();
	return 0;
}