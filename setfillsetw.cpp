#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  // using (#) for to fill a empty space of width 2

     cout << setfill('#') << setw(2) << 1 << '\n' ;
     cout << setfill('#') << setw(2) << 2 << '\n' ;
     cout << setfill('#') << setw(2) << 3 << '\n' ;

  return 0;
}
