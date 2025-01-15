/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector


//Compare 
void Compare(int x, int y)
{
    if (x < y)
    {
        std::cout << x << " is less than " << y << std::endl;
    }
    else
    {
        std::cout << x << " is greater than " << y << std::endl;
    }
}

//Polynomial
void quadForm(int a, int b, int c)
{

}


int main()
{
    // Complete your homework here
    Compare(3,4);
    
    return 0;
}
