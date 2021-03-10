#include <iostream>
using namespace std;

// this program intends to list all prime numbers between a start number and end number as given by the user
int main()
{
    // declaring variables 'start' and 'end' to indicate the range in which the program checks for prime numbers
    // declaring i as a counter
    int start, end, i;

    // gathering input for start and end number
    cout << "Prime Number Generation" << endl;
    cout << "***********************" << endl;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter final number: ";
    cin >> end;

    cout << "Prime List between (" << start << " and " << end << "): ";
    
    // for loop to calculate the prime numbers and then output them
    for (i = start; i <= end; i++) {
    }
}