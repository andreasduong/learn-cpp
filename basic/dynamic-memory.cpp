#include <iostream>

using namespace std;

int main() {

    // ví dụ 1
    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;
    cout << "address: " << pNum << endl;
    cout << "value: " << *pNum << endl;


    // ví dụ 2
    char *pGrades = NULL;
    int size;
    cout << "How many grades to enter in?: \n";
    cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i ++) {
        cout << "Enter grade # " << i + 1 << ": " ;
        cin >> pGrades[i]; 
    }

    for (int i = 0; i < size; i ++) {
        cout << pGrades[i] << " ";
    }


    delete pGrades;

    delete pNum;

    return 0;
}