#include <iostream>

using namespace std;
// function =  a block of reusable code, khối code tái sử dụng

void happyBirthday(string name) {
    cout << "Happy birth day to " << name << "\n";

}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else
        return n * factorial(n-1);
}

int main() {
    string name = "Andy";
  //  happyBirthday(name);
    
    int num;
    cout << "Enter the number you want to factorial: \n";
    cin >> num;
    cout << num << "! = " << factorial(num) << endl; 

    return 0;
}