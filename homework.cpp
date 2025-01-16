/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*
*/
#include "listhelpers.hpp"

#include <cmath>
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

//Quadratic
void quadForm(int a, int b, int c)
{
    std::cout << "Pls enter 3 real numbers ";
    std::cin >> a >> b >> c >> std::endl;
    double sqrt(double number) 
    {
    // Checking for negative number input
    if (number < 0) 
    {
        std::cout << "Error: Negative input is not allowed." << std::endl;
        return -1; // Indicating error
    }
    
    double sqrted = sqrt(b*b-4*a*c);
    int num1 = (-b+sqrted)/(2*a);
    int num2 = (-b - sqrted)/(a*2);
    std::cout << "The answers are " << num1 << " and " << num2 << std::endl;
     //return sqrt(number); // Using the sqrt function
}
}


int main()
{
    // Complete your homework here

    //Compare:
    //Compare(3,4);

    //Quadratic
    quadForm(3,4,5);
    
    return 0;
}
