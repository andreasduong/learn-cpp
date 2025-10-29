#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char getChoice(const string& who) {
    if (who == "player") {
        char c;
        do {
            cout << "ROCK PAPER SCISSORS GAME!\n"
                 << "r = rock, p = paper, s = scissors\n"
                 << "Enter your choice: ";
            cin >> c;
        } while (c != 'r' && c != 'p' && c != 's');
        return c;
    } else {
        return "rps"[rand() % 3];
    }
}

string toText(char c) {
    switch (c) {
        case 'r': return "Rock";
        case 'p': return "Paper";
        case 's': return "Scissors";
        default:  return "";
    }
}

string result(char p, char c) {
    if (p == c) return "It's a tie!";
    if ((p == 'r' && c == 's') || (p == 'p' && c == 'r') || (p == 's' && c == 'p'))
        return "You won!";
    return "You lost!";
}

int main() {
    srand(time(0));
    char player = getChoice("player");
    char computer = getChoice("computer");

    cout << "\nYou chose: " << toText(player)
         << "\nComputer chose: " << toText(computer)
         << "\n" << result(player, computer) << endl;
}
