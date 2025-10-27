#include <iostream>

using namespace std;

class Animal{
    public:
        bool alive = true;
    void eat() {
        cout << "this animal is eating\n";
    }
};

class Dog : public Animal {
    public:
        void bark() {
            cout << "woof woof\n";
        }
};

class Cat : public Animal {
    public:
        void meow(){
            cout << "meow meow\n";
        }
};


int main() {
    Dog d0g;
    cout << d0g.alive << endl;
    d0g.bark();

    Cat kitten;
    cout << kitten.alive << endl;
    kitten.meow();


    return 0;
}