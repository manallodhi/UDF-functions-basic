#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
  double num =1.123454;
  cout << setprecision(4) << num << '\n';
  cout << setprecision(9) << num << '\n';

  return 0;
}
