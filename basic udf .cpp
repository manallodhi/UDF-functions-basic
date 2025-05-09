#include <iostream>
using namespace std;

void printtable(int num);
int calculatefactorial(int num);

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    printtable(num);
    int fact = calculatefactorial(num);
    cout << "Factorial of " << num << " is " << fact << endl;
    return 0;
}

void printtable(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }
}

int calculatefactorial(int num)
{
    int factorial = 1;
    for (int i = 1 ; i <= num ; i++)
    {
        factorial *= i;
    }
        return factorial;

}
