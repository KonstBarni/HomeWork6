#pragma once
#include "ClassDevice.h"
#include "ClassAppliances.h"
#include <string>

class PortableAppl : virtual public IElectronics  //базовый класс для портативной техники
{
protected:
    uint _chargeTime;
public:
    PortableAppl(uint chargeTime);
    void ShowSpec() override;
};

class Drill final : public Device, Appliances, PortableAppl                  //Drill
{
    std::string _name;
    uint _maxRPM;
public:
    Drill(const std::string& name, uint batteryLife, uint chargeTime, uint weight, uint maxRPM);
    void ShowSpec() override;
    ~Drill() = default;
};

class Vacuum final : public Device, Appliances, PortableAppl                  //Пылесос
{
    std::string _name;
    uint _power;
public:
    Vacuum(const std::string& name, uint batteryLife, uint chargeTime, uint weight, uint power);
    void ShowSpec() override;
    ~Vacuum() = default;
};