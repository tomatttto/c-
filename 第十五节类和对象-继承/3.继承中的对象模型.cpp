#include<iostream>
using namespace std;
class Base
{
	
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son:public Base
{
public:
	int m_d;
};
void test01()
{
	son s1;
	cout << "son��̳��길��Ĵ�СΪ" << sizeof(son) << endl;//ֵΪ16���ĸ�int��ÿ���ĸ��ֽڣ�ע����Ȼprivate�����ã����Ǽ̳�ʱ����Ȼ�ᱻ�̳й���
}
int main()
{
	test01();
	return 0;
}
/*��β鿴ĳ������ڴ沼�֣�
* �� Developer Command Prompt for VS 2022 Preview(������Ա������ʾ)
* ���Ƚ����cpp�������̷����磬����ļ�����D�̣����롰D:�����س�
* ���Ž����ļ�Ŀ¼���Ƶ���������س�
* ��������cl /d1 reportSingleClassLayoutson(�����son�Ƕ�Ӧ��鿴����)
* ���Բ鿴�����һЩ��Ϣ
*/