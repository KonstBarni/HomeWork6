#include <iostream>
#include <string>
#include "ClassDevice.h"
#include "ClassAppliances.h"
#include "ClassPortable.h"

using namespace std;

PortableAppl::PortableAppl(uint chargeTime, uint batteryLife, uint weight):
_chargeTime(chargeTime), Device(batteryLife), Appliances(weight)
{
}
void PortableAppl::ShowSpec()
{
    cout << _chargeTime << "Время работы: " << _batteryLife << "Вес устройства:  " << _weight << endl;
}