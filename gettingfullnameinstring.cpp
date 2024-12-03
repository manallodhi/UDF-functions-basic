#include <cstdio>

int main()
{
    int n1 , n2 , n3 ;
    printf ("the three integer input from the user : \n"  );
    scanf ("%d %d %d" , &n1 , &n2 , &n3 );

      if (n1 == n2) {
        if (n2 == n3){
          printf ("All three numbers are equal ");
        }
      }
      else {
          printf ("Try enter some other numbers ");
      }
    return 0 ;
}
