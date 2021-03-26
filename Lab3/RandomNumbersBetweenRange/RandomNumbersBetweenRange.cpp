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
    cout << "*******************************" << endl;

    srand(time(0)); // Setting seed of srand to 0. If we use a number above 0 we will get the same output each time. We need to use time(0) to use the systems clock instead, allowing us
                    // to get a different output each time.

    for (i = 0; i < 6;) {
        ranNum = (rand() % 20 + 1); // Modulo 
        if (ranNum >= 10) {
            cout << ranNum << " ";
            if (ranNum % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
            i++; // putting i++ in the ranNum check so that the loop will only carry on once it gets a number over 10

        }
    }

    cout << "\nNumber of even numbers in the list: " << even;
    cout << "\nNumber of odd numbers in the list: " << odd;
    cout << endl;

    return 0;
}
