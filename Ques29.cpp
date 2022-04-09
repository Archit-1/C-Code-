// Print Triangle star pattern😎

#include <iostream>
using namespace std;

int main()
{

    int i, j, n;
    cout << "Enter the number" << endl;
    cin>>n;
    cout<<"Your star patter are as follows - "<<endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout << endl;
    }

    return 0;
}
