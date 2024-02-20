#include "Calculator.h"
#include "InputHandler.h"
#include <iostream>

void Calculator::getUserInput()
{
    num1 = InputHandler::getDoubleInput("Enter the first number: ");
    num2 = InputHandler::getDoubleInput("Enter the second number: ");
}

void Calculator::displayMenu()
{
    std::cout << "Select an operation:\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
}

void Calculator::add()
{
    result = num1 + num2;
}

void Calculator::subtract()
{
    result = num1 - num2;
}

void Calculator::multiply()
{
    result = num1 * num2;
}

void Calculator::divide()
{
    if (num2 != 0)
    {
        result = num1 / num2;
    }
    else
    {
        std::cout << "Error: Division by zero!\n";
    }
}

void Calculator::displayResult()
{
    std::cout << "Result: " << result << '\n';
}
