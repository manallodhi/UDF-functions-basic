#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int num = 'a' ;
  int ans ;
  char multiply = '*' , euals_to = '=' ;

  for (int i=1 ; i<=10 ; i++ )
  {
      cout <<setw(3)<<num<<setw(3)<<multiply<<setw(3)<< i <<setw(3)<< euals_to <<setw(3)<< ans <<endl ;
  }
  return 0;
}
