#include <iostream>
using std::cout ;
using std::endl;


namespace Alpha{
    int x = 0;
}

namespace Beta{
    int x = 1;
}

    int x = 69;

int main() {

    cout << :: x << endl; // 69
    cout << Alpha::x << endl; // 0
    cout << Beta::x << endl; // 1
    return 0;
}