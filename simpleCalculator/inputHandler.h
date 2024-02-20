#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <string_view>

class InputHandler
{
public:
    static double getDoubleInput(std::string_view prompt);
};

#endif
