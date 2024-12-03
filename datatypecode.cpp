#include <iostream>
#include <climits> //FOR INT_MAX, INT_MIN etc
using namespace std;

int main() {
    //Integer data types
    char c = 'a';//character
    short s = SHRT_MAX;//short integer
    int i = INT_MAX;//Integer
    long l = LONG_MAX;//long integer
    long long ll = LLONG_MAX;//long long integer

    //Floating point data types
    float f = 3.14f;//Single precision floating point
    double d = 3.145678945;//double precision floating point
    long double ld = 3.1233455678909887L;//Extended precision floating point

    //Boolean data type
    bool b = true;//boolean

    //Pointer data type
    int*ptr =&i;//pointer to integer


    //Print values
    cout<<"Character:"<<c<<endl;
    cout<<"Short Integer:"<<s<<endl;
    cout<<"Integer:"<<i<<endl;
    cout<<"Long integer:"<<l<<endl;
    cout<<"Long Long integer:"<<ll<<endl;
    cout<<"Float"<<f<<endl;
    cout<<"Double:"<<d<<endl;
    cout<<"Long double"<<ld<<endl;
    cout<<"Boolean:"<<b<<endl;
    cout<<"Pointer:"<<ptr<<endl;

    return 0;
}
