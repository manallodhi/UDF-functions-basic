#include <iostream>
#include <math.h>
using namespace std;
//Solve the following equation Use the precedence rules for the arithmetic operators’ usage.


int main()
{

    float eq; //Declaring float as integer

    int a = 2, b = 3, c= 1,d = 6, x = 4, y = 5;//initializing values

    eq = ( ((7 * 7 * b) * (x * y) + a) / (c - 0.8) + (2 * b * d) ) / (x + a) * (1.0 / y );//performing the equation


    cout<<"Answer is: "<< eq<<endl;//Printing answer

    return 0;
}
