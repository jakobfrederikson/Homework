#include <iostream>
#include <string>
using namespace std;

int main()
{
    //--------//
    // STEP 1
    //--------//
    int players = 0;
    int max = 0, min = 100000;
    int i, j,  average, sum = 0;
    int playerScore[11], tempScore, playerScoreTest;
    string playerName[11], tempName, playerNametest;
    string maxName, minName;

    //--------//
    // STEP 2
    //--------//
    for (i = 0; i < 10; i++) {  // Loop to enter player names and scores.

        cout << "(" << i + 1 << "/10)" << endl;
        cout << "Enter player name:   ";
        cin >> playerName[i];
        cout << "Enter player score:  ";
        cin >> playerScore[i];

        while (playerScore[i] < 0 || playerScore[i] > 10000) {  // The game's score can only be between 0 and 10,000. Can not leave loop until they enter a correct value.
        playerScore[i] = 0;
        cout << "\nERROR: Score can only be between 0 and 10,000. Try again." << endl;  // Displaying error message. Input wasn't between 0 - 10000.
        cout << "(" << i + 1 << "/10)" << endl; // Going through input to enter player score again.
        cout << "Enter player score:  ";
        cin >> playerScore[i];
        }

        cout << endl;
        players++;  // Players is always out of 10, but leaving 'players++' here incase player count increases in the future.
    }

    for (i = 0; players < 10; i++) {
        cout << "Enter player name:   ";
        cin >> playerNametest;
        cout << "Enter player score:  ";
        cin >> playerScoreTest;
    }

    //--------//
    // STEP 3
    //--------//
    cout << "---------------";
    cout << "\nLIST OF PLAYERS";
    cout << "\n---------------" << endl;

    for (i = 0; i < 10; i++) {  // Loop that outputs all names and scores on seperate lines.
        cout << "Name = " << playerName[i] << " | Score = " << playerScore[i] << endl;
    }

    //--------//
    // STEP 4
    //--------//
    for (i = 0; i < 10; i++) {              // Adding every score together.
        sum = sum + playerScore[i];
    }

    average = sum / players;                // Calculating averge score.

    cout << "\nAVERAGE SCORE = " << average;

    //-------//
    // STEP 5
    //-------//
    for (i = 0; i < 10; i++) {              // Finding MAX player.
        if (playerScore[i] > max) {
            max = playerScore[i];
            maxName = playerName[i];
        }
    }

    for (i = 0; i < 10; i++) {              // Finding MIN player
        if (playerScore[i] < min) {
            min = playerScore[i];
            minName = playerName[i];
        }
    }
    cout << "\n------------------------------";
    cout << "\nHIGHEST SCORE - " << max << " by " << maxName;
    cout << "\nLOWEST SCORE - " << min << " by " << minName;
    cout << "\n------------------------------";

    //-------//
    // STEP 6
    //-------//
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (playerScore[i] < playerScore[j]) { // Putting player scores and names into desceding order in their respective arrays.
                tempScore = playerScore[i];
                playerScore[i] = playerScore[j];
                playerScore[j] = tempScore;

                tempName = playerName[i];
                playerName[i] = playerName[j];
                playerName[j] = tempName;
            }
        }
    }

    //-------//
    // STEP 7
    //-------//
    cout << "\n-------------------------------------------------";
    cout << "\nLIST OF PLAYERS BASED ON SCORE (DESCENDING ORDER)";
    cout << "\n-------------------------------------------------" << endl;
    for (i = 0; i < 10; i++) {
        cout << "Name = " << playerName[i] << " | Score = " << playerScore[i] << endl;
    }
    return 0;
}