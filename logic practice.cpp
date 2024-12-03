#include <iostream>
using namespace std;

 int main() {

    //printing diamond
  int n = 5 ;
    cout << "PRINTING DIAMOND " << endl ;
    for (int i = 1 ; i <=5 ; i++){
        for (int j = 1 ; j <= n-i ; j++){
            cout << " " ;
        }
        for (int j = 1 ; j <= i ; j++){
            cout << "*" ;
        }
        for (int j = i - 1 ; j >=1 ; j--){
            cout << "*" ;
        }
      cout << endl ;
    }
    for (int i = 4 ; i >=1 ; i--){
        for (int j = 1 ; j <= n-i ; j++){
            cout << " " ;
        }
        for (int j = 1 ; j <= i ; j++){
            cout << "*" ;
        }
        for (int j = i - 1 ; j >=1 ; j--){
            cout << "*" ;
        }
      cout << endl ;
    }

     cout<< endl ;

    // printing snake pattern

      cout << "PRINTING SNAKE PATTERN " << endl ;
  int count = 1 ;
      for (int i = 1 ; i <= n ; i ++){
        if (i%2 != 0){
            for (int j = 1 ; j <= n ; j ++){
                cout << count ++ << " " ;
            }
            } else {
                int end = count + n - 1 ;
                   for (int j = end ; j >=count ; j--){
                    cout << j << " ";
                   }
                    count = end + 1;
            }
            cout << endl ;

      }
           cout<< endl ;



    //.pattern

          cout << " HALF PYRAMID " << endl ;
         for (int i = 1 ; i <= n ; i++){
            for (int j = 1 ; j <= n-i ; j++){
                cout << " ";
            }
            for (int j = 1 ; j <= i ; j++){
                cout << "*" ;
            }
            for (int j = i-1 ; j >=1 ; j-- ){
                cout << "*" ;
            }

        cout << endl  ;
         }
         cout<< endl ;

       cout << "INVERTED PYRAMID " << endl ;
     for (int i = n ; i >= 1 ; i--){
        for (int j = 1 ; j <= n - i ; j++){
            cout << " " ;
        }
        for (int j = 1 ; j <= 2*i-1 ; j++){
            cout << "*" ;
        }
        cout << endl;
     }
     cout<< endl ;


           // different logic

       cout << "LOGIC # 2 " << endl<< endl ;
       cout << "HALF PYRAMID" << endl ;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= n-i ; j++){
            cout << " " ;
        }
        for (int j = 1 ; j <= 2*i-1 ; j++){
            cout << "*" ;
        }
        cout << endl  ;
    }
      cout<< endl ;
         // inverted pyramid

       cout << "INVERTED PYRAMID" << endl ;
     for (int i = n ; i >= 1 ; i--){
        for (int j = 1 ; j <= n - i ; j++){
            cout << " " ;
        }
        for (int j = 1 ; j <= 2*i-1 ; j++){
            cout << "*" ;
        }
        cout << endl ;
     }
      cout<< endl ;
        //SQUARE
    cout << "PRINTING SQUARE" << endl ;
    for(int i = 1 ; i <=n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cout << "*" ;
        }
       // for(int j = 1 ; j <= i ; j++ ){
         //   cout << "*" ;
        //}
    cout << endl ;
    }
   cout<< endl ;

     cout << "REVERSE NUMBERS TRIANGLE " << endl ;

     for(int i = 5 ; i>= 1 ; i--){
        for(int j = i ; j>= 1 ; j-- ){
            cout << j ; // prints number in reverse according to the value of i
        }
        cout << endl ;
     }

   return 0 ;
  }
