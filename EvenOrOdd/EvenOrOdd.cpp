#include <iostream>
using namespace std;
// this program checks whether a number is even or odd.
int main()
{
    int a;

    cout << "\n \t Enter a number: ";
    cin >> a;

    if (a % 2 == 0) {
        cout << "\n \t " << a << " is an even number." << endl;
    }
    else {
        cout << "\n \t " << a << " is an odd number." << endl;
    }
}
