#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
private:
    double num1{};
    double num2{};
    double result{};

public:
    void getUserInput();
    void displayMenu();
    void add();
    void subtract();
    void multiply();
    void divide();
    void displayResult();
};

#endif
