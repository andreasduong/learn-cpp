#include <iostream>

using namespace std;

class Nguoi {
    public : 
        virtual void xuat() { // virtual =  kích hoạt đa hình động, đối tượng được trỏ sẽ dùng hàm của class con
            cout << "tôi là một người\n";
        }
};

class HocSinh : public Nguoi {
    public :
        void xuat() {
            cout << "tôi là một học sinh\n";
        }
};

int main() {   
    Nguoi n;
    HocSinh hs;

    n.xuat();
    hs.xuat();

    Nguoi *p = &hs;
    p->xuat(); // dùng hàm của class con do đã virtual class cha

    return 0;
}