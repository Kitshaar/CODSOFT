// Task.cpp
#include "Task.h"

// Default constructor
Task::Task() : description(""), completed(false) {}

// Constructor definition to initialize the task with a description
Task::Task(std::string_view desc) : description(desc), completed(false) {}

// Method definition to mark the task as completed
void Task::markCompleted()
{
    completed = true;
}

// Method definition to check if the task is completed
bool Task::isCompleted() const
{
    return completed;
}

// Method definition to get the description of the task
std::string_view Task::getDescription() const
{
    return description;
}
