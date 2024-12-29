/#include <iostream>
#include <math.h>
using namespace std ;

int main () {
   float a = 2.3 , b = 4.0 ;
   int c ;
   double solution ;

   cout << "Enter : Value of c = " ;
   cin >> c ;
   if (( b*b - 4*a*c )>0){
   solution = ( - b + sqrt( b*b - 4*a*c ) ) / ( pow(a/b,3) ) + ( pow(b/c,0.5) ) ;
   cout << "solution = " << solution;
   } else {
   cout << "Error : cannot calculate negative square root " ;
   }
   return 0;
}
#include <iostream>
using namespace std ;

int main (){
  int i = 5;
  while(i>=1){
    int j = i ;
    while(j>=1){
     cout << i ;
     j--;
    }
    cout << endl ;
   i--;
  }
  return 0 ;
}*/

#include <iostream>
using namespace std ;

int main ()
