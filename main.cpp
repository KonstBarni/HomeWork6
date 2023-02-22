#include <iostream>
#include <string>
#include "IclassElectrinics.h"
#include "ClassDevice.h"
#include "ClassAppliances.h"
#include "ClassPortable.h"

using namespace std;

int main()
{

    IElectronics *play = new Player("Wolkman", 23, 155);
    play->ShowSpec();

    IElectronics *rfg = new Refrigirator("LG", 47, false);
    rfg->ShowSpec();

    delete rfg;
    delete play;
    //delete dev;
    return 0;
}