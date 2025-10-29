#include <iostream>

using namespace std;

int main() {
    int students = 20;

   //  students = students + 1;
   students += 36;
   cout << students << endl;

   int pizzas = 36;
   pizzas -= 20;
   cout << "số pizza còn lại là " << pizzas << endl;

   int apples = 99;
   apples /= 3;
   cout << apples << endl;

   int money = 2000;
   money *= 70;
   cout << money << endl;


   int candies = 19;
   int remainders = candies % 3  ;
   cout <<  remainders << endl; 
    return 0;
}