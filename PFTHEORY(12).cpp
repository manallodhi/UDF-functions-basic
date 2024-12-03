#include <iostream>
// using this library to calculate sqrt and power
#include <math.h>
using namespace std ;

int main () {
    int number , choice ;
    //ask the user to enter the number
    cout << "Enter the number : " << endl ;
    cin >> number ;
    // give users choice to select 1-4 for performing specific
    cout << "Press '1' to calculate the square root of the number" << endl ;
    cout << "Press '2' to calculate the cube of the number" << endl ;
    cout << "Press '3' to print the number 50 times" << endl ;
    cout << "Press '4' to print the table of the number" << endl ;
    // asks the user for choice
    cout << "Enter your choice :" << endl ;
    cin >> choice ;

    //using switch case for calculate specific case
    switch (choice)
    {
      case 1 :
        cout << "The square root of " << number << "is  " << sqrt(number) << endl ;
        break ;
      case 2 :
        cout << "The cube of " << number << " is " << pow(number,3) << endl ;
        break ;
      case 3 :
        cout << "Print of " << number << " 50x" <<endl ;
          for (int i =1 ; i <=50 ; i++){
            cout << number << endl ;
          }
        break ;
      case 4 :
        cout << "Table of " << number << endl  ;
          for (int t =1 ; t<=10 ; t++){
            cout << number << " x " << t << number * t << endl ;
          }
        break ;
      default :
        cout << "Invalid choice " << endl ;

    }

    return 0 ;

}
