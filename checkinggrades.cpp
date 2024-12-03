#include <iostream>
using namespace std;

int main()
{
 char grade;
   cout << "Your grade is : " ;
   cin >> grade ;
 switch (grade)
 {
   case 'A' :
   cout << "Excellent ! \n" ;
   break;
   case 'B' :
   cout << "Well done \n" ;
   break;
   case 'C' :
   cout << "Splendid \n" ;
   break;
   case 'D' :
   cout << "better ! \n" ;
   break;
   case 'E' :
   cout << "Need more attention \n" ;
   break;
   default :
   cout << "Invalid grade \n" ;
 }
   return 0;
}
