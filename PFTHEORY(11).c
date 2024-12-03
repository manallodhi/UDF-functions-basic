#include <iostream>
using namespace std ;

int main (){
  int ID , Password ;
    cout << "Enter your ID : " << endl ;
    cin >> ID ;

    switch (ID) {
      case 30115 :
      case 29580 :
        cout << "Enter your Password : " << endl ;
        cin >> Password ;
        break;
          switch (Password) {
             case 61703032 :
                cout << "Welcome ! Manal " << endl ;
                break ;
             case 12345678 :
                cout << "Welcome ! Namra " << endl ;
                break ;
             default :
                cout << "Incorrect Password " << endl ;
         }
      default :
          cout << "Incorrect ID , Try again ! " << endl ;
    }
  return 0 ;
}
