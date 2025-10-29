#include <iostream>

using namespace std;

class Nguoi{
    protected:
        string hoTen;
        int tuoi;
    public:
        void nhap(){
            cout << "Nhập họ tên: ";
            getline(cin, hoTen);
            cout << "Nhập tuổi: ";
            cin >> tuoi;
        }

        void xuat() {
            cout << hoTen << " - " << tuoi;
        }
};

class HocSinh : public Nguoi{
    private:
        double gpa;
    public:
        void nhap() {
            Nguoi::nhap();
            cout << "Nhập gpa của học sinh: ";
            cin >> gpa;
        }
        void xuat() {
            Nguoi::xuat(); // gọi hàm xuất từ class cha qua kế thừa
            cout << " - gpa: " << gpa << endl;
        }
};

int main() {
    HocSinh hs1;
    hs1.nhap();
    hs1.xuat();

    return 0;
}