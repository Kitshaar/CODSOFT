#include "InputHandler.h"
#include <iostream>
#include <limits>
#include <cstdlib> // For exit()

// Function to get a double input from the user with the provided prompt
double InputHandler::getDoubleInput(std::string_view prompt)
{
    while (true)
    {
        double value{};
        // Display the prompt to the user
        std::cout << prompt;
        std::cin >> value;

        // Check if the read operation failed
        if (!std::cin)
        {
            // Check if the end of the file is reached
            if (std::cin.eof())
            {
                exit(0); // Exit the program gracefully if end of file is reached
            }

            // Clear the fail state of std::cin
            std::cin.clear();

            // Ignore any remaining characters in the input buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Display an error message to the user
            std::cout << "Invalid input. Please enter a valid number.\n";

            continue;
        }
        else
        {
            // If input is valid, ignore any remaining characters in the input buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            // Return the valid input value
            return value;
        }
    }
}

// Function to get a integer input from the user with the provided prompt
int InputHandler::getIntInput(std::string_view prompt)
{
    while (true)
    {
        int value{};
        // Display the prompt to the user
        std::cout << prompt;
        std::cin >> value;

        // Check if the read operation failed
        if (!std::cin)
        {
            // Check if the end of the file is reached
            if (std::cin.eof())
            {
                exit(0); // Exit the program gracefully if end of file is reached
            }

            // Clear the fail state of std::cin
            std::cin.clear();

            // Ignore any remaining characters in the input buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Display an error message to the user
            std::cout << "Invalid input. Please enter a valid number.\n";

            continue;
        }
        else
        {
            // If input is valid, ignore any remaining characters in the input buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            // Return the valid input value
            return value;
        }
    }
}