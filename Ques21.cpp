// // Find Factorial

// #include <iostream>
// using namespace std;

// // int factorial(int n)
// // {
// //     if (n <= 1)
// //     {
// //         return 1;
// //     }

// //     return n * factorial(n - 1);
// // }

// // int main()
// // {

// //     int num;

// //     cout << "Enter the number " << endl;
// //     cin >> num;
// //     cout << factorial(num) << endl;

// //     return 0;
// // }

// int main()
// {

//     int a = 0, b = 1, c, i;
//     cin >> c;
//     cout << a << b << endl;
//     for (i = 1; i < c; i++)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//     }
// }

// Second Method of Factorial😊✔️

#include <iostream>
using namespace std;

int main()
{

    int i, n, f;
    cout << "Enter the Number To find  Factorial" << endl;
    cin >> n;
    // f = n;
    for (i = 1; i < n; i++)
    {
        f = n * i;
    }
    cout << "The factorial is " << f << endl;

    return 0;
}