// Write a function which will take pointer and display the number on screen. Take number from user and print it on screen using that function.

#include<iostream>
using namespace std;

  void pointer(int *a){
        cout<<"Enter the value of pointer is "<<*a<<endl;

    };

int main(){

   
    
    int b;
    cout<<"Enter the value of a"<<endl;
    cin>>b;
    pointer(&b);
    
    



    
    return 0 ;}