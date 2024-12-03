#include <iostream>
#include <string>
using namespace std;

int main(){
   string Password = "software" ;
   bool correct_pass = false ;
   for (int i = 1 ; i <=3 ; i++){
     cout << "Enter the Password : " ;
     cin >> Password ;
      if (Password == "software"){
        cout << "ACCESS GRANTED" ;
        correct_pass = true ;
        break;
      }else{
          if (i<3){
        cout << "INCORRECT PASSWORD , TRY AGAIN" ;
        cout << endl ;
        }
      }
   }
   if(correct_pass == false){
   cout << "ACCESS DENIED" ;
   }
return 0 ;
}
