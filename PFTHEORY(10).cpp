#include <iostream>
#include <math.h>
using namespace std;

int main ()
{ //declaring variables
  int a,b,c ;
  double root1 , root2 ;
   // ask the user to enter the values for a ,b , c
   cout << "Enter the value of a : " << endl;
   cin >> a ;
   cout << "Enter the value of b ;" << endl;
   cin >> b ;
   cout << "Enter the value of c :" << endl;
   cin >> c ;

   //formula to find the discriminant
   double discriminant = b*b -4*a*c ;
  //using if else if statements
  if (discriminant>0) {
    root1 = (-b + sqrt(discriminant))/(2*a) ;
    root2 = (-b - sqrt(discriminant))/(2*a) ;
    cout << "The roots are real and unequal" <<endl ;
    cout << "root1 = " << root1 <<endl ;
    cout << "root2 = " << root2 <<endl ;
  }else if (discriminant>0){
    root1 = (-b + sqrt(discriminant))/(2*a) ;
    root2 = (-b - sqrt(discriminant))/(2*a) ;
    cout << "The roots are imaginary" <<endl ;
    cout << "root1 = " << root1 <<endl;
    cout << "root2 = " << root2 <<endl;
  }else {
    root1=root2 =-b/(2*a);
    cout << "The roots are real" <<endl ;
    cout << "root1 = " << root1 <<endl ;
    cout << "root2 = " << root2 <<endl ;
  }
  return 0;
}
