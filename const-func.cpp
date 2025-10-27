#include <iostream>

using namespace std;



void printInfo(const string name,const int age) {
    string name = "Thanh Hoá";
    int age = 36;

    cout << name << endl;
    cout << age << endl;
}

int main() {
    // string name = "Andy";
    // int age = 24;

    printInfo(); // lỗi vì giá trị trong hàm đã khoá cực, không thể truyền thêm

    return 0;
}