#include <iostream>
using namespace std;

 int main()
 {
   //declaring variables
   int marks ;
   //ask the student for the obtained marks
   cout << "Marks obtained by student : " << endl ;
   cin >> marks ;
       //checks if the marks are greater thn 90
      if(marks >=90) {
        cout << "Grade is A+" ;
      }else {
          //checks if marks are between 90 nd 70
          if(marks >=70 && marks <90) {
           cout << "Grade is A";
          }else {
              //checks whether the marrks are between 70  50
             if(marks >=50 && marks <70) {
              cout << "Grade is B";
             }else{
              //prints when none of the above statement are true
              cout << "Grade is F";
          }
      }
  }

 return 0;
 }
