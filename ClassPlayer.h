#pragma once
#include "ClassDevice.h"


class Player : public Device
{
    int _totalTracks;
    int _batteryLife;

public:
    Player(int _batteryLife, int totalTracks);

    void ShowSpec() override;
    
    void ShowTotalTrack();
   
    ~Player() = default;
};