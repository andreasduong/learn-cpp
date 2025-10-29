#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Nhập vào số 1,2,36 để điền giới tính của bạn. 1 - Nam. 2 - Nữ. 36 - Gay\n";
    cin >> number;

    switch (number) {
        case 1:
            cout << "Giới tính của bạn là nam.\n";
            break;
        case 2:
            cout << "Giới tính của bạn là nữ\n";
            break;
        case 36:
            cout << "Bạn bị gay\n";
            break;
        default :
            cout << "Vui lòng nhập đúng các số 1,2,36 \n";    
    }

    return 0;
}