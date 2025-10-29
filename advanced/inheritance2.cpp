#include <iostream>

using namespace std;

class Nguoi{
    protected:
        string ten;
    public:
        Nguoi(string t = "random") : ten(t){}

        virtual void xuat() {
            cout << "tôi là " << ten << " một người ngẫu nhiên.\n";
        }
};

class HocSinh : public Nguoi {
    protected:
        string tenTruong;
    public:
        HocSinh(string t, string tr) : Nguoi(t), tenTruong(tr) {}

         void xuat() override {
            cout << "tôi là " << ten << " học sinh trường " << tenTruong << endl;
        }

};  

class SinhVien : public HocSinh {
    private :
        string chuyenNganh;
    public:
        SinhVien(string t, string tr, string cn) :  HocSinh(t,tr), chuyenNganh(cn) {}

        void xuat() override {
            cout << "tôi là " << ten << " học sinh trường " << tenTruong << " chuyên ngành " << chuyenNganh << endl;
        }
};

int main () {
    Nguoi ng;
    HocSinh hs("Emma", "học tại nhà");
    SinhVien sv("Andy", "HUMG", "CNTT");

    Nguoi *p;

    p = &ng; p->xuat();
    p = &hs; p->xuat();
    p = &sv; p->xuat();

    return 0;
}