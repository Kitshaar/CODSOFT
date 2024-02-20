#include "InputHandler.h"
#include <iostream>
#include <limits>

double InputHandler::getDoubleInput(std::string_view prompt)
{
    double value{};
    std::cout << prompt;
    while (!(std::cin >> value))
    {
        std::cout << "Invalid input. Please enter a valid number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return value;
}
