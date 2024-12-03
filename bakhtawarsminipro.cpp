#include <iostream>
using namespace std;

bool isleap(int year)
{
if (year % 4 != 0){ // if divisible by 4 then leap year
    return false;
}
else if (year % 100 != 0){ // if only divisible by 100 then not a leap year
    return true;
}
else if (year % 400 != 0){ //if divisible by 100 & 400 then leap year
    return false;
}
else{
    return true;
}
}

int main()
{
    int year;
    while(true){
            int choice;
    cout<<"Enter 1 for enter year or 0 for exit ";
    cin>>choice;

    if (choice==1){ // if user enters 1 then enter year

    cout<<"Enter year: ";
    cin>>year;

    if(isleap(year)){   //calls function

            // if returns true then leap year
        cout<<year<<" is a leap year!"<<endl;
    }
    else {
           //if returns false then not a leap year
        cout<<year<<" is not a leap year!"<<endl;
    }
}//condition 1 closing

else if(choice ==0){ //if user enters 0 then exit
    exit(0);


}//condition 0 closing
}//while closing
}//main closing








