// CIS108_lab6.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Factorial problem

#include <iostream>
#include<cmath>
using namespace std;


int main()
{
    int number = 0;
    int counter = 1;
    int product = 1;

    cout << "Enter integer for factorial. Range must be between 2 and 25: ";
    cin >> number;
    
    if (number <= 25 && number >= 2)
    {
        while (counter <= number)
        {
            product = counter * product;
            counter++;
            /*cout << "product is: " << product << endl;*/
        }

        cout << "The factorial for the number: " << number << " is: " << product << endl;
    }
    else
    {
        cout << "number not within range. " << endl;
    }
}


