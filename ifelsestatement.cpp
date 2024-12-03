#include <iostream>
using namespace std;

int main ()
{
  int x = 5 ;
  int b ;
  cout << "Enter your number " << endl ;
  cin >> b ;
  if (b == x)
  {
  cout << "Your guess " << b << " is correct " << endl;
  }
  else
  {
  cout << "TRY AGAIN" ;
  }
 return 0 ;
}
