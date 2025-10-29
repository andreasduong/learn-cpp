#include <iostream>

using namespace std;

int main() {
    // & = địa chỉ ô nhớ toán tử
    // * = toán tử được giải tham chiếu

    string name = "Andy";
    int age = 24;

    string *pName = &name;
    cout << *pName << endl;

    string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"} ;
    string *pFreePizzas = freePizzas;

    int *pAge = &age;
    cout << *pAge << endl;
    cout << *pFreePizzas << endl;

    return 0;
}