/*�����������++��
* 
*/
#include<iostream>
using namespace std;
class myint
{
	friend void test02();
	friend ostream& operator<<(ostream& cout, myint my);//��Ԫ��������
public:
	myint& operator++()//++���أ���++�����������Ҫ�����ô�ַ����Ȼֻ�Ǵ�ֵ�Ļ������������Ӳ���
		               //�������Ű�&��ɾ�����Կ������������Ķ�
	{
		a++;
		return *this;//��������
	}
	//����int��ִ�к���++����++���������int����ռλ��������ǰ�úͺ��ã���û��ʵ����;���൱��c++�����������cout����һ���淶д��
	myint operator++(int)//++���أ���++���������������������þͻᱨ��
	{
		
		//�ȼ�¼��ʱ�Ľ��
		myint temp = *this;
		//����
		a++;
		//����¼���������
		return temp;
		//ԭ��*this��Ѵ�������my��myint����ȫ����һ�ݸ�temp��
		// Ȼ�������a����++����Ȼ�������֮ǰ��temp�������һ��ֵ��
		// ����ʵ�ʵ�a�Ѿ���++�ˣ����Ե����ٴ����aʱ�ͻ��++����a�����
	}
	myint()
	{
		a = 20;
	}
private:
	int a;
};
ostream& operator<<(ostream& cout, myint my)//��������
{
	cout << my.a << endl;
	return cout;
}

void test01()
{
	myint my;
	cout << ++(++my) << endl;
	cout << my << endl;
}
void test02()
{
	myint my2;
	cout << my2++<< endl;
	cout << my2<<endl;
}
int main()
{
	test01();
	test02();
	return 0;
}