//do while, 2 inputs, switch case
#include <iostream>
using namespace std;

int main()
{
  int a , b , ans ;
  char options  ;


     cout << "Two numbers :";
     cin >> a ,b ;
     cout << "operation";
     cin >> options ;

  do{

   switch (options){
     case '+' :
         cout << a+b ;
         break;
     case '-' :
         cout << a-b ;
         break;
     case '*' :
         cout << a*b ;
         break;
     case '/' :
         cout << a/b ;
     default :
         cout << "invalid input" ;
   }
  }
  return 0;
}


