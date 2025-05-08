#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "hamburger!\n";
    std::cout << "hamburger!\n";

    //int i = 0;
    //std::cin >> i;

    std::cout << "------------------" << std::endl;

    // Data Type Conversion
    // implicit conversion
    // target data type has the capacity (memory) to store the original value
    short numShort = 5;
    int numInt = numShort;

    std::cout << numInt << std::endl;

    // explicit conversion
    
    double numDbl = 150.42415;
    int numIntDbl = (int) numDbl; // traditional c++ way
    numIntDbl = static_cast<int>(numDbl); // modern c++ way

    std::cout << numIntDbl << std::endl;
}
