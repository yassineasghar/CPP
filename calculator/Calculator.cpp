// Calculator.cpp
// In object-oriented programming, a class is a blueprint for creating objects // (instances) that share common properties and behaviors. It encapsulates data // and functions into a single entity. In the calculator program, the class is // called "Calculator". It contains member functions (such as add(), ////
// subtract(), multiply(), and divide()) that define the operations performed
// by the calculator. The class can have member variables as well, although in
// this particular program, there are no member variables.


// Warning : include the correct header --> means where you declared
          //  your variables for this class (next line), otherwise
          // there are no connections between the class and the header

#include "Calculator.h"

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::multiply(int a, int b) {
    return a * b;
}

int Calculator::divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        // Handle division by zero error
        // You can choose to return an error code or throw an exception
        // like : "[ERROR] Division by zero is not allowed here"
        // For simplicity, let's return 0 in this case
        return 0;
    }
}
