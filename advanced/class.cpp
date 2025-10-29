#include <iostream>

using namespace std;

class HocSinh {
    private:
        string ten;
        int tuoi;
    public: 
        void nhap() {
            cout << "Nhập tên: ";
            getline(cin, ten);

            cout << "Nhập tuổi: ";
            cin >> tuoi;
        }

        void xuat() {
            cout << "Tên: " << ten << ", tuổi: "<< tuoi << endl;
        }
};

int main() {
    HocSinh hs;
    hs.nhap();
    hs.xuat();

    return 0;
}