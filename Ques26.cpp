// Palindrome Number 😊


#include<iostream>
using namespace std;

int main(){

    int num ,rem,sum =0,palindrome;
    cout<<"Enter the number "<<endl;
    cin>>num;
    palindrome = num;
    while(num!=0){
        rem = num%10;
        sum =  sum  +rem*rem*rem;
        num = num /10;
    }
    if(palindrome==sum){
        cout<<"This is a Palindrome number"<<endl;
    }
    else{
        cout<<"This is not a palindrome no "<<endl;
    }

    
    return 0 ;}