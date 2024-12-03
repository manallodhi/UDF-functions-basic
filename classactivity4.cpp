#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout <<"Enter the character"<<endl;
    cin>>ch;
    if (ch>'A' && ch<'Z'){
    cout<<"The letter is a upper case"<<endl;
  } else{
    cout<<"The letter is a lower case"<<endl;
    }
    return 0;
}

