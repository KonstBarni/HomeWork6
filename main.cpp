#include <iostream>
#include <string>
#include "Functions.h"
using namespace std;

int main()
{
    unsigned short int choise;

    while(true)
    {
        cout << "\n" << "Для выхода из программы введите 0" << endl;
        cout << "Выберите товар: 1- плеер; 2- фотоаппарат; ";
        cout << "3- холодильник; 4- духовой шкаф; 5- дрель; 6- пылесос" << endl;
        cin >> choise;

        if (cin.fail())
        {
            cin.clear();
            cout<< "Вы ввели не число!" << endl;
            break;    
        }
        else if (choise == 0)
            return 0;
        else
            shopElectronics(choise);
    }
    return 0;
}