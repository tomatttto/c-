#pragma once//防止头文件重复包含
#include<iostream>
#include"worker.h"
#include"普通职工.h"
#include"经理.h"
#include"老板.h"
#include<fstream>
#include<time.h>
#define FILENAME "empfile.txt"
using namespace std;
class workermanager
{
public:
	int getempnum;//统计人数
	bool m_fileempty;//判断文件是否为空的标志
	workermanager();//构造函数声明
	void showmenu();//展示菜单
	void exitsystem();//退出菜单
	int m_empnum;//记录职工的人数
	worker** m_emparray;//职工数组指针，这里用的是双重指针
	//也就是说我通过这个双重指针，我可以直接从worker*基类指针所新建的员工(派生类例如老板，员工，经理)
	// 然后再通过*m_emparray这个指针把它放到m_emparray(这个数组放的是已有人员)这个数组里
	void addemp();//添加职工
	void save();//保存文件
	void showemp();//显示职工
	void delay(int seconds);//延时函数
	int get_empnum();//获取人员数量
	void delemp();//删除职工
	int isexit(int id); //判断是否有该职工，再进行删除
	void modemp();//修改职工函数
	void findemp();//查找职工
	void sortemp();//排序职工(选择排序算法)
	void cleanemp();//清空
	~workermanager();//析构函数声明
};
