// Write a program is multiple of 3
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number" << endl;
    cin >> a;
    if ((a % 3 == 0) && (a % 7 == 0))
    {
        cout << "This is Multiple of three and also multiple of 7" << endl;
    }

    else if (a % 3 == 0)
    {

        cout << "This is Multiple of 3 = " << endl;
    }

    else if (a % 7 == 0)
    {

        cout << "This is Multiple of 7 = " << endl;
    }
    else
    {
        cout << "This is not a multiple of three or seven" << endl;
    }

    return 0;
}