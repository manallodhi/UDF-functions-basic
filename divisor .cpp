#include <iostream>
using namespace std ;

int main() {
   int n;

   cout << "Enter any positive number : " ;
   cin >> n ;
   cout << "DIVISORS OF " << n << endl ;

   for (int i = 1 ; i <= n ; i++){
    if(n%i==0){
       cout << i << " ";
       }
   }
   return 0 ;
}
