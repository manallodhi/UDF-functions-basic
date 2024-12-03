#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a = 3.1; //taking values for a,b
    float b = 4.2;
    float x1,x2; //declaring eqs for -ve(x1) & +ve(x2)
    int c; //declaring c

    cout<<"Enter value for c:"<<endl; //asking for value for c
    cin>>c;

    float discriminant = (b*b - 4 * a * c);

    if (discriminant>=0){

    x1 = (-b + sqrt((b * b - 4 * a * c))) / (pow (a/b,2) + pow(b/c,2)); // eq for +ve
    cout<<"Formula for +ve "<<x1<<endl;

    x2 =(-b - sqrt((b * b - 4 * a * c))) / (pow (a/b,2) + pow(b/c,2)); // eq for -ve
    cout<<"Formula for -ve "<<x2<<endl;
    }
    else {
        cout<<"The formula results in complex numbers for the given input"<<endl;
    }
    return 0;
}
