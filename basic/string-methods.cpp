#include <iostream>

using namespace std;

int main() {
    string name;

    cout << "Enter your name:\n";
    getline(cin, name);

    if(name.empty()) {
        cout << "You didn't enter your name!\n";
    }
    else if(name.length() > 20) {
        cout << "Your name can't be over 20 characters!\n";
    } else
    {
        cout << "Welcome " << name << endl;
    }

 //   name.append("@gmail.com"); thêm ký tự

    return 0;
}