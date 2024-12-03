#include <iostream>
using namespace std ;

int main ()
{
    //declaring variables
    int a =10 ;
    int b = 20 ;

    //condition showing use of && operator
    //both the condition is to be true to print statement
    if (a > 0 && b > 0){
        cout << "Both a and b are positive numbers " << endl ;
    }
    //condition showing use of || operator
    //one of the condition is to be true to print statement
    if (a>10 || b>10){
        cout <<"Either a is greater than 10 or b is greater than 10 " << endl ;
    }
  return 0 ;
}
