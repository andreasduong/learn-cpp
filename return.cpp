#include <iostream>

using namespace std;

double square(double length) {
    return  length * length;
   
}

double cube(double length) {
    return length * length * length;
}

string concatString(string string1, string string2) {
    return string1 + " " + string2;
}

int main() {
    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    cout << "area: " << area << "cm2\n";
    cout << "volume: " << volume << "cm2\n";


    string firstName = "Andy";
    string lastName = "Dương";
    string fullName = concatString(firstName, lastName);
    cout << "Hello! My name is " << fullName << endl;
    return 0;
}

