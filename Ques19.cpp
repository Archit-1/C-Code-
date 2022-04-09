// Check enter the number is vowel (a,e,i,o,u)or(A.E,O,U,I)

#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter the character to check this char is vowel or not =  " << endl;
    cin >> c;

    if (c == 'a' || c == 'A' || c == 'i' || c == 'I' || c == 'e' || c == 'E' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    {
        cout << "Your input is true this is vowel character !Congratulation " << endl;
    }
    else
    {
        cout << "Your input is False this is not a vowel Character !Sorry Try Again" << endl;
    }

    return 0;
}