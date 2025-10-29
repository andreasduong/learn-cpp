#include <iostream>

using namespace std;
    // Local variable = biến cục bộ, tạo ở bên trong hàm hoặc khối
    // Global variable = biến toàn cục, tạo ở bên ngoài tất cả các hàm

void printNum() {
    int myNum = 2;
    cout << myNum << endl;
}

int main() {
    int myNum = 1;
    cout << myNum << endl;

    printNum(myNum);


    return 0;
}