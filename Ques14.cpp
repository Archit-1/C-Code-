#include<iostream>
using namespace std;

int main(){
    // int a;
    // for(a=10;a>=1;a--){
    //     cout<<"Print the table of" <<2<< " is = "<<a*2<<endl;
    // }

    int a=20, table;
    
    cout<<"Enter the number which reverse table you want to print = "<<endl;
    cin>>table;
    while(a>=1){
        cout<<"The table is = "<<a*table<<endl;
        a--;

    }
    return 0 ;}