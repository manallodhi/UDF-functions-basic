#include <iostream>
using namespace std;

int main ()
{
    //declaring variables
   char gender , city ;
   int age , salary ;

   //asking the user for input his/her gender , age ,city ,salary
   cout << "Enter your gender ;" << endl;
   cin >> gender ;//input gender
   cout << "Enter your age ;" << endl;
   cin >> age ;//input age
   cout << "Enter your city ;" << endl;
   cin >> city ;//input city
   cout << "Enter your salary ;" << endl;
   cin >> salary ;//input salary

   //using if else if else statements to check multiple conditions
   //using And OR operator for conditions
   if (gender == 'F' && age >25 && age <35 && city == 'K' || city == 'H' )
   {
     salary += 2000 ; // if the condition become true then 2000 added to the salary
     cout << "updated salary " << salary ;
     //using And OR operator for conditions
   } else if (gender == 'M' && age >25 && age <40 && city == 'G' || city == 'S' )
   {
     salary += 2500 ; //if the condition become true then 2500 added to the salary
     cout << "updated salary " << salary ;
   } else {
    //this statement prints when both the conditions becomes false
     cout << "Your current salary is << salary " ;
   }

  return 0;
}
