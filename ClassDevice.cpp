#include <iostream>
#include <string>
 #include "IclassElectrinics.h"
#include "ClassDevice.h"

using namespace std;

Device::Device(int batteryLife): _batteryLife (batteryLife)
{    
}

void Device::ShowSpec()
{
    cout << "Время работы: "<< _batteryLife << endl;
}

