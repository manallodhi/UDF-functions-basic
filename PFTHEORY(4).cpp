/*Write a program to solve the following quadratic equationwhich is having 3 input variables a, b, c. Assign float
values of your choice into a and b variables and take the integer input value at run time in c variables. You have to
evaluate the formula two times with – and + values so you have two output values must be saved in x1, and x2 variable.
[Note:] Use the precedence rules for the arithmetic operators’ usage. For square root use built in function sqrt(x)
 which is available in math.h */

 #include <iostream>
 #include <math.h>
 using namespace std;

 int main()
 {
     //declaring variables
     float a = 33.3 , b = 44.4 , c ;
     float Sol_1 , Sol_2 ;
     //ask the user to enter the value of c
     cout << "The value of 'c' is " ;
     //input value of c on run time
     cin >> c ;

     //calulating the discriminant
     float discriminant = b*b-4*a*c;
    //check if discriminant is greater than 0
     if (discriminant>=0)
     {
     //quadratic formula to calculate the answer
     Sol_1 = (-b+sqrt(b*b-4*a*c))/(pow(a/b,2))+(pow(b/c,2)) ;
     cout << "Answer for the +ve equation " <<  Sol_1 <<endl;//print the calculated answer

     Sol_2 = (-b-sqrt(b*b-4*a*c))/(pow(a/b,2))+(pow(b/c,2)) ;
     cout << "Answer for the -ve equation " << Sol_2;
     }
     else {
         //this statement appears if the condition is false
        cout << "The formula gives imaginary number in result";
     }
     return 0;
 }
