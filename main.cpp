#include "Complex.h"
#include <iostream>

int main()
{
    Complex sum, dif, power, c1(5, 4), c2(4, 5);
    std::cout << "The complex numbers:\n";
    c1.print();
    c2.print();
    sum.operator=(c1.operator+(c2));
    dif = c1 - c2;
    std::cout << "The module of complex number: ";
    c1.operator~();
    std::cout << "\n";
    std::cout << "The sum of complex numbers: ";
    sum.print();
    std::cout << "The diffrence of complex numbers: ";
    dif.print();
}


