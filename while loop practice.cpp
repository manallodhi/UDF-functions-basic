#include <iostream>
#include <iomanip>
using namespace std ;

int main() {
 int n ;
    cout << "Enter any Positive number : " << endl ;
    cin >> n ;
    cout << endl ;

   if(n>0){
   cout << setw(10) << "NUMBER" << setw(10) << "SQUARE" << setw(10) << "CUBE" << endl ;

   for(int i = 1 ; i <=n ; i++){
      cout << setw(10) << i ;
      cout << setw(10) << i*i ;
      cout << setw(10) << i*i*i ;
      cout << endl ;
   }
   }else{
      cout << "The number you entered is negative " << endl ;
      cout << "Please enter positive number for generating square and cube table ! " ;
      cout << endl ;
      }

   return 0 ;
}
