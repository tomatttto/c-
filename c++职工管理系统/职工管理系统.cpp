#include <iostream>
#include "workermanager.h"
#include"��ְͨ��.h"
#include"�ϰ�.h"
#include"����.h"
using namespace std;

int main()
{
    int choice;
    workermanager wm1;
    //worker* worker = new employee(1, "����", 1);
    //worker->showinfo();
    //worker = new boss(2, "����", 2);
    //worker->showinfo();//���Դ���
    //worker = new manager(3,"����",3);
    //worker->showinfo();
    while (true)
    {
        wm1.showmenu();
        cout << "����������ѡ��" << endl;
        cin >> choice;
        switch (choice)
        {
        case 0:
            wm1.exitsystem();
            break;
        case 1:
            wm1.addemp();
            break;
        case 2:
            wm1.showemp();
            break;
        case 3:
            wm1.delemp();
            break;
        case 4:
            wm1.modemp();
            break;
        case 5:
            wm1.findemp();
            break;
        case 6:
            wm1.sortemp();
            break;
        case 7:
            wm1.cleanemp();
            break;
        default:
            system("cls");
            break;
        }
    }
    system("pause");
    return 0;
}