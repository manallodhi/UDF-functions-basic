
#include <iostream>
using namespace std ;

int main () {
     //declaring variables
     int school , department ;
    //give options to user to select school of his choice
    cout << "select A SCHOOL " << endl ;
    cout << "1. School of CS" << endl ;
    cout << "2. School of Business" << endl ;
    cout << "3. School of Engineering" << endl ;

    cin >> school ;

    switch (school){
       //this choices appears when user input 1
       case 1:
         cout << "School of CS " << endl ;
         cout << "Select a department " << endl ;
         cout << "1. Department of Informatics" << endl ;
         cout << "2. School of Machine learning" << endl ;

         cin >> department ;
             switch (department){
                case 1:
                  cout << "Department of Informatics " << endl ;
                  break ;
                case 2:
                  cout << "Department of Machine learning " << endl;
                  break ;
                default :
                  cout << "Invalid department selected " << endl ;
             }
             break;
        //this choices appears when user input 1
       case 2:
         cout << "School of Business " << endl ;
         cout << "Select a department " << endl ;
         cout << "1. Department of Commerce" << endl ;
         cout << "2. School of Purchasing " << endl ;

         cin >> department ;
             switch (department){
                case 1:
                  cout << "Department of Commerce " << endl ;
                  break ;
                case 2:
                  cout << "Department of  Purchasing " << endl;
                  break ;
                default :
                  cout << "Invalid department selected " << endl ;
             }
             break ;
        //this choices appears when user input 1
       case 3:
         cout << "School of Engineering " << endl ;
         cout << "Select a department " << endl ;
         cout << "1. Department of Electrical engineering" << endl ;
         cout << "2. School of Mechanical engineering " << endl ;

         cin >> department ;
             switch (department){
                case 1:
                  cout << "Department of Electrical engineering " << endl ;
                  break ;
                case 2:
                  cout << "Department of Mechanical engineering  " << endl;
                  break ;
                default :
                  cout << "Invalid department selected " << endl ;
             }
            break ;
       default :
          cout << "Invalid school selected " << endl ;
    }

   return 0 ;

}
