#include <iostream>

using namespace std;

int main() {
    int age ;

    cout << "Enter your age:" << endl;
    cin >> age;

    if (age >= 100) {
        cout << "You're too old to enter the club!\n";
    }
    else if (age >= 18) {
        cout << "Welcome to the club!\n";
    } else if (age < 0) {
        cout << "You haven't been born yet!\n";
    }
     else {
        cout << "You aren't old enough to enter!\n";
    }

    return 0;
}