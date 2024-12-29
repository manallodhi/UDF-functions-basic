g#include <iostream>
#include <iomanip>
using namespace std ;

int main(){
   int n ;
   cout << "enter any positive number" << endl ;
   cin >> n ;
   cout << endl ;

   if (n>0){
     cout << setw(5) << "number"  << setw(10) << "square"  << setw(10) << "cube" ;
      for(int i = 1 ; i <=n ; i++){
        cout << setw(5) << i ;
        cout << setw(10) << i*i ;
        cout << setw(10) << i*i*i ;
      }
   }else {
     cout << " enter positive number !" ;
     }
   return 0 ;
}
