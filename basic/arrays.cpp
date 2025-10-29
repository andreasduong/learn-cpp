#include <iostream>

using namespace std;

int main() {
    string cars[] = {"Honda", "Toyota", "Vinfast"};

    cars[0] = "BMW";

    // duyệt phần tử
    cout << cars[0] << endl;

    // duyệt mảng - cách 1 dùng for
    int lengthCars = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < lengthCars; i++) {
        cout << cars[i] << endl;
    }


    // cách 2 dùng for each
    for (string i : cars) {
        cout << i << endl;
    }

    return 0;
}