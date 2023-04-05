#include "0x04_train.h"
#include "0x04_train.cpp"
int main()
{
    Train train;
    train.SetName("zambia railway");
    train.SetNumber(100);
    train.SetSource("lusaka");
    train.SetDestination("southern province");
    train.SetData(2023, 2, 4);
    train.SetCapacity(300);

    train.Display();
}