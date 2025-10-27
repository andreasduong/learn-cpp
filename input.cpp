#include <iostream>

using namespace std;

int main() {
    string name;
    int age;

    cout << "What's your age?" << endl;
    cin >> age;

    cout << "What's your name?" << endl;
    getline(cin >> ws, name); // ws -> nuốt khoảng trống Enter
  

    cout << "Hello " << name << "! You are " << age <<  " years old " <<endl;

    

    return 0;
}