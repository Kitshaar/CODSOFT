// ToDoList.cpp
#include "to_do_list.h"

// Constructor definition to initialize the to-do list
ToDoList::ToDoList() : numTasks(0) {}

// Method definition to add a task to the list
bool ToDoList::addTask(std::string_view desc)
{
    if (numTasks < MAX_TASKS)
    {                                   // Check if the list is full
        tasks[numTasks++] = Task(desc); // Add a new task to the list
        return true;
    }
    else
    {
        std::cout << "Maximum tasks limit reached.\n"; // Display a message if the list is full
        return false;
    }
}

// Method definition to view all tasks in the list
void ToDoList::viewTasks() const
{
    if (numTasks == 0)
    {
        std::cout << "No tasks found.\n"; // Display a message if the list is empty
    }
    else
    {
        for (size_t i = 0; i < numTasks; ++i)
        {
            std::cout << i + 1 << ". "; // Display task index
            if (tasks[i].isCompleted())
            {
                std::cout << "[X] "; // Display [X] if the task is completed
            }
            else
            {
                std::cout << "[ ] "; // Display [ ] if the task is incomplete
            }
            std::cout << tasks[i].getDescription() << '\n'; // Display task description
        }
    }
}

// Method definition to mark a task as completed
bool ToDoList::markTaskAsCompleted(size_t index)
{
    if (index >= 1 && index <= numTasks)
    {
        tasks[index - 1].markCompleted(); // Mark the task at the specified index as completed
        return true;
    }
    else
    {
        std::cout << "Invalid task index.\n"; // Display an error message if the index is out of range
        return false;
    }
}

// Method definition to remove a task from the list
bool ToDoList::removeTask(size_t index)
{
    if (index >= 1 && index <= numTasks)
    {
        for (size_t i = index - 1; i < numTasks - 1; ++i)
        {
            tasks[i] = tasks[i + 1]; // Shift tasks to the left to remove the task at the specified index
        }
        --numTasks; // Decrement the number of tasks
        return true;
    }
    else
    {
        std::cout << "Invalid task index.\n"; // Display an error message if the index is out of range
        return false;
    }
}

int main()
{
    ToDoList to_do;
    to_do.viewTasks();
    std::string desc{};
    std::cout << "Enter task description: ";
    std::getline(std::cin, desc); // Get task description
    to_do.addTask(desc);
    to_do.viewTasks();
    size_t index{};
    std::cout << "Enter task index to mark: ";
    std::cin >> index;
    to_do.markTaskAsCompleted(index);
    to_do.viewTasks();
    std::cout << "Enter task index to remove: ";
    std::cin >> index; // Get task index from user
    to_do.removeTask(index);
    to_do.viewTasks();

    return 0;
}