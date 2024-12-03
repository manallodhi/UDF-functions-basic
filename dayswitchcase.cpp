#include <cstdio>

int main()
{
   int day ;
   switch (day)
{
   case 1 ;
      printf ("Monday");
       break ;
   case 2 :
      printf ("Tuesday");
       break ;
   case 3 :
      printf ("Wednesday");
       break ;
   case 4 :
      printf ("Thursday");
       break ;
   case 5 :
      printf ("Friday");
       break ;
   case 6 :
      printf ("Saturday");
       break ;
   default
      printf ("Sunday");
   }
   printf ("The day today is %d :" , day);
   scanf ("%d" , &day);
   return 0;
}
