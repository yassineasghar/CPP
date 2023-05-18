// main.cpp
// The main() function in C++ is the entry point of the program, where the execution begins. 
// In the calculator program, the main() function is defined in the "main.cpp" file. 
// It interacts with the Calculator class by creating an instance of the class 
// (Calculator calc;) and calling its member functions (calc.add(), calc.subtract(), etc.) to perform
// arithmetic operations. The main() function also handles user input and output using cin
// and cout, respectively.

// Warning : Calling only the header in this main.cpp file
          // Do not call the .cpp here , the header calls teh declared functions in the     
          // main() , and teh claa functions are called from .cpp through the header

#include <iostream>
#include "Calculator.h"

using namespace std;

int main() {
    Calculator calc;

    int num1, num2;
    cout << "[I] Enter two numbers to be calculated:\t";
    cin >> num1 >> num2;

    int sum = calc.add(num1, num2);
    cout << "[O] Sum:\t" << sum << endl;

    int difference = calc.subtract(num1, num2);
    cout << "[O] Difference:\t" << difference << endl;

    int product = calc.multiply(num1, num2);
    cout << "[O] Product:\t" << product << endl;

    int quotient = calc.divide(num1, num2);
    cout << "[O] Quotient:\t" << quotient << endl;

    return 0;
}
