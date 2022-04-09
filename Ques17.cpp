// Swapping two number using third variable

#include <iostream>
using namespace std;

int main()
{

    int num1, num2, num3;
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the Second  number" << endl;
    cin >> num2;
   

    cout << "The First Number without Swap is = " << num1 << endl;
    cout << "The Second Number without Swap is = " << num2 << endl;

    num3 = num1;
    num1 = num2;
    num2 = num3;
    cout<<"The First number is After Swapping is "<<num1<<endl;
    cout<<"The Second  number is After Swapping is "<<num2<<endl;


    return 0;
}