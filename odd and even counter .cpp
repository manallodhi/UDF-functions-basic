#include <iostream>
using namespace std ;

int main() {
 int number ;
 int oddcount , evencount ;

 while(true){
    cout << "Enter the number (Enter 0 to stop) \n";
    cin >> number ;

 if (number == 0){
    break;
 }
 if (number%2==0){
    evencount++;
 }else{
    oddcount++;
 }
 }
 cout << "total even numbers : " << evencount << endl ;
 cout << "total odd number : " << oddcount <<"\n";
   return 0 ;
}
