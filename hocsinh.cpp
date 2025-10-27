#include <iostream>

using namespace std;

class HocSinh{
    private:
        string ten;
        int tuoi;

    public:
    void nhap() {
        cout << "Nhập tên học sinh:\n" ;
        cin >> ten;

        cout << "Nhập tuổi học sinh:\n";
        cin >> tuoi;

        cin.ignore();
    }

    // hàm định nghĩa toán tử << , nhận vào 1 luồng xuất , với const không cho thay đổi dữ liệu
    void operator <<(ostream &out) const {
        out << "Tên: " << ten << ", Tuổi: " << tuoi << endl;
    }

};

int main() {
    int soLuong;
    cout << "Nhập số lượng học sinh \n";
    cin >> soLuong;

    // cấp phát bộ nhớ 1 mảng danh sách học sinh
    HocSinh *danhSach = new HocSinh[soLuong];

    cout << "Nhập thông tin học sinh. \n" << endl;
    for (int i = 0; i < soLuong; i++) {
        cout << "Học sinh thứ " << i + 1 << "\n";
        danhSach[i].nhap();
    }


    cout << "Học sinh cuối cùng là: \n";
    danhSach[soLuong - 1] << cout ;


    // dùng xong thì xoá
    delete[] danhSach;

    return 0;
}