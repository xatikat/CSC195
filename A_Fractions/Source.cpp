#include "Fraction.h"
#include <iostream>

using namespace mathlib;

int main()
{
    Fraction fraction1{ 15, 5 };
    std::cout << fraction1;
    std::cout << endl;

    Fraction fraction2{ 15, 6 };
    fraction2.simplify();
    std::cout << fraction2;
    std::cout << endl;

    std::cout << fraction1;
    std::cout << " == ";
    std::cout << fraction2;
    std::cout << " result: " << (fraction1 == fraction2) << std::endl;

    std::cout << fraction1;
    std::cout << " > ";
    std::cout << fraction2;
    std::cout << " result: " << (fraction1 > fraction2) << std::endl;

    std::cout << fraction1;
    std::cout << " + ";
    std::cout << fraction2;
    std::cout << " result: ";
    std::cout << (fraction1 + fraction2);
    std::cout << std::endl;

    std::cout << fraction1;
    std::cout << " * ";
    std::cout << fraction2;
    std::cout << " result: ";
    std::cout << (fraction1 * fraction2);
    std::cout << std::endl;

    Fraction fraction3{ 0,0 };
    std::cout << "input fraction: \n";
    std::cin >> fraction3;
    std::cout << fraction3;
    std::cout << endl;
    std::cout << fraction3.toDouble() << std::endl;
}