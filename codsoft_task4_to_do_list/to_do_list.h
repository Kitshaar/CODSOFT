// ToDoList.h
#ifndef TODOLIST_H
#define TODOLIST_H

#include "task.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

// Class representing a to-do list
class ToDoList
{
private:
    static constexpr size_t MAX_TASKS = 100; // Maximum number of tasks in the list
    Task tasks[MAX_TASKS];                   // Array to store tasks
    size_t numTasks{};                       // Number of tasks currently in the list

public:
    // Constructor to initialize the to-do list
    ToDoList();

    // Method to add a task to the list
    bool addTask(std::string_view desc);

    // Method to view all tasks in the list
    void viewTasks() const;

    // Method to mark a task as completed
    bool markTaskAsCompleted(size_t index);

    // Method to remove a task from the list
    bool removeTask(size_t index);

    void clearScreenAfterDelay(int seconds);
};

#endif // TODOLIST_H
