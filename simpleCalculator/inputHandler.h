#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <string_view>

class InputHandler
{
public:
    // Function to get a double input from the user with the provided prompt
    static double getDoubleInput(std::string_view prompt);
    static int InputHandler::getIntInput(std::string_view prompt);
};

#endif
