#include"jisuan.h"
void inyuan(yuan& y, point& p)//�жϵ��Բ�Ĺ�ϵ
{
	//��������֮������ƽ��
	int dis = (y.getCenter().getX() - p.getX()) * (y.getCenter().getX() - p.getX())
		+ (y.getCenter().getY() - p.getY()) * (y.getCenter().getY() - p.getY());
	int rdis = y.getR() * y.getR();
	if (dis == rdis)
	{
		cout << "����Բ��" << endl;
	}
	else if (dis > rdis)
	{
		cout << "����Բ��" << endl;
	}
	else if (dis < rdis)
	{
		cout << "����Բ��" << endl;
	}
}