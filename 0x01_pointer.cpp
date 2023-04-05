#include <iostream>

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int num1 = 12;
    int num2 = 52;

    std::cout << "Before Swapping: num1 is: " << num1 + " num2 is: " << num2 + "\n";

    swap(&num1, &num2);

    std::cout << "After  Swapping: num1 is: " << num1 + "  num2 is: " << num2 + "\n";

    return 0;
}