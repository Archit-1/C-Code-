// How to check odd or even number 

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the number to check odd or even "<<endl;
    cin>>a;
    if(a%2==0){
        cout<<"This is a Even Number "<<endl;
    }
    else{
        cout<<"This is a Odd Number"<<endl;
    }

    return 0 ;}