#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  
    int userChoice, computerChoice;

    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "Enter your choice (1-3): ";
    cin >> userChoice;

  // to take valid user choice
    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice. Please choose between 1 and 3.\n";
        return 1;
    }

    // to generate computer's choice
    computerChoice = rand() % 3 + 1;

    // to display choices
    cout << "You chose ";
    switch (userChoice) {
        case 1:
            cout << "Rock";
            break;
        case 2:
            cout << "Paper";
            break;
        case 3:
            cout << "Scissors";
            break;
    }
    cout << endl;

    cout << "Computer chose ";
    switch (computerChoice) {
        case 1:
            cout << "Rock";
            break;
        case 2:
            cout << "Paper";
            break;
        case 3:
            cout << "Scissors";
            break;
    }
    cout << endl;

    // to find the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!\n";
    } else {
        cout << "Computer wins!\n";
    }

    return 0;
}
