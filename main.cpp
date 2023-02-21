#include <iostream>
#include <string>
#include "ClassDevice.h"
#include "ClassPlayer.h"

using namespace std;

int main()
{
    Device dev(5);
    dev.ShowSpec();
    IElectronics *play = new Player(15, 155);
    

    play->ShowSpec();

    delete play;
    //delete dev;
    return 0;
}