// Task.h
#ifndef TASK_H
#define TASK_H

#include <string_view>
#include <string>

// Class representing a task in the to-do list
class Task
{
private:
    std::string description{}; // Description of the task
    bool completed{};          // Flag indicating whether the task is completed or not

public:
    // Default constructor
    Task();
    // Constructor to initialize the task with a description
    Task(std::string_view desc);

    // Method to mark the task as completed
    void markCompleted();

    // Method to check if the task is completed
    bool isCompleted() const;

    // Method to get the description of the task
    std::string_view getDescription() const;
};

#endif // TASK_H
