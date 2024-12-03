#include <iostream>
#include <iomanip> // Library that provides manipulators
using namespace std;

int main ()
{
   cout << "Setting the decimal precision" << endl << endl ;
   double num =1.123454;
   cout << setprecision(4) << num << '\n';
   cout << setprecision(9) << num << '\n';
   cout << endl << endl ;

   cout << "Using setw for setting width" << endl << endl ;
   cout << setw(2) << "NAME" << setw(12) << "ID" << setw(16) << "PROGRAM \n" ;
   cout << setw(2) << "Manal" << setw(14) << "30115" << setw(12) << "BSSE \n" ;
   cout << setw(2) << "Bakhtawar" << setw(10) << "20115" << setw(12) << "BSCS \n" ;
   cout << setw(2) << "Ayesha" << setw(13) << "20119" << setw(14) << "BSCS \n\n\n" ;

   cout << "Using setfill to set the new fill character" << endl << endl ;
   cout << setfill('#') << setw(2) << 1 << '\n' ;
   cout << setfill('#') << setw(2) << 2 << '\n' ;
   cout << setfill('#') << setw(2) << 3 << '\n' ;


  return 0;
}
