// Reverse a number

#include<iostream>
using namespace std;

int main(){

    int num,rem,sum=0;
    cout<<"Enter the number which is reverse the number "<<endl;
    cin>>num;

    while(num!=0){
        rem = num % 10;
        sum = sum*10+rem;
        num = num / 10;


    }

    cout<<"Reverse number is "<<sum<<endl;
    
    return 0 ;}