#include <iostream>
#include <iomanip> // Library that provides manipulators for i/o formatting
using namespace std;

int main()
{
   //using setw function from <iomanip> library for setting the width between words

   cout << setw(2) << "NAME" << setw(14) << "ID" << setw(16) << "PROGRAM \n" ;
   cout << setw(2) << "Manal" << setw(14) << "30115" << setw(12) << "BSSE \n" ;
   cout << setw(2) << "Bakhtawar" << setw(10) << "20115" << setw(12) << "BSCS \n" ;
   cout << setw(2) << "Ayesha" << setw(13) << "20119" << setw(12) << "BSCS \n" ;

   return 0 ;
}
