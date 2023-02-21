#include <iostream>
#include <string>
#include "ClassDevice.h"
#include "ClassPlayer.h"
using namespace std;

Player::Player(int batteryLife, int totalTracks) : Device(_batteryLife) , _totalTracks (totalTracks)
{        
}

void Player::ShowSpec()
{
    std::cout << "Время работы: " << _batteryLife << "\t" << "Вместимость треков: " << _totalTracks << std::endl;
}
void Player::ShowTotalTrack()
{
    std::cout<< "Вместимость треков: " << _totalTracks << std::endl;
}
