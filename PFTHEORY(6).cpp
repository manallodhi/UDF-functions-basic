#include <iostream>
using namespace std;

 int main()
 {
   int a , b, c ; //Declaring variables

   cout << "Input three values"<<endl; //statement to ask the user
   //for three valves input

   cin >> a >> b >> c ;
   //using nested switch statement to see whether all three values are equal or not
   if(a==b){
    if(b==c){
     cout << "All values are equal";//if all values are equals then this statement appears on the screen
    }
   }
   else {
     cout << "They are not equal";//if not equal then this statement appears
   }
 return 0;
 }
