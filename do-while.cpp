#include <iostream>

using namespace std;

int main() {
    int number;

    

    do {
        cout << "Hãy nhập 1 số dương:" << endl;
        cin >> number;
    }    while (number < 0);

    cout << "The number is " << number << endl;

    return 0;
}