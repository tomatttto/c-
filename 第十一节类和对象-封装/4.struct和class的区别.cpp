//class默认权限为私有，struct类默认为公共类
#include<iostream>
using namespace std;
class C1
{
	int a;
};
struct C2
{
	int a;
};
int main()
{
	C1 c1_1;
	C2 c2_1;
	c1_1.a = 100;//默认私有权限不可访问
	c2_1.a = 100;//默认公共类权限可以访问
	return 0;
}