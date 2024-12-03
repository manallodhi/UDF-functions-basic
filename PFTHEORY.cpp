#include <iostream>
using namespace std;

int main()
{
   int num = 5 ; //initializing number to 5

   cout << ++num <<endl ; //pre-increment , prints 6
   cout << num++ <<endl  ; //post increment , prints previous value of num i.e:6
   cout << num <<endl ; //Now the valve increase by 1 i.e:7
   cout << ++num <<endl ; //pre-increament ,increase the value by 1, i.e:8
   cout << num <<endl ; //prints the previously increased value i.e:8
   cout << num + 2 <<endl ;//adds 2 in the previous value ,i.e:8+2=10

   return 0;
}
