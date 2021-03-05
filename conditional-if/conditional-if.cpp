#include <iostream>
using namespace std;

int main()
{
    /*
    int age;
    string username;
    system("Color 9");
    cout << "\n Welcome to the driving test website." << endl;

    cout << "\n Please enter your name: ";
    cin >> username;

    cout << "\n Enter your age: ";
    cin >> age;
    
    
    if (age >= 16) {
        cout << "\n Congratulations, " << username << ". " << "You are of an appropriate age to drive, click below to book a driving test." << endl;
    }
    else {
        cout << "\n Sorry, " << username << ". " << "You are too young to book a driving test." << endl;
    }
    cout << "\n End of program." << endl;
    */

    int x;

    cout << "\n Enter a number: ";
    cin >> x;

    if (x >= 0) {
        cout << "\n Given number is positive." << endl;
    }
    else if (cin.fail()) {
    }
    else {
        cout << "\n Given number is negative."<< endl;
    }
    cout << "\n End of program." << endl;

    return 0;
}