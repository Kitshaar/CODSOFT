#include "input_handler.h"
size_t InputHandler::size_tInputHandler()
{
    while (true)
    {
        size_t index{};
        std::cin >> index;

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
            return index;
        }
    }
}

bool InputHandler::charInputHandler()
{
    while (true)
    {
        char runAgainTrigger{};
        std::cin >> runAgainTrigger;

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
            std::cout << "Invalid input. Please enter a valid character.\n";

            continue;
        }
        else if (std::cin.peek() != '\n')
        {
            // If there are additional characters in the input buffer, clear them
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Display an error message to the user
            std::cout << "Invalid input. Please enter a single character.\n";

            continue;
        }
        else if (runAgainTrigger != 'y')
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            // Display an error message to the user
            std::cout << "Invalid input. Please enter the correct character.\n";
            std::cout << "Note: Capslock might be ON.\n";
            continue;
        }
        else
        {
            // If input is valid, ignore any remaining characters in the input buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            clear.clearScreenAfterDelay(1);
            return true;
        }
    }
}