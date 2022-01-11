#include "Car.h"

int main()
{
    Car run99;
    run99.InitMembers("run99", 100);
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    return 0;
}

//컴파일 하는방법
//g++ Car.cpp RacingMain.cpp -o 이름
// ./이름