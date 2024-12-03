/*Write a program that input the distance between SHU and
your home in miles and convert the age into KM, meters, centimeters,
millimeters, and micrometers and then print all these computed values on screen.*/

#include <iostream>
using namespace std;

int main()
{
   //distance between SHU and my home
   int miles = 2;

   //formulas for performing the following conversions :
   float km = miles * 1.60934 ; //formula for miles into km
   float m = km * 1000 ; //formula for km into m
   float cm = m * 100 ; // formula for m into cm
   float mm = cm * 10 ; //formula for cm into mm
   float micrometer = mm * 1000 ; //formula for mm into µm

   //printing the values for each units conversion
   cout << "Distance in km is " << km << " km" <<endl; // prints the converted value in km
   cout << "Distance in m is " << m << " m" <<endl; // prints the converted value in m
   cout << "Distance in cm is " << cm << " cm" <<endl; // prints the converted value in cm
   cout << "Distance in mm is " << mm << " mm" <<endl; // prints the converted value in mm
   cout << "Distance in µm is " << micrometer << " µm" <<endl; // prints the converted value in µm

   return 0;
}










