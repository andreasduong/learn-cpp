#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a ;
    double b ;
    double c ;

    cout << "Enter side a:" << endl;
    cin >> a ;

    cout << "Enter side b:" << endl;
    cin >> b ;


    // a = pow(a, 2);
    // b = pow(b ,2);
    // c = sqrt(a+b);

    c = sqrt(pow(a,2) + pow(b,2));

    cout << "Side c is " << c << endl;

    return 0;
}