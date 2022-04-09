// Write a program in C++ to find the factorial of a number.

#include <iostream>
using namespace std;
 

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
 

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    cout << "Factorial of "
         << num << " is " << factorial(num) << endl;
    return 0;
}