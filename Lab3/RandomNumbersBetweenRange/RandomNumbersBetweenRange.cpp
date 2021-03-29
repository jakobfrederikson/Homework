#include <iostream>
#include <cstdlib> // for srand(), and rand()
using namespace std;

int main()
{
    int ranNum;
    int i;
    int even = 0;
    int odd = 0;

    cout << "Random numbers between 10 to 20" << endl;
    cout << "*******************************\n" << endl;

    srand(time(0)); // Setting seed of srand to 0. If we use a number above 0 we will get the same output each time. We need to use time(0) to use the systems clock instead, allowing us
                    // to get a different output each time.

    for (i = 0; i < 6; i++) { // only outputting 6 times
        ranNum = 10 + (rand() % (20 - 10 + 1)); // setting our random number generation to be between 10 and 20.
        if (i == 5) { // no need for a comma on the last output. When loop reaches its last iteration, we output with no comma.
            cout << ranNum;
        }
        else {
            cout << ranNum << ", ";
        }
        if (ranNum % 2 == 0) { // even or odd check before loop ends.
            even++; // add plus 1 to the even variable
        }
        else { 
            odd++; // add plus 1 to the odd variable
        }
    }

    cout << "\n\nNumber of even numbers in the list: " << even; // outputting amount of even and odd numbers after the loop ends.
    cout << "\nNumber of odd numbers in the list: " << odd << endl;

    return 0;
}
