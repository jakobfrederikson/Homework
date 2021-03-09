#include <iostream>
#include <cmath>
using namespace std;

// this program calculates 
int main()
{
    float a, b, c, x1, x2;

    // getting inputs for variables a, b and c
    cout << "Enter a, b , c  ";
    cin >> a >> b >> c;

    // calculating with the input from the user into variables x1 and x2
    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    // outputting solution of x1 and x2 to the user
    // endl; is used to help with readibility

    if ((b * b - 4 * a * c) == 0) {
        cout << "\n Roots are real and equal" << endl;
        cout << "\n x1 = " << x1 << ";" << "   x2 = " << x2;
    }
    else if ((b * b - 4 * a * c) > 0) {
        cout << "\n Roots are real and unequal" << endl;
        cout << "\n x1 = " << x1 << ";" << "   x2 = " << x2;
    }
    else {
        cout << "\nRoots are imaginary";
        cout << "\n x1 = nan;" << "   x2 = nan";
    }
    //cout << "Roots are : x1 = " << x1 << " , x2 = " << x2 << endl;

    return 0;
}