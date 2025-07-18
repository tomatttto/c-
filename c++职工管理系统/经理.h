#pragma once
#include"worker.h"
using namespace std;
class manager :public worker
{
public:
	manager(int id, string name, int did);
	void showinfo();
	string getname();
};