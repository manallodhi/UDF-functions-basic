#include <iostream>
using namespace std ;

int main() {
    int num1 , num2 ;
   int operators ;
   char choice ;

   cout << "SIMPLE CALCULATOR\n\n";
  do{
    cout << "1. ADDITION (+) " << endl ;
    cout << "2. SUBTRACTION (-) " << endl ;
    cout << "3. MULTIPLICATION (*) " << endl ;
    cout << "4. DIVISION (/) " << endl ;
    cout << "5. EXIT (X) \n" << endl ;

    cout << "ENTER THE NUMBER OF THE OPERATOR : " ;
    cin >> operators ;
    cout << endl ;

    switch (operators) {
    case 1 :
       cout << "Enter two numbers for the calculation : " << endl ;
       cin >> num1 >> num2 ;
       cout << num1 << " + " << num2 << " = " << num1+num2 << endl ;
       break;
    case 2 :
       cout << "Enter two numbers for the calculation : " << endl ;
       cin >> num1 >> num2 ;
       cout << num1 << " - " << num2 << " = " << num1-num2 << endl ;
       break;
    case 3 :
       cout << "Enter two numbers for the calculation : " << endl ;
       cin >> num1 >> num2 ;
       cout << num1 << " * " << num2 << " = " << num1*num2 << endl ;
       break;
    case 4 :
       cout << "Enter two numbers for the calculation : " << endl ;
       cin >> num1 >> num2 ;
       if(num2!=0){
       cout << num1 << " / " << num2 << " = " << num1/num2 << endl ;
       }else{
       cout << "Division by zero is not possible\n" << endl ;
       }
       break;
    case 5 :
        choice = 'n' ;
        break;
    default :
       cout << "Invalid operator " << endl ;
       break;
    }
    if(operators!=5){
       cout << "Do you want to perform another calculation : (y/n) " ;
       cin >> choice;
       cout << endl ;
    }
  }while(choice == 'y' || choice == 'Y');
    cout << "Exiting the program \n" ;
   return 0 ;
}
