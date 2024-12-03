#include <iostream>
using namespace std;

 int main()
 {
   //Declaring variables
   char letter ;

   //statement to ask the user to input letter
   cout << "Input the letter"<<endl;
   cin >> letter ;

   //check if the letter is m
   if(letter == 'm'){
     cout << "You are male";
    }
   else {
     //if letter != m this this statement run
     cout << "You are female";
   }
 return 0;
 }
