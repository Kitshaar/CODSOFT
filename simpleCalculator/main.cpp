#include "Calculator.h"
#include "InputHandler.h"
#include <iostream>

int main()
{
    Calculator calc;
    char choice{};

    do
    {
        calc.getUserInput();
        calc.displayMenu();

        int operation{};
        operation = InputHandler::getIntInput("Enter your choice: ");

        switch (operation)
        {
        case 1:
            calc.add();
            break;
        case 2:
            calc.subtract();
            break;
        case 3:
            calc.multiply();
            break;
        case 4:
            calc.divide();
            break;
        default:
            std::cout << "Invalid choice. Please enter a number between 1 and 4.\n";
            continue;
        }

        calc.displayResult();

        choice = InputHandler::getCharInput("Do you want to perform another calculation? (y): ");

    } while (choice == 'y');

    std::cout << "Exiting the calculator program. Goodbye!\n";

    return 0;
}
