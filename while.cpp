#include <iostream>

using namespace std;

int main() {
    // ví dụ 1
    // string name;

    // while (name.empty()) {
    //     cout << "Enter your name: ";
    //     getline(cin, name);
    // }

    // cout << "Hello " << name;


    // ví dụ 2
    int money = 100000;
    int number;

    
    while (true) {
        cout << "Chương trình ATM Giả lập. Vui lòng nhập 1 hoặc 2.\n";
        cout << "Bấm 1: Hiện số dư\n";
        cout << "Bấm 2: Thoát khỏi chương trình\n";
        cin >> number;

        // ✅ Kiểm tra nếu nhập sai (nhập chữ, ký tự, v.v.)
        if (cin.fail()) {
            cin.clear();            // Xóa trạng thái lỗi
            cin.ignore(1000, '\n'); // Bỏ dữ liệu sai trong bộ đệm
            cout << "⚠️ Nhap sai! Vui long nhap so 1 hoac 2.\n";
            continue;               // Quay lại đầu vòng lặp
        }

        switch(number) {
            case 1:
                cout << "Đây là chương trình giả lập, số dư là " << money << endl;
                break;
            case 2:
                cout << "Cảm ơn đã sử dụng ATM!\n";
                return 0; // phá khỏi while
            default:
                cout << "Vui lòng nhập đúng số!\n";
        }
    }
    return 0;
}
