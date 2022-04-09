// Check the numbr is prime or not

#include<iostream>
using namespace std;

int main(){

    int num, i,num2;
    cout<<"Enter the number to check it is prime or not "<<endl;
    cin>>num;
    for(num2=2;num2<i;num2++)
    for(i=2;i<num;i++){
        if(num%i==0){
            cout<<"This is not a Prime Number "<<num <<endl;
            break;
        }
        else{
            cout<<"This is a Prime Number "<<endl;
            break;
        }
    }
    

    return 0 ;}