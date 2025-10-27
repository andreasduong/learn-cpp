#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice(){
    char player;
    cout << player;

    do {
        cout << "ROCK PAPPER SCISSORS GAME!\n";
        cout << "r for rock\n";
        cout << "p for papper\n";
        cout << "s for scissors\n";
        cin >> player;
    } while(player != 'r' && player != 'p'&& player != 's') ;

    return player;
}

char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}

void showChoice(char choice) {
    switch (choice) {
        case 'r' : cout << "Rock\n";
            break;
         case 'p' : cout << "Papper\n";
            break;
         case 's' : cout << "Scissors\n";
            break;
    }
}

void chooseWinner(char player, char computer){
    switch (player) {
        case 'r' : if (computer == 'r') {
                    cout << "It's a tie";
                    } else if (computer == 's')
                    {
                    cout << "You're won!";
                    } else {
                    cout << "You're lost!";
                    }
        break;   

            case 'p' : if (computer == 'p') {
                    cout << "It's a tie";
                    } else if (computer == 'r')
                    {
                    cout << "You're won!";
                    } else {
                    cout << "You're lost!";
                    }
            break;   

            case 's' : if (computer == 's') {
                    cout << "It's a tie";
                    } else if (computer == 'r')
                    {
                    cout << "You're won!";
                    } else {
                    cout << "You're lost!";
                    }
            break;        

    }
}

int main() {
    char player;
    char computer;

    player = getUserChoice();
    cout  << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}