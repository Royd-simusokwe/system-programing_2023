#include "0x04_train.h" std::

Train::Train()
{
    name = "N/A";
    number = 0;
    source = "Unknown";
    destination = "Unknown";
    capacity = 0;
    date.tm_year = 0;
    date.tm_mon = 0;
    date.tm_mday = 1;
}

void Train::SetData(int year, int month, int day)
{
    if (year > 100)
    {
        date.tm_year = year - 1900;
    }
    else
    {
        date.tm_year = 100 + year;
    }
    if (month >= 1 && month <= 12)
    {
        date.tm_mon = month - 1;
    }
    else
    {
        date.tm_mon = 0;
    }
    if (day >= 1 && day <= 31)
    {
        date.tm_mday = day;
    }
    else
    {
        date.tm_mday = 1;
    }
}

void Train::Display()
{
    char buf[80];
    std::cout << "Train:        " << name << std::endl;
    std::cout << "Train number: "<< number << std::endl;
    std::cout << "From:         " << source << std::endl;
    std::cout << "To:           " << destination << std::endl;
    strftime(buf, 80, "%D", &date);
    std::cout << "Journay Date: " << buf << std::endl;
    std::cout << "Capacity:     " << capacity << std::endl
              << std::endl;
}
