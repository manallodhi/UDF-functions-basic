#include <cstdio>

int main()
{
  int day ;
  //Adding escape sequences to make it easy o read .
  printf ("\n\n\t\tEnter the number between 1-7 :\n\t\t") ;
  scanf ("%d", &day) ; //Using 'scan f' for taking input from user

  // Determine the action based on the user input
  switch(day)
  {
    case 1 :
      printf ("Monday");//if day is 1 print monday
      break;
    case 2 :
      printf ("Tuesday");//if day is 2 print tuesday
      break;
    case 3 :
      printf ("Wednesday");//if day is 3 print wednesday
      break;
    case 4 :
      printf ("Thursday");//if day is 4 print thursday
      break;
    case 5 :
      printf ("Friday");//if day is 5 print friday
      break;
    case 6 :
      printf ("Saturday");//if day is 6 print saturday
      break;
    case 7 :
      printf ("Sunday");//if day is 7 print sunday
      break;
    default :
      /*this statement prints when none of the user input
      matches one among the cases*/
      printf ("\t\tInvalid input !\n\n");
  }
  return 0;
}

