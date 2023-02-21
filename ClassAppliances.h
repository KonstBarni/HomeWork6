#pragma once 
#include "IclassElectrinics.h"

class Appliances : public IElectronics
{
public:
    Appliances (int weight);
    void ShowSpec() override;
	
protected:
    int _weight;
};
