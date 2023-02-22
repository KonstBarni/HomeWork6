#include <iostream>
#include <string>
 #include "IclassElectrinics.h"
#include "ClassDevice.h"
using namespace std;
            /*базовый класс для девайсов*/
Device::Device(uint batteryLife): _batteryLife (batteryLife)
{    
}
void Device::ShowSpec()
{
    cout << "Время работы: "<< _batteryLife << endl;
}
            /*класс Player*/
Player::Player(const string& name, uint batteryLife, uint totalTracks) : 
Device(batteryLife), _name(name), _totalTracks (totalTracks)
{        
}
void Player::ShowSpec()
{
    cout << _name << " Время работы: " << _batteryLife << "  " << "Вместимость треков: " << _totalTracks << endl;
}
void Player::ShowTotalTrack()
{
    std::cout<< "Вместимость треков: " << _totalTracks << std::endl;
}

