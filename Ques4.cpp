// Write a program in C++ to swap two numbers using third variable.

#include<iostream>
using namespace std;

int main(){

    // int num1,num2,temp;
    // cout<<"Enter the first number"<<endl;
    // cin>>num1;
    // cout<<"Enter the Second  number"<<endl;
    // cin>>num2;
    // cout<< "The first number is " <<num1<< " The second number " <<num2<<endl;

    // // After Swapping

    // temp = num1;
    // num1 = num2;
    // num2 = temp;

    // cout<< "The first number is " <<num1<< " The second number " <<num2<<endl;

    int num1,num2;
    cout<<"Enter THe Number"<<endl;
     cin>>num1;
    cout<<"Enter the Second  number"<<endl;
    cin>>num2;
    cout<< "The first number is  " <<num1<< " The second number " <<num2<<endl;

    swap(num1,num2);
    cout<< "The first number is after swap " <<num1<< " The second number is after swap "  <<num2<<endl;

    




    
    return 0 ;}