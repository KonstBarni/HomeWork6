#pragma once
#include <string> 
#include "IclassElectrinics.h"

class Appliances : virtual public IElectronics    //базовый класс для приборов
{
protected:
    uint _weight;
public:
    Appliances (uint weight);
    virtual void ShowSpec() override;
};

class Refrigirator final : public Appliances        //холодильник
{
    std::string _name;
    bool _frost;
public:
    Refrigirator(const std::string& name, uint weight, bool frost);
    void ShowSpec();
    ~Refrigirator() = default;
};
