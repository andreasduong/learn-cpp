#include <iostream>

using namespace std;

void walk(int steps) {
    for (int i = 0; i < steps; i++) {
        cout << "You take a step!\n";
    }
}

int main() {

    walk(5);


    return 0;
}