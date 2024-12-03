/*#include <iostream>
#include <iomanip>
using namespace std ;

int main() {
 int n ;
    cout << "Enter any Positive number : " << endl ;
    cin >> n ;
 while(n<0) {
   cout << "Enter any Positive number : " << endl ;
   cin >> n ;
   }
   return 0 ;
}*/
#include <iostream>
using namespace std;

int main(){
  int i = 5 ;
 while(i >= 1){
   int j = i ;
    while(j >=1){
     cout << i ;
    j--;
    }
  cout<<endl;
  i--;
  }
return 0 ;
}
