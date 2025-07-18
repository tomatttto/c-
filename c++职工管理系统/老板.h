#pragma once
#include"worker.h"
#include<iostream>
using namespace std;
class boss :public worker
{
public:
	boss(int id, string name, int did);
	void showinfo();
	string getname();
};