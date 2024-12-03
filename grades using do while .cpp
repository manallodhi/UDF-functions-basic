 #include <iostream>
 using namespace std ;

 int main() {
   int marks ;
   char choice ;

   do{
    cout << "Enter your Marks : " ;
    cin >> marks ;

    while (marks<0 || marks>100){
    cout << "Invalid input ! please enter marks between (0-100) : " ;
    cin >> marks ;
    }

    if(marks<=100 && marks>=90){
        cout << "GRADE A" << endl ;
    }else if(marks<=89 && marks>=80){
        cout << "GRADE B" << endl ;
    }else if(marks<=79 && marks>=70){
        cout << "GRADE C" << endl ;
    }else if(marks<=69 && marks>=60){
        cout << "GRADE D" << endl ;
    }else if(marks<=59 && marks >=0){
        cout << "FAIL" << endl ;
    }

    cout << "Do you want to grade another student : (Y/N) " ;
    cin >> choice ;
    }while (choice == 'Y' || choice == 'y' );
        cout << "Program terminated ! Goodbye . "<< endl ;

    return 0 ;
}
