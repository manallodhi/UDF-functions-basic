#include <iostream>
using namespace std ;

int main(){
     for (int i=1 ; i <= 7 ; i=i+2){
        for (int k=7 ; k>=i ; k=k-2){
            cout << k ;
        }
        cout << endl ;
        for (int j=1 ; j<=i ; j=j+2){
            cout << "pak " ;
        }
        cout << endl ;
     }
    return 0 ;
}
