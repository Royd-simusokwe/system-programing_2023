#include "0x06_bank.h"
#include "0x06_bank.cpp"

int main()
{
        for (int i = 0; i <= 10; ++i)
        {

                int acc_number;
                char name[100], acc_type[100];
                float balance;
                std::cout << "\n Enter Details: \n";
                std::cout << "-----------------------";
                std::cout << "\n Accout No. ";
                std::cin >> acc_number;
                std::cout << "\n Name : ";
                std::cin >> name;
                std::cout << "\n Account Type : ";
                std::cin >> acc_type;
                std::cout << "\n Balance : ";
                std::cin >> balance;

                Bank b1(acc_number, name, acc_type, balance); // object is created
                b1.deposit();                                 //
                b1.withdraw();                                // calling member functions
                b1.display();                                 //
                return 0;
        }
}
