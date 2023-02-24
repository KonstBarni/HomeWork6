#include <iostream>
#include <string>
#include "Functions.h"
#include "IclassElectrinics.h"
#include "ClassDevice.h"
#include "ClassAppliances.h"
#include "ClassPortable.h"
using namespace std;

void shopElectronics(unsigned short int num)
{
    unsigned short int _num = --num;

    IElectronics *shop[6];
    shop[0] = new Player("Wolkman", 23, 155);
    shop[1] = new Photo("Canon", 10, 4);
    shop[2] = new Refrigirator("LG", 47, false);
    shop[3] = new Oven("Zanussi", 24, true);
    shop[4] = new Drill("Bosch", 3, 2, 2, 3000);
    shop[5] = new Vacuum("Tefal", 2, 2, 1, 500);

    if((_num >= 0 ) && (_num <=5))
        shop[_num]->ShowSpec();
    else
        cout<<"Вы ввели неверное число!"<<endl;   

    delete shop[0];
    delete shop[1];
    delete shop[2];
    delete shop[3];
    delete shop[4];
    delete shop[5];
}