#include<iostream>
using namespace std;
class animal//������
{
public:
    virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};
void test01()
{
	cout << sizeof(animal) << endl;//û��virtualǰ��1������֮����8������Ϊ�����һ��ָ��
//����Ľ�����Կ�Bվ��https://www.bilibili.com/video/BV1et411b73Z/?p=136&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=fe00b1b34b028e55b2b442a8e33571af
}
int main()
{
	test01();
	return 0;
}