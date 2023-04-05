#ifndef BANK_H
#define BANK_H
#include <iostream>
#include <string.h>

class Bank
{
        int accnumber;
        char name[100], acctype[100];
        float balance;

public:
        Bank(int acc_no, char *name, char *acc_type, float balance) // Parameterized Constructor
        {
                accnumber = acc_no;
                strcpy(name, name);
                strcpy(acctype, acc_type);
                balance = balance;
        }
        void deposit();
        void withdraw();
        void display();
};

#endif