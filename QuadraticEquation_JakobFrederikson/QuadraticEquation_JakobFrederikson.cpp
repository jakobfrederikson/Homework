#include <iostream>
#include <cmath> // including <cmath> for the future use of sqrt()
using namespace std;

// this program gathers user input to calculate a quadratic equation in C++
int main()
{
    float a, b, c, x1, x2; // declaring variables used for quadratic equation

    cout << "Enter a, b , c  ";
    cin >> a >> b >> c; // getting inputs for variables a, b and c

    // calculating with the input from the user into variables x1 and x2 with the quadratic equation
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

    return 0;
}