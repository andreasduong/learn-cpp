#include <iostream>

using namespace std;

class Human{
    public:
        string name;
        string occupation;
        int age;

        void eat() {
            cout << name <<" is eating\n";
        }
};

int main() {
    Human human1;
    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 36;

    cout << human1.name << endl;
    cout << human1.occupation << endl;
    cout << human1.age << endl;
    human1.eat();

    return 0;
}