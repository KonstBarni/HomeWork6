#include <iostream>
#include <string>
#include "ClassDevice.h"
#include "ClassAppliances.h"
#include "ClassPortable.h"

using namespace std;
        /*базовый для портативных приборов*/
PortableAppl::PortableAppl(uint chargeTime): _chargeTime(chargeTime)
{
}
void PortableAppl::ShowSpec()
{
    cout << "Время заряда: " << _chargeTime << endl;
}

        /*Drill*/
Drill::Drill (const string& name, uint batteryLife, uint weight, uint chargeTime, uint maxRPM): 
_name(name), Device(batteryLife), Appliances(weight), PortableAppl(chargeTime), _maxRPM(maxRPM)
{
}
void Drill::ShowSpec()
{
    cout << "Название: "<< _name << "  " << "Вес: "<< _weight << "кг"<< " Время работы: ";
    cout << _batteryLife << "ч" << "  Время заряда: " << _chargeTime <<"ч";
    cout << "  Макс. оборотов в минуту: " << _maxRPM << endl;
}

        /*Пылесос*/
Vacuum::Vacuum (const string& name, uint batteryLife, uint weight, uint chargeTime, uint power): 
_name(name), Device(batteryLife), Appliances(weight), PortableAppl(chargeTime), _power(power)
{
}
void Vacuum::ShowSpec()
{
    cout << "Название: " << _name << "  " <<"Вес: "<< _weight << "кг"<< " Время работы: "; 
    cout << _batteryLife <<"ч"<< "  Время заряда: "<< _chargeTime <<"ч";
    cout << "  Мощьность: " << _power << "Вт" << endl;
}