#include<iostream>
using namespace std;
class animal//动物类
{
public:
    virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};
void test01()
{
	cout << sizeof(animal) << endl;//没加virtual前是1，加了之后是8；是因为变成了一个指针
//具体的讲解可以看B站的https://www.bilibili.com/video/BV1et411b73Z/?p=136&spm_id_from=333.1007.top_right_bar_window_history.content.click&vd_source=fe00b1b34b028e55b2b442a8e33571af
}
int main()
{
	test01();
	return 0;
}