#include <cstdio>
#include <iostream>
using namespace std;

/*int main(){
  int i = 1;
  do {
    printf ("%d" , i);
  }while(i<1);
  return 0 ;
}

int main() {
  int no ;
  printf ("Enter number : ");
  scanf ("%d" , &no);

  int i=1;
  do {
    printf ("%d x %d = %d \n" , no , i , i*no) ;

    i=i+1 ;
  }while(i<=10);
  return 0 ;
}

int main() {
     int no ;
     char choice ;

     do {
        printf ("Enter the number : ");
        scanf (" %d" , &no);

       for (int i =1 ; i <=10 ; i++){
        printf ("%d x %d = %d \n" , no , i , i*no) ;
       }
       printf ("Do you want to continue ? (y/n)") ;
       scanf (" %c" , &choice) ;

     }while (choice == 'y' || choice =='Y');

  return 0 ;

}*/

int main () {
  int no ;
  int rem ;
  do {
    printf ("Enter the number : ");
    scanf ("%d" , &no);
    rem = no % 2 ;
    no = no / 2 ;
    printf ("%d" , rem);
  }while(no>=1);
  return 0 ;
  }
