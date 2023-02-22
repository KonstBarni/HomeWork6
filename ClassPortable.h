#pragma once
#include "ClassDevice.h"
#include "ClassAppliances.h"
#include <string>

class PortableAppl : public Device, Appliances          //базовый класс для портативной техники
{
protected:
    uint _chargeTime;
public:
    PortableAppl(uint chargeTime, uint batteryLife, uint weight);
    void ShowSpec() override;
};