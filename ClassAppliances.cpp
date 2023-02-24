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
        cout << "Название: "<< _name << "  Вес: " << _weight <<"кг"<< "  " << "морозильная камера есть" << endl;
    else
        cout << "Название: "<< _name << "  Вес: " << _weight <<"кг"<< "  " << "без морозильной камеры" << endl;
}

            /*Духовой шкаф*/
Oven::Oven(const string& name, uint weight, bool grill):
_name(name), Appliances(weight), _grill(grill)
{
}
void Oven::ShowSpec()
{
    if(_grill)
        cout << "Название: "<< _name << "  Вес: " << _weight <<"кг"<< "  " << "гриль есть" << endl;
    else
        cout << "Название: "<< _name << "  Вес: " << _weight <<"кг"<< "  " << "без грияля" << endl;
}