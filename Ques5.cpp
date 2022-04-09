// Write a program in C++ which swap the values of two variables not using third variab

// Write a program in C++ to swap two numbers using third variable.

#include<iostream>
using namespace std;

int main(){

    int num1,num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the Second  number"<<endl;
    cin>>num2;
    // cout<< "The first number is " <<num1<< " The second number " <<num2<<endl;

    // After Swapping

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
 
    cout << "The first number is " <<num1<<endl;
    cout<< " The second number " <<num2<<endl;




    
    return 0 ;}