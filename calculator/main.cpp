// main.cpp

#include <iostream>
#include "Calculator.h"

int main() {
    using namespace std;
    Calculator calc;

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int sum = calc.add(num1, num2);
    cout << "Sum: " << sum << endl;

    int difference = calc.subtract(num1, num2);
    cout << "Difference: " << difference << endl;

    return 0;
}
