
#include "0x06_bank.h"

void Bank::deposit() // depositing an amount
{
        int damt1;
        std::cout << "\n Enter Deposit Amount = ";
        std::cin >> damt1;
        balance += damt1;
}
void Bank::withdraw() // withdrawing an amount
{
        int wamt1;
        std::cout << "\n Enter Withdraw Amount = ";
        std::cin >> wamt1;
        if (wamt1 > balance)
                std::cout << "\n Cannot Withdraw Amount";
        balance -= wamt1;
}
void Bank::display() // displaying the details
{
        std::cout << "\n ----------------------";
        std::cout << "\n Accout No. : " << accnumber;
        std::cout << "\n Name : " << name;
        std::cout << "\n Account Type : " << acctype;
        std::cout << "\n Balance : " << balance;
}
