#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include "to_do_list.h"
#include <iostream>
#include <limits>
class InputHandler
{
private:
    ToDoList clear;

public:
    bool charInputHandler();     // Function to handle char player input
    size_t size_tInputHandler(); // Function to handle integer player input
};
#endif
