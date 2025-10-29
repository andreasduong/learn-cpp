#include <iostream>

using namespace std;

void bakePizza() {
    cout << "Here's your pizza.\n";
}

void bakePizza(string topping1) {
     cout << "Here's your " << topping1 << " pizza.\n";
}

void bakePizza(string topping1, string topping2) {
     cout << "Here's your " << topping1 << " and " <<topping2 <<" pizza.\n";
}

int main() {
    bakePizza("pepperoni");
    bakePizza("pepperoni", "mushroom");
    return 0;
}