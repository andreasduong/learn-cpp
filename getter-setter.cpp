#include <iostream>
using namespace std;

class Stove{
    private:
        int temperature = 0;
    
    public:
        int getTemperature() {
            return temperature;
        }

        void setTemperature(int temperature) {
            this->temperature = temperature;
        }
};

int main() {
    Stove stove;
 //   stove.temperature = 36;

    stove.setTemperature(999);

    cout << stove.getTemperature() << endl;
    
    return 0;
}