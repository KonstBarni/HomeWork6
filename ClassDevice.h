 #pragma once
 #include "IclassElectrinics.h"

class Device : virtual public IElectronics          // базовый класс для девайсов
{   
protected:
    uint _batteryLife;
public:
    Device (uint batteryLife);
    virtual void ShowSpec() override;
};

class Player final : public Device                  //player
{
    std::string _name;
    uint _totalTracks;
public:
    Player(const std::string& name, uint batteryLife, uint totalTracks);
    void ShowSpec() override;
    void ShowTotalTrack();
    ~Player() = default;
};
