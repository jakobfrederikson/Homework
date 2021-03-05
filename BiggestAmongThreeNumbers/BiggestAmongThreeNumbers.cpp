#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "\n \t Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b && a > c) {
        cout << "\n \t " << a << " is greater than " << b << " and " << c << "." << endl;
    }
    else if (b > a && b > c) {
        cout << "\n \t " << b << " is greater than " << a << " and " << c << "." << endl;
    }
    else if (c > a && c > b) {
        cout << "\n \t " << c << " is greater than " << a << " and " << b << "." << endl;
    }
    else if (a == b && a == c) {
        cout << "\n \t They are all the same number." << endl;
    }
}