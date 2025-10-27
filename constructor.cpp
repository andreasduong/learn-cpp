#include <iostream>

using namespace std;

class Student{
    public:
    string name;
    int age;
    double gpa;
    
    Student(string name, int age, double gpa) {
        this->name= name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main() {
    Student student1("Donald Trump", 80, 3.6);
    cout << student1.name << endl;
    cout << student1.age << endl;
    cout << student1.gpa << endl;
    return 0;
}