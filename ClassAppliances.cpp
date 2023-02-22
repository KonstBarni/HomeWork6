#include <iostream>
#include <string>
#include "ClassAppliances.h"
#include "IclassElectrinics.h"
using namespace std;


Appliances::Appliances(uint weight) : _weight(weight)
{
}
void Appliances::ShowSpec()
{
    cout << "Вес устройства:  " << _weight << endl;
}

            /*холодильник*/
Refrigirator::Refrigirator(const string& name, uint weight, bool frost):
_name(name), Appliances(weight), _frost(frost)
{
}
void Refrigirator::ShowSpec()
{
    if(_frost)
        cout << _name << "  Вес: " << _weight << "  " << "морозильная камера есть" << endl;
    else
        cout << _name << "  Вес: " << _weight << "  " << "без морозильной камеры" << endl;
}