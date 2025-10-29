#include <iostream>

using namespace std;

class HocSinh {
    private:
        string ten;
        int tuoi;
    public:
        HocSinh(string ten, int tuoi) : ten(ten), tuoi(tuoi) {}

        friend ostream& operator<<(ostream &out, const HocSinh &hs) {
            out << hs.ten << " - " << hs.tuoi << endl;
            return out;
        }
};


int main() {
    HocSinh hs1("Andy", 24);
    cout << hs1;
    return 0;
}