#include <iostream>

using namespace std;

class HocSinh{
    private:
        string ten;
        int tuoi;
    public:
        // constructor mặc định
        HocSinh() {
            ten = "random";
            tuoi = 36;
        }

        // constuctor có tham số khởi tạo
        HocSinh(string ten, int tuoi) {
            this->ten = ten;
            this->tuoi = tuoi;
        }

        // giải phóng tham số khởi tạo
        ~HocSinh() {
            cout << "Huỷ đối tượng: " << ten <<  endl;
        }

        void xuat() {
            cout << ten << " - " << tuoi << endl;
        }
};

int main() {
    HocSinh hs1;
    HocSinh hs2("Andy", 24);

    hs1.xuat();
    hs2.xuat();

    return 0;
}