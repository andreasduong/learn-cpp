#include <iostream>

using namespace std;

int main() {
    string name = "Andy";
    int age = 24;

    bool student = true;

    
    cout << &name << endl;
    cout << &age << endl;
    cout << &student << endl;

    return 0;
}