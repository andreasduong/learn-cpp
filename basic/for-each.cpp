#include <iostream>

using namespace std;

int main() {
    string animals[] = {"Dog", "Cat", "Mouse", "Chicken", "Pig"};

    for (string x : animals) {
        cout << x << " "; 
    }
    cout << endl;

    double grades[] = {2.5, 3.0, 2.0, 1.5, 3.7 , 4.0};
    for (double x : grades) {
        cout << x << " ";
    }

    return 0;
}