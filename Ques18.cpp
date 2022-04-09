// Without using third variable swap the numbers

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter the Number " << endl;
    cin >> a;
    cout << "Enter the Number " << endl;
    cin >> b;

    cout << " Before  Swap ,the value of a is  " << a << endl;
    cout << "Before  Swap ,the value of b is  " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << " After Swap ,the value of a is  " << a << endl;
    cout << "After Swap ,the value of b is  " << b << endl;

    return 0;
}
