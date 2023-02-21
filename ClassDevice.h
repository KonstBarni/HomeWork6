 #pragma once
 #include "IclassElectrinics.h"

class Device : public IElectronics
{   
protected:

    int _batteryLife;

public:
    Device (int batteryLife);

    virtual void ShowSpec() override;
   
    
    //~Device();
};
