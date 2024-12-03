#include <cstdio>

int main ()
{
  char day;
  scanf ("%c" , &day);

  switch (day){
  case 'A' :
  printf ("the entered number %c is vowel :");
  break;
   case 'a' :
  printf ("the entered number %c is vowel :");
  break;
  default:
  printf ("The letter you entered is some other alphabet");
  }
  return 0;
}
