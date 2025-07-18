#include"经理.h"
using namespace std;
manager::manager(int id,string name,int did)
{
	m_id = id;
	m_name = name;
	m_did = did;
}
void manager::showinfo()
{
	cout << getname() << m_name << m_id << endl;
	cout << "传达任务" << endl;
}
string  manager::getname()
{
	return string("经理");
}