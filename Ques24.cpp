// Sum of digits of a number
// ( Ex - 123 (1+2+3=6))
#include<iostream>
using namespace std;

int main(){

    int num,rem,sum =0 ;
    cout<<"Enter the number "<<endl;
    cin>>num;
    while(num!=0){
        rem = num%10;
        sum = sum + rem ;
        num = num / 10;


    }
    cout<<"The sum is "<<sum<<endl;


    

    return 0 ;}