#include <iostream>
using namespace std;

int main(){

    float Crhours , GP , Sum = 0 , SGPA  , Total_Crhours=0 , Total_GP =0 ; //declaring variables

    for (int i =1 ; i<=5 ; i++) // using for loop for iteration
    {
      cout << "credit hours for course" << i << " : " ;//print
      cin >> Crhours  ; //input from user on run time for credit hours for each subject

      cout << "Grade point of the course" << i << " : "  ;//print
      cin >> GP ;  //input from user on run time for grade point of each subject

      cout << endl ;//change the line

      Total_Crhours += Crhours ; //sum of all credit hours of course
      Total_GP += GP ;//sum of all grade point of course
      Sum += Crhours * GP;  // Add the product of Cr hours and GP to Sum
    }
      cout << "Total Credit hours : " << Total_Crhours  << endl ;// print the total cr hours
      cout << "Total grade point: " << Total_GP << endl ;// print the total GP
      //print the sum of the product of GP and CR hours
      cout << "The sum of Credit hours * grade point of all 5 courses : " << Sum << endl ;

      SGPA = Sum / Total_Crhours ; //formula for calculating SGPA
      cout << "SGPA : " << SGPA ; //print the calculated SGPA

    return 0;
}




