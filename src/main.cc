#include<iostream>

int main()
{
    int numbers[6]{100, 87982, 3456, 465, 885, 86};

    std::cout << "Array memmory: " << numbers << std::endl;
    std::cout << "Array memmory: " << *numbers << std::endl;

    /*for(int i = 0; i < 6; i++)
    {
        std::cout << &numbers[i] << "\t";
    }*/

    /*for(int i = 0; i < 6; i++)
    {
        std::cout << numbers + i << "\t";
    }*/

    /*for(int n : numbers)
    {
        std::cout << &n  << "\t";
    }*/

    /*for(auto n : numbers)
    {
        std::cout << n  << "\t";
    }*/


    std::cout << std::endl;

    std::cin.get();
    
    return 0;
}