#include <iostream>
using namespace std ;

int main (){
    //declaring variables
  int ID , Password ;
  //ask to user to enter his id
    cout << "Enter your ID : " << endl ;
    cin >> ID ;
    //using nested switch case for entering correct id with correct pass
    switch (ID) {
        //2 ID's as cases , so when user anyone of it then it
        //ask the user to enter password
      case 30115 :
      case 29580 :
        cout << "Enter your Password : " << endl ;
        cin >> Password ;//input on runtime
          switch (Password) {
              //if the password matches the Id then
              // the welcome message shows .
             case 61703032 :
                cout << "Welcome ! Manal " << endl ;
                break ;
             case 12345678 :
                cout << "Welcome ! Namra " << endl ;
                break ;
             default :
                 //prints when password dosent matches with the ID
                cout << "Incorrect Password " << endl ;
         }
         break;
      default :
          //prints when you enter the wrong ID
          cout << "Incorrect ID , Try again ! " << endl ;
    }
  return 0 ;
}
