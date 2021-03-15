#include <iostream>
using namespace std;

// This program intends to list all prime numbers between a 
// start number and end number as given by the user. 
// It will also give out the amount of prime numbers it has found.
int main()
{
    // Declaring variables 'start' and 'end' to 
    // indicate the range in which the program checks for prime numbers.
    // Declaring i and j as a counter in our 'for' loops.
    // primeCheck is used as a boolean (1 or 0) to output a prime number.
    // primeCount is a counter for how many primes have been output.
    int start, end, i, j, primeCheck, primeCount = 0;

    // gathering input for start and end number
    cout << "Prime Number Generation" << endl;
    cout << "***********************" << endl;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter final number: ";
    cin >> end;

    // 'while' loop that checks if the user entered a higher starting value
    // than their end value. It will continue until the user enters correct input.
    while (start > end) {
        cout << "Please make sure your final value is bigger than the starting number";
        cout << "\n\nEnter starting number: ";
        cin >> start;
        cout << "Enter final number: ";
        cin >> end;
    }

    cout << "Prime List between (" << start << " and " << end << "):";

    // 'for' loop to calculate the prime numbers and then output them
    for (i = start; i <= end; i++) {
        if (i == 1 || i == 0) {
            continue; // continue here because neither 1 or 0 are 
                      // prime numbers and don't work properly with our 
                      // calculation in the below 'for loop'
        }

        primeCheck = 1; // Declaring that whatever 'i' is right now
                        // is a prime number because it didn't equal 1 or 0.

        // starting 'for' loop at 2 because that's the lowest prime number you can have.
        // this loop checks if 'i' divided by 2 has no remainder.
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                primeCheck = 0;
                break;
            }
        }
        if (primeCheck == 1) {
            cout << " " << i;
            primeCount++; // if the program successfully outputs a prime number
                          // then add 1 to the primeCount variable.
        }
    }

    cout << "\nTotal prime numbers between (" << start << " and " << end << "): " << primeCount << endl;

    return 0;
}

// with help from:
// https://stackoverflow.com/questions/5200879/printing-prime-numbers-from-1-through-100
// https://w3codeworld.com/article/146/cplusplus-program-to-print-prime-numbers-from-1-to-n-using-for-
