#ifndef TRAIN_H
#define TRAIN_H
#include <iostream>

class Train
{
public:
    Train();
    void SetName(std::string tName) { name = tName; }
    void SetNumber(int tNumber) { number = tNumber; }
    void SetSource(std::string tSrc) { source = tSrc; }
    void SetDestination(std::string tDestination) { destination = tDestination; }
    void SetData(int year, int month, int day);
    void SetCapacity(int c) { capacity = c; }
    void Display();

private:
    std::string name;
    int number;
    std::string source;
    std::string destination;
    tm date;
    int capacity;
};

#endif
